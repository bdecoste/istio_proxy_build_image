#include "mocks.h"

#include "envoy/buffer/buffer.h"
#include "envoy/event/dispatcher.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

using testing::Invoke;
using testing::Return;
using testing::ReturnRef;
using testing::SaveArg;
using testing::_;

namespace Envoy {
namespace Http {

MockConnectionManagerConfig::MockConnectionManagerConfig() {
  ON_CALL(*this, generateRequestId()).WillByDefault(Return(true));
}

MockConnectionManagerConfig::~MockConnectionManagerConfig() {}

MockConnectionCallbacks::MockConnectionCallbacks() {}
MockConnectionCallbacks::~MockConnectionCallbacks() {}

MockServerConnectionCallbacks::MockServerConnectionCallbacks() {}
MockServerConnectionCallbacks::~MockServerConnectionCallbacks() {}

MockStreamDecoder::MockStreamDecoder() {}
MockStreamDecoder::~MockStreamDecoder() {}

MockStreamCallbacks::MockStreamCallbacks() {}
MockStreamCallbacks::~MockStreamCallbacks() {}

MockStream::MockStream() {
  ON_CALL(*this, addCallbacks(_)).WillByDefault(Invoke([this](StreamCallbacks& callbacks) -> void {
    callbacks_.push_back(&callbacks);
  }));

  ON_CALL(*this, removeCallbacks(_))
      .WillByDefault(
          Invoke([this](StreamCallbacks& callbacks) -> void { callbacks_.remove(&callbacks); }));

  ON_CALL(*this, resetStream(_)).WillByDefault(Invoke([this](StreamResetReason reason) -> void {
    for (StreamCallbacks* callbacks : callbacks_) {
      callbacks->onResetStream(reason);
    }
  }));
}

MockStream::~MockStream() {}

MockStreamEncoder::MockStreamEncoder() {
  ON_CALL(*this, getStream()).WillByDefault(ReturnRef(stream_));
}

MockStreamEncoder::~MockStreamEncoder() {}

MockServerConnection::MockServerConnection() {
  ON_CALL(*this, protocol()).WillByDefault(Return(protocol_));
}

MockServerConnection::~MockServerConnection() {}

MockClientConnection::MockClientConnection() {}
MockClientConnection::~MockClientConnection() {}

MockFilterChainFactory::MockFilterChainFactory() {}
MockFilterChainFactory::~MockFilterChainFactory() {}

template <class T> static void initializeMockStreamFilterCallbacks(T& callbacks) {
  callbacks.route_.reset(new NiceMock<Router::MockRoute>());
  ON_CALL(callbacks, dispatcher()).WillByDefault(ReturnRef(callbacks.dispatcher_));
  ON_CALL(callbacks, requestInfo()).WillByDefault(ReturnRef(callbacks.request_info_));
  ON_CALL(callbacks, route()).WillByDefault(Return(callbacks.route_));
  ON_CALL(callbacks, downstreamAddress()).WillByDefault(ReturnRef(callbacks.downstream_address_));
}

MockStreamDecoderFilterCallbacks::MockStreamDecoderFilterCallbacks() {
  initializeMockStreamFilterCallbacks(*this);
  ON_CALL(*this, decodingBuffer()).WillByDefault(Return(buffer_.get()));

  ON_CALL(*this, addDownstreamWatermarkCallbacks(_))
      .WillByDefault(Invoke([this](DownstreamWatermarkCallbacks& callbacks) -> void {
        callbacks_.push_back(&callbacks);
      }));

  ON_CALL(*this, removeDownstreamWatermarkCallbacks(_))
      .WillByDefault(Invoke([this](DownstreamWatermarkCallbacks& callbacks) -> void {
        callbacks_.remove(&callbacks);
      }));

  ON_CALL(*this, activeSpan()).WillByDefault(ReturnRef(active_span_));
}

MockStreamDecoderFilterCallbacks::~MockStreamDecoderFilterCallbacks() {}

MockStreamEncoderFilterCallbacks::MockStreamEncoderFilterCallbacks() {
  initializeMockStreamFilterCallbacks(*this);
  ON_CALL(*this, encodingBuffer()).WillByDefault(Return(buffer_.get()));
  ON_CALL(*this, activeSpan()).WillByDefault(ReturnRef(active_span_));
}

MockStreamEncoderFilterCallbacks::~MockStreamEncoderFilterCallbacks() {}

MockStreamDecoderFilter::MockStreamDecoderFilter() {
  ON_CALL(*this, setDecoderFilterCallbacks(_))
      .WillByDefault(Invoke(
          [this](StreamDecoderFilterCallbacks& callbacks) -> void { callbacks_ = &callbacks; }));
}

MockStreamDecoderFilter::~MockStreamDecoderFilter() {}

MockStreamEncoderFilter::MockStreamEncoderFilter() {
  ON_CALL(*this, setEncoderFilterCallbacks(_))
      .WillByDefault(Invoke(
          [this](StreamEncoderFilterCallbacks& callbacks) -> void { callbacks_ = &callbacks; }));
}

MockStreamEncoderFilter::~MockStreamEncoderFilter() {}

MockStreamFilter::MockStreamFilter() {
  ON_CALL(*this, setDecoderFilterCallbacks(_))
      .WillByDefault(Invoke([this](StreamDecoderFilterCallbacks& callbacks) -> void {
        decoder_callbacks_ = &callbacks;
      }));
  ON_CALL(*this, setEncoderFilterCallbacks(_))
      .WillByDefault(Invoke([this](StreamEncoderFilterCallbacks& callbacks) -> void {
        encoder_callbacks_ = &callbacks;
      }));
}

MockStreamFilter::~MockStreamFilter() {}

MockAsyncClient::MockAsyncClient() {
  ON_CALL(*this, dispatcher()).WillByDefault(ReturnRef(dispatcher_));
}
MockAsyncClient::~MockAsyncClient() {}

MockAsyncClientCallbacks::MockAsyncClientCallbacks() {}
MockAsyncClientCallbacks::~MockAsyncClientCallbacks() {}

MockAsyncClientStreamCallbacks::MockAsyncClientStreamCallbacks() {}
MockAsyncClientStreamCallbacks::~MockAsyncClientStreamCallbacks() {}

MockAsyncClientRequest::MockAsyncClientRequest(MockAsyncClient* client) : client_(client) {}
MockAsyncClientRequest::~MockAsyncClientRequest() { client_->onRequestDestroy(); }

MockAsyncClientStream::MockAsyncClientStream() {}
MockAsyncClientStream::~MockAsyncClientStream() {}

MockFilterChainFactoryCallbacks::MockFilterChainFactoryCallbacks() {}
MockFilterChainFactoryCallbacks::~MockFilterChainFactoryCallbacks() {}

} // namespace Http

namespace Http {
namespace ConnectionPool {

MockCancellable::MockCancellable() {}
MockCancellable::~MockCancellable() {}

MockInstance::MockInstance() {}
MockInstance::~MockInstance() {}

} // namespace ConnectionPool
} // namespace Http

namespace Http {
namespace AccessLog {

MockInstance::MockInstance() {}
MockInstance::~MockInstance() {}

MockRequestInfo::MockRequestInfo() {
  ON_CALL(*this, upstreamHost()).WillByDefault(Return(host_));
  ON_CALL(*this, startTime()).WillByDefault(Return(start_time_));
  ON_CALL(*this, requestReceivedDuration()).WillByDefault(Return(request_received_duration_));
  ON_CALL(*this, responseReceivedDuration()).WillByDefault(Return(response_received_duration_));
}

MockRequestInfo::~MockRequestInfo() {}

} // namespace AccessLog
} // namespace Http
} // namespace Envoy
