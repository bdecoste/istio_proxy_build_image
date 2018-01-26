#include <iostream>
#include <string>

#include "test.h"

#include "lightstep/carrier.h"
#include "lightstep/tracer.h"

namespace {

const char base64bytes[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

// See http://stackoverflow.com/questions/180947/base64-decode-snippet-in-c
std::string base64_decode(const std::string &in) {
    std::string out;

    std::vector<int> T(256,-1);
    for (int i=0; i<64; i++) T[base64bytes[i]] = i; 

    int val=0, valb=-8;
    for (unsigned char c : in) {
        if (T[c] == -1) break;
        val = (val<<6) + T[c];
        valb += 6;
        if (valb>=0) {
            out.push_back(char((val>>valb)&0xFF));
            valb-=8;
        }
    }
    return out;
}

std::string base64_encode(const std::string &in) {
    std::string out;

    int val=0, valb=-6;
    for (unsigned char c : in) {
        val = (val<<8) + c;
        valb += 8;
        while (valb>=0) {
            out.push_back(base64bytes[(val>>valb)&0x3F]);
            valb-=6;
        }
    }
    if (valb>-6) out.push_back(base64bytes[((val<<8)>>(valb+8))&0x3F]);
    while (out.size()%4) out.push_back('=');
    return out;
}

} // namespace

int main() {
  try {
    
    auto tracer = lightstep::NewUserDefinedTransportLightStepTracer(
	              lightstep::TracerOptions(),
		      [](const lightstep::TracerImpl& impl) {
	  return std::unique_ptr<lightstep::Recorder>(new TestRecorder(impl));
      });

    lightstep::BinaryCarrier binary_orig;
    lightstep::BasicTracerCarrier *basic = binary_orig.mutable_basic_ctx();
    basic->set_span_id(6397081719746291766L);
    basic->set_trace_id(506100417967962170L);
    basic->set_sampled(true);
    (*basic->mutable_baggage_items())["checked"] = "baggage";
    
    lightstep::SpanContext test1 =
      tracer.Extract(lightstep::CarrierFormat::LightStepBinaryCarrier,
		     lightstep::ProtoReader(binary_orig));

    // Test migration using both formats.
    lightstep::BinaryCarrier binary_dual1;
    if (!tracer.Inject(test1,
		       lightstep::CarrierFormat::LightStepBinaryCarrier,
		       lightstep::ProtoWriter(&binary_dual1))) {
      throw error("inject failed");
    }
    lightstep::BinaryCarrier binary_text = binary_dual1;
    lightstep::BinaryCarrier binary_basic = binary_dual1;
    binary_basic.clear_text_ctx();
    binary_text.clear_basic_ctx();

    std::string data_orig = binary_orig.SerializeAsString();
    std::string data_basic = binary_basic.SerializeAsString();

    // TODO Use gUNIT for testing proto equivalence, as proto-encoding
    // is not required to be pass an equals test (it's safe here,
    // since we use a single baggage item and the protolib always
    // encodes in tag order).
    if (data_orig != data_basic) {
      throw error("proto data mismatch [" + data_orig + "] != [" + data_basic + "]");
    }

    // Test extraction of the text carrier format.
    lightstep::SpanContext test2 =
      tracer.Extract(lightstep::CarrierFormat::LightStepBinaryCarrier,
		     lightstep::ProtoReader(binary_text));

    lightstep::BinaryCarrier binary_dual2;
    if (!tracer.Inject(test2,
		       lightstep::CarrierFormat::LightStepBinaryCarrier,
		       lightstep::ProtoWriter(&binary_dual2))) {
      throw error("inject failed");
    }

    std::string data_dual1 = binary_dual1.SerializeAsString();
    std::string data_dual2 = binary_dual2.SerializeAsString();

    if (data_dual1 != data_dual2) {
      throw error("proto data mismatch [" + data_dual1 + "] != [" + data_dual2 + "]");
    }

    // Test extraction of a well-known input, for validation with other libraries.
    const char same_data64[] = "EigJOjioEaYHBgcRNmifUO7/xlgYASISCgdjaGVja2VkEgdiYWdnYWdl";
    std::string same_data = base64_decode(same_data64);

    // The "same" data was generated in this code, so this test only
    // identifies a change of behavior.
    if (same_data != data_basic) {
      throw error("well-known data mismatch");
    }

    lightstep::BinaryCarrier same_basic;
    same_basic.ParseFromString(same_data);

    if (same_basic.basic_ctx().trace_id() != 506100417967962170L) {
      throw error("incorrect trace_id");
    }
    if (same_basic.basic_ctx().span_id() != 6397081719746291766L) {
      throw error("incorrect trace_id");
    }
    if (same_basic.basic_ctx().sampled() != true) {
      throw error("incorrect trace_id");
    }
    if (same_basic.basic_ctx().baggage_items_size() != 1 ||
	same_basic.basic_ctx().baggage_items().at("checked") != "baggage") {
      throw error("incorrect baggage");
    }

    // Now again with some data from the Python library:
    std::string py_data64 = "EigJEX+FpwZ/EmYR2gfYQbxCMskYASISCgdjaGVja2VkEgdiYWdnYWdl";
    std::string py_data = base64_decode(py_data64);
    
    lightstep::BinaryCarrier py_carrier;
    py_carrier.ParseFromString(py_data);

    if (py_carrier.basic_ctx().trace_id() != 7355080808006516497L) {
      throw error("incorrect trace_id");
    }
    if (py_carrier.basic_ctx().span_id() != 14497723526785009626UL) {
      throw error("incorrect trace_id");
    }
    if (py_carrier.basic_ctx().sampled() != true) {
      throw error("incorrect trace_id");
    }
    if (py_carrier.basic_ctx().baggage_items_size() != 1 ||
	py_carrier.basic_ctx().baggage_items().at("checked") != "baggage") {
      throw error("incorrect baggage");
    }

    
  } catch (std::exception &e) {
    std::cerr << "Exception! " << e.what() << std::endl;
    return 1;
  }

  std::cerr << "Success!" << std::endl;
  return 0;
}
