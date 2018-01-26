// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lightstep_carrier.proto

#ifndef PROTOBUF_lightstep_5fcarrier_2eproto__INCLUDED
#define PROTOBUF_lightstep_5fcarrier_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_lightstep_5fcarrier_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsBinaryCarrierImpl();
void InitDefaultsBinaryCarrier();
void InitDefaultsBasicTracerCarrier_BaggageItemsEntry_DoNotUseImpl();
void InitDefaultsBasicTracerCarrier_BaggageItemsEntry_DoNotUse();
void InitDefaultsBasicTracerCarrierImpl();
void InitDefaultsBasicTracerCarrier();
void InitDefaultsTextCarrierPairImpl();
void InitDefaultsTextCarrierPair();
inline void InitDefaults() {
  InitDefaultsBinaryCarrier();
  InitDefaultsBasicTracerCarrier_BaggageItemsEntry_DoNotUse();
  InitDefaultsBasicTracerCarrier();
  InitDefaultsTextCarrierPair();
}
}  // namespace protobuf_lightstep_5fcarrier_2eproto
namespace lightstep {
class BasicTracerCarrier;
class BasicTracerCarrierDefaultTypeInternal;
extern BasicTracerCarrierDefaultTypeInternal _BasicTracerCarrier_default_instance_;
class BasicTracerCarrier_BaggageItemsEntry_DoNotUse;
class BasicTracerCarrier_BaggageItemsEntry_DoNotUseDefaultTypeInternal;
extern BasicTracerCarrier_BaggageItemsEntry_DoNotUseDefaultTypeInternal _BasicTracerCarrier_BaggageItemsEntry_DoNotUse_default_instance_;
class BinaryCarrier;
class BinaryCarrierDefaultTypeInternal;
extern BinaryCarrierDefaultTypeInternal _BinaryCarrier_default_instance_;
class TextCarrierPair;
class TextCarrierPairDefaultTypeInternal;
extern TextCarrierPairDefaultTypeInternal _TextCarrierPair_default_instance_;
}  // namespace lightstep
namespace lightstep {

// ===================================================================

class BinaryCarrier : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lightstep.BinaryCarrier) */ {
 public:
  BinaryCarrier();
  virtual ~BinaryCarrier();

  BinaryCarrier(const BinaryCarrier& from);

  inline BinaryCarrier& operator=(const BinaryCarrier& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BinaryCarrier(BinaryCarrier&& from) noexcept
    : BinaryCarrier() {
    *this = ::std::move(from);
  }

  inline BinaryCarrier& operator=(BinaryCarrier&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BinaryCarrier& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BinaryCarrier* internal_default_instance() {
    return reinterpret_cast<const BinaryCarrier*>(
               &_BinaryCarrier_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BinaryCarrier* other);
  friend void swap(BinaryCarrier& a, BinaryCarrier& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BinaryCarrier* New() const PROTOBUF_FINAL { return New(NULL); }

  BinaryCarrier* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BinaryCarrier& from);
  void MergeFrom(const BinaryCarrier& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BinaryCarrier* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .lightstep.TextCarrierPair text_ctx = 1;
  int text_ctx_size() const;
  void clear_text_ctx();
  static const int kTextCtxFieldNumber = 1;
  const ::lightstep::TextCarrierPair& text_ctx(int index) const;
  ::lightstep::TextCarrierPair* mutable_text_ctx(int index);
  ::lightstep::TextCarrierPair* add_text_ctx();
  ::google::protobuf::RepeatedPtrField< ::lightstep::TextCarrierPair >*
      mutable_text_ctx();
  const ::google::protobuf::RepeatedPtrField< ::lightstep::TextCarrierPair >&
      text_ctx() const;

  // .lightstep.BasicTracerCarrier basic_ctx = 2;
  bool has_basic_ctx() const;
  void clear_basic_ctx();
  static const int kBasicCtxFieldNumber = 2;
  const ::lightstep::BasicTracerCarrier& basic_ctx() const;
  ::lightstep::BasicTracerCarrier* release_basic_ctx();
  ::lightstep::BasicTracerCarrier* mutable_basic_ctx();
  void set_allocated_basic_ctx(::lightstep::BasicTracerCarrier* basic_ctx);

  // @@protoc_insertion_point(class_scope:lightstep.BinaryCarrier)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::lightstep::TextCarrierPair > text_ctx_;
  ::lightstep::BasicTracerCarrier* basic_ctx_;
  mutable int _cached_size_;
  friend struct ::protobuf_lightstep_5fcarrier_2eproto::TableStruct;
  friend void ::protobuf_lightstep_5fcarrier_2eproto::InitDefaultsBinaryCarrierImpl();
};
// -------------------------------------------------------------------

class BasicTracerCarrier_BaggageItemsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<BasicTracerCarrier_BaggageItemsEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<BasicTracerCarrier_BaggageItemsEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  BasicTracerCarrier_BaggageItemsEntry_DoNotUse();
  BasicTracerCarrier_BaggageItemsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const BasicTracerCarrier_BaggageItemsEntry_DoNotUse& other);
  static const BasicTracerCarrier_BaggageItemsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const BasicTracerCarrier_BaggageItemsEntry_DoNotUse*>(&_BasicTracerCarrier_BaggageItemsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class BasicTracerCarrier : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lightstep.BasicTracerCarrier) */ {
 public:
  BasicTracerCarrier();
  virtual ~BasicTracerCarrier();

  BasicTracerCarrier(const BasicTracerCarrier& from);

  inline BasicTracerCarrier& operator=(const BasicTracerCarrier& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BasicTracerCarrier(BasicTracerCarrier&& from) noexcept
    : BasicTracerCarrier() {
    *this = ::std::move(from);
  }

  inline BasicTracerCarrier& operator=(BasicTracerCarrier&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BasicTracerCarrier& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BasicTracerCarrier* internal_default_instance() {
    return reinterpret_cast<const BasicTracerCarrier*>(
               &_BasicTracerCarrier_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(BasicTracerCarrier* other);
  friend void swap(BasicTracerCarrier& a, BasicTracerCarrier& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BasicTracerCarrier* New() const PROTOBUF_FINAL { return New(NULL); }

  BasicTracerCarrier* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BasicTracerCarrier& from);
  void MergeFrom(const BasicTracerCarrier& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BasicTracerCarrier* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> baggage_items = 4;
  int baggage_items_size() const;
  void clear_baggage_items();
  static const int kBaggageItemsFieldNumber = 4;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      baggage_items() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_baggage_items();

  // fixed64 trace_id = 1;
  void clear_trace_id();
  static const int kTraceIdFieldNumber = 1;
  ::google::protobuf::uint64 trace_id() const;
  void set_trace_id(::google::protobuf::uint64 value);

  // fixed64 span_id = 2;
  void clear_span_id();
  static const int kSpanIdFieldNumber = 2;
  ::google::protobuf::uint64 span_id() const;
  void set_span_id(::google::protobuf::uint64 value);

  // bool sampled = 3;
  void clear_sampled();
  static const int kSampledFieldNumber = 3;
  bool sampled() const;
  void set_sampled(bool value);

  // @@protoc_insertion_point(class_scope:lightstep.BasicTracerCarrier)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      BasicTracerCarrier_BaggageItemsEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > baggage_items_;
  ::google::protobuf::uint64 trace_id_;
  ::google::protobuf::uint64 span_id_;
  bool sampled_;
  mutable int _cached_size_;
  friend struct ::protobuf_lightstep_5fcarrier_2eproto::TableStruct;
  friend void ::protobuf_lightstep_5fcarrier_2eproto::InitDefaultsBasicTracerCarrierImpl();
};
// -------------------------------------------------------------------

class TextCarrierPair : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lightstep.TextCarrierPair) */ {
 public:
  TextCarrierPair();
  virtual ~TextCarrierPair();

  TextCarrierPair(const TextCarrierPair& from);

  inline TextCarrierPair& operator=(const TextCarrierPair& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TextCarrierPair(TextCarrierPair&& from) noexcept
    : TextCarrierPair() {
    *this = ::std::move(from);
  }

  inline TextCarrierPair& operator=(TextCarrierPair&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TextCarrierPair& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TextCarrierPair* internal_default_instance() {
    return reinterpret_cast<const TextCarrierPair*>(
               &_TextCarrierPair_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(TextCarrierPair* other);
  friend void swap(TextCarrierPair& a, TextCarrierPair& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TextCarrierPair* New() const PROTOBUF_FINAL { return New(NULL); }

  TextCarrierPair* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TextCarrierPair& from);
  void MergeFrom(const TextCarrierPair& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TextCarrierPair* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:lightstep.TextCarrierPair)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend struct ::protobuf_lightstep_5fcarrier_2eproto::TableStruct;
  friend void ::protobuf_lightstep_5fcarrier_2eproto::InitDefaultsTextCarrierPairImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BinaryCarrier

// repeated .lightstep.TextCarrierPair text_ctx = 1;
inline int BinaryCarrier::text_ctx_size() const {
  return text_ctx_.size();
}
inline void BinaryCarrier::clear_text_ctx() {
  text_ctx_.Clear();
}
inline const ::lightstep::TextCarrierPair& BinaryCarrier::text_ctx(int index) const {
  // @@protoc_insertion_point(field_get:lightstep.BinaryCarrier.text_ctx)
  return text_ctx_.Get(index);
}
inline ::lightstep::TextCarrierPair* BinaryCarrier::mutable_text_ctx(int index) {
  // @@protoc_insertion_point(field_mutable:lightstep.BinaryCarrier.text_ctx)
  return text_ctx_.Mutable(index);
}
inline ::lightstep::TextCarrierPair* BinaryCarrier::add_text_ctx() {
  // @@protoc_insertion_point(field_add:lightstep.BinaryCarrier.text_ctx)
  return text_ctx_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::lightstep::TextCarrierPair >*
BinaryCarrier::mutable_text_ctx() {
  // @@protoc_insertion_point(field_mutable_list:lightstep.BinaryCarrier.text_ctx)
  return &text_ctx_;
}
inline const ::google::protobuf::RepeatedPtrField< ::lightstep::TextCarrierPair >&
BinaryCarrier::text_ctx() const {
  // @@protoc_insertion_point(field_list:lightstep.BinaryCarrier.text_ctx)
  return text_ctx_;
}

// .lightstep.BasicTracerCarrier basic_ctx = 2;
inline bool BinaryCarrier::has_basic_ctx() const {
  return this != internal_default_instance() && basic_ctx_ != NULL;
}
inline void BinaryCarrier::clear_basic_ctx() {
  if (GetArenaNoVirtual() == NULL && basic_ctx_ != NULL) {
    delete basic_ctx_;
  }
  basic_ctx_ = NULL;
}
inline const ::lightstep::BasicTracerCarrier& BinaryCarrier::basic_ctx() const {
  const ::lightstep::BasicTracerCarrier* p = basic_ctx_;
  // @@protoc_insertion_point(field_get:lightstep.BinaryCarrier.basic_ctx)
  return p != NULL ? *p : *reinterpret_cast<const ::lightstep::BasicTracerCarrier*>(
      &::lightstep::_BasicTracerCarrier_default_instance_);
}
inline ::lightstep::BasicTracerCarrier* BinaryCarrier::release_basic_ctx() {
  // @@protoc_insertion_point(field_release:lightstep.BinaryCarrier.basic_ctx)
  
  ::lightstep::BasicTracerCarrier* temp = basic_ctx_;
  basic_ctx_ = NULL;
  return temp;
}
inline ::lightstep::BasicTracerCarrier* BinaryCarrier::mutable_basic_ctx() {
  
  if (basic_ctx_ == NULL) {
    basic_ctx_ = new ::lightstep::BasicTracerCarrier;
  }
  // @@protoc_insertion_point(field_mutable:lightstep.BinaryCarrier.basic_ctx)
  return basic_ctx_;
}
inline void BinaryCarrier::set_allocated_basic_ctx(::lightstep::BasicTracerCarrier* basic_ctx) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete basic_ctx_;
  }
  if (basic_ctx) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      basic_ctx = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, basic_ctx, submessage_arena);
    }
    
  } else {
    
  }
  basic_ctx_ = basic_ctx;
  // @@protoc_insertion_point(field_set_allocated:lightstep.BinaryCarrier.basic_ctx)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// BasicTracerCarrier

// fixed64 trace_id = 1;
inline void BasicTracerCarrier::clear_trace_id() {
  trace_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 BasicTracerCarrier::trace_id() const {
  // @@protoc_insertion_point(field_get:lightstep.BasicTracerCarrier.trace_id)
  return trace_id_;
}
inline void BasicTracerCarrier::set_trace_id(::google::protobuf::uint64 value) {
  
  trace_id_ = value;
  // @@protoc_insertion_point(field_set:lightstep.BasicTracerCarrier.trace_id)
}

// fixed64 span_id = 2;
inline void BasicTracerCarrier::clear_span_id() {
  span_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 BasicTracerCarrier::span_id() const {
  // @@protoc_insertion_point(field_get:lightstep.BasicTracerCarrier.span_id)
  return span_id_;
}
inline void BasicTracerCarrier::set_span_id(::google::protobuf::uint64 value) {
  
  span_id_ = value;
  // @@protoc_insertion_point(field_set:lightstep.BasicTracerCarrier.span_id)
}

// bool sampled = 3;
inline void BasicTracerCarrier::clear_sampled() {
  sampled_ = false;
}
inline bool BasicTracerCarrier::sampled() const {
  // @@protoc_insertion_point(field_get:lightstep.BasicTracerCarrier.sampled)
  return sampled_;
}
inline void BasicTracerCarrier::set_sampled(bool value) {
  
  sampled_ = value;
  // @@protoc_insertion_point(field_set:lightstep.BasicTracerCarrier.sampled)
}

// map<string, string> baggage_items = 4;
inline int BasicTracerCarrier::baggage_items_size() const {
  return baggage_items_.size();
}
inline void BasicTracerCarrier::clear_baggage_items() {
  baggage_items_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
BasicTracerCarrier::baggage_items() const {
  // @@protoc_insertion_point(field_map:lightstep.BasicTracerCarrier.baggage_items)
  return baggage_items_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
BasicTracerCarrier::mutable_baggage_items() {
  // @@protoc_insertion_point(field_mutable_map:lightstep.BasicTracerCarrier.baggage_items)
  return baggage_items_.MutableMap();
}

// -------------------------------------------------------------------

// TextCarrierPair

// string key = 1;
inline void TextCarrierPair::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TextCarrierPair::key() const {
  // @@protoc_insertion_point(field_get:lightstep.TextCarrierPair.key)
  return key_.GetNoArena();
}
inline void TextCarrierPair::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lightstep.TextCarrierPair.key)
}
#if LANG_CXX11
inline void TextCarrierPair::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lightstep.TextCarrierPair.key)
}
#endif
inline void TextCarrierPair::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lightstep.TextCarrierPair.key)
}
inline void TextCarrierPair::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lightstep.TextCarrierPair.key)
}
inline ::std::string* TextCarrierPair::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:lightstep.TextCarrierPair.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TextCarrierPair::release_key() {
  // @@protoc_insertion_point(field_release:lightstep.TextCarrierPair.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TextCarrierPair::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:lightstep.TextCarrierPair.key)
}

// string value = 2;
inline void TextCarrierPair::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TextCarrierPair::value() const {
  // @@protoc_insertion_point(field_get:lightstep.TextCarrierPair.value)
  return value_.GetNoArena();
}
inline void TextCarrierPair::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lightstep.TextCarrierPair.value)
}
#if LANG_CXX11
inline void TextCarrierPair::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lightstep.TextCarrierPair.value)
}
#endif
inline void TextCarrierPair::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lightstep.TextCarrierPair.value)
}
inline void TextCarrierPair::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lightstep.TextCarrierPair.value)
}
inline ::std::string* TextCarrierPair::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:lightstep.TextCarrierPair.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TextCarrierPair::release_value() {
  // @@protoc_insertion_point(field_release:lightstep.TextCarrierPair.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TextCarrierPair::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:lightstep.TextCarrierPair.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace lightstep

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lightstep_5fcarrier_2eproto__INCLUDED
