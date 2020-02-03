// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_refbox_log.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frefbox_5flog_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frefbox_5flog_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "messages_robocup_ssl_detection.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_5frobocup_5fssl_5frefbox_5flog_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_5frobocup_5fssl_5frefbox_5flog_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5frobocup_5fssl_5frefbox_5flog_2eproto;
class Log_Frame;
class Log_FrameDefaultTypeInternal;
extern Log_FrameDefaultTypeInternal _Log_Frame_default_instance_;
class Refbox_Log;
class Refbox_LogDefaultTypeInternal;
extern Refbox_LogDefaultTypeInternal _Refbox_Log_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Log_Frame* Arena::CreateMaybeMessage<::Log_Frame>(Arena*);
template<> ::Refbox_Log* Arena::CreateMaybeMessage<::Refbox_Log>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Log_Frame :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Log_Frame) */ {
 public:
  Log_Frame();
  virtual ~Log_Frame();

  Log_Frame(const Log_Frame& from);
  Log_Frame(Log_Frame&& from) noexcept
    : Log_Frame() {
    *this = ::std::move(from);
  }

  inline Log_Frame& operator=(const Log_Frame& from) {
    CopyFrom(from);
    return *this;
  }
  inline Log_Frame& operator=(Log_Frame&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Log_Frame& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Log_Frame* internal_default_instance() {
    return reinterpret_cast<const Log_Frame*>(
               &_Log_Frame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Log_Frame& a, Log_Frame& b) {
    a.Swap(&b);
  }
  inline void Swap(Log_Frame* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Log_Frame* New() const final {
    return CreateMaybeMessage<Log_Frame>(nullptr);
  }

  Log_Frame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Log_Frame>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Log_Frame& from);
  void MergeFrom(const Log_Frame& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Log_Frame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Log_Frame";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5frobocup_5fssl_5frefbox_5flog_2eproto);
    return ::descriptor_table_messages_5frobocup_5fssl_5frefbox_5flog_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRefboxCmdFieldNumber = 2,
    kFrameFieldNumber = 1,
  };
  // required string refbox_cmd = 2;
  bool has_refbox_cmd() const;
  private:
  bool _internal_has_refbox_cmd() const;
  public:
  void clear_refbox_cmd();
  const std::string& refbox_cmd() const;
  void set_refbox_cmd(const std::string& value);
  void set_refbox_cmd(std::string&& value);
  void set_refbox_cmd(const char* value);
  void set_refbox_cmd(const char* value, size_t size);
  std::string* mutable_refbox_cmd();
  std::string* release_refbox_cmd();
  void set_allocated_refbox_cmd(std::string* refbox_cmd);
  private:
  const std::string& _internal_refbox_cmd() const;
  void _internal_set_refbox_cmd(const std::string& value);
  std::string* _internal_mutable_refbox_cmd();
  public:

  // required .SSL_DetectionFrame frame = 1;
  bool has_frame() const;
  private:
  bool _internal_has_frame() const;
  public:
  void clear_frame();
  const ::SSL_DetectionFrame& frame() const;
  ::SSL_DetectionFrame* release_frame();
  ::SSL_DetectionFrame* mutable_frame();
  void set_allocated_frame(::SSL_DetectionFrame* frame);
  private:
  const ::SSL_DetectionFrame& _internal_frame() const;
  ::SSL_DetectionFrame* _internal_mutable_frame();
  public:

  // @@protoc_insertion_point(class_scope:Log_Frame)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr refbox_cmd_;
  ::SSL_DetectionFrame* frame_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5frefbox_5flog_2eproto;
};
// -------------------------------------------------------------------

class Refbox_Log :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Refbox_Log) */ {
 public:
  Refbox_Log();
  virtual ~Refbox_Log();

  Refbox_Log(const Refbox_Log& from);
  Refbox_Log(Refbox_Log&& from) noexcept
    : Refbox_Log() {
    *this = ::std::move(from);
  }

  inline Refbox_Log& operator=(const Refbox_Log& from) {
    CopyFrom(from);
    return *this;
  }
  inline Refbox_Log& operator=(Refbox_Log&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Refbox_Log& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Refbox_Log* internal_default_instance() {
    return reinterpret_cast<const Refbox_Log*>(
               &_Refbox_Log_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Refbox_Log& a, Refbox_Log& b) {
    a.Swap(&b);
  }
  inline void Swap(Refbox_Log* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Refbox_Log* New() const final {
    return CreateMaybeMessage<Refbox_Log>(nullptr);
  }

  Refbox_Log* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Refbox_Log>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Refbox_Log& from);
  void MergeFrom(const Refbox_Log& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Refbox_Log* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Refbox_Log";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5frobocup_5fssl_5frefbox_5flog_2eproto);
    return ::descriptor_table_messages_5frobocup_5fssl_5frefbox_5flog_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogFieldNumber = 1,
  };
  // repeated .Log_Frame log = 1;
  int log_size() const;
  private:
  int _internal_log_size() const;
  public:
  void clear_log();
  ::Log_Frame* mutable_log(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >*
      mutable_log();
  private:
  const ::Log_Frame& _internal_log(int index) const;
  ::Log_Frame* _internal_add_log();
  public:
  const ::Log_Frame& log(int index) const;
  ::Log_Frame* add_log();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >&
      log() const;

  // @@protoc_insertion_point(class_scope:Refbox_Log)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame > log_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5frefbox_5flog_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Log_Frame

// required .SSL_DetectionFrame frame = 1;
inline bool Log_Frame::_internal_has_frame() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || frame_ != nullptr);
  return value;
}
inline bool Log_Frame::has_frame() const {
  return _internal_has_frame();
}
inline const ::SSL_DetectionFrame& Log_Frame::_internal_frame() const {
  const ::SSL_DetectionFrame* p = frame_;
  return p != nullptr ? *p : *reinterpret_cast<const ::SSL_DetectionFrame*>(
      &::_SSL_DetectionFrame_default_instance_);
}
inline const ::SSL_DetectionFrame& Log_Frame::frame() const {
  // @@protoc_insertion_point(field_get:Log_Frame.frame)
  return _internal_frame();
}
inline ::SSL_DetectionFrame* Log_Frame::release_frame() {
  // @@protoc_insertion_point(field_release:Log_Frame.frame)
  _has_bits_[0] &= ~0x00000002u;
  ::SSL_DetectionFrame* temp = frame_;
  frame_ = nullptr;
  return temp;
}
inline ::SSL_DetectionFrame* Log_Frame::_internal_mutable_frame() {
  _has_bits_[0] |= 0x00000002u;
  if (frame_ == nullptr) {
    auto* p = CreateMaybeMessage<::SSL_DetectionFrame>(GetArenaNoVirtual());
    frame_ = p;
  }
  return frame_;
}
inline ::SSL_DetectionFrame* Log_Frame::mutable_frame() {
  // @@protoc_insertion_point(field_mutable:Log_Frame.frame)
  return _internal_mutable_frame();
}
inline void Log_Frame::set_allocated_frame(::SSL_DetectionFrame* frame) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(frame_);
  }
  if (frame) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      frame = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, frame, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  frame_ = frame;
  // @@protoc_insertion_point(field_set_allocated:Log_Frame.frame)
}

// required string refbox_cmd = 2;
inline bool Log_Frame::_internal_has_refbox_cmd() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Log_Frame::has_refbox_cmd() const {
  return _internal_has_refbox_cmd();
}
inline void Log_Frame::clear_refbox_cmd() {
  refbox_cmd_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Log_Frame::refbox_cmd() const {
  // @@protoc_insertion_point(field_get:Log_Frame.refbox_cmd)
  return _internal_refbox_cmd();
}
inline void Log_Frame::set_refbox_cmd(const std::string& value) {
  _internal_set_refbox_cmd(value);
  // @@protoc_insertion_point(field_set:Log_Frame.refbox_cmd)
}
inline std::string* Log_Frame::mutable_refbox_cmd() {
  // @@protoc_insertion_point(field_mutable:Log_Frame.refbox_cmd)
  return _internal_mutable_refbox_cmd();
}
inline const std::string& Log_Frame::_internal_refbox_cmd() const {
  return refbox_cmd_.GetNoArena();
}
inline void Log_Frame::_internal_set_refbox_cmd(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  refbox_cmd_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Log_Frame::set_refbox_cmd(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  refbox_cmd_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Log_Frame.refbox_cmd)
}
inline void Log_Frame::set_refbox_cmd(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  refbox_cmd_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Log_Frame.refbox_cmd)
}
inline void Log_Frame::set_refbox_cmd(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  refbox_cmd_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Log_Frame.refbox_cmd)
}
inline std::string* Log_Frame::_internal_mutable_refbox_cmd() {
  _has_bits_[0] |= 0x00000001u;
  return refbox_cmd_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Log_Frame::release_refbox_cmd() {
  // @@protoc_insertion_point(field_release:Log_Frame.refbox_cmd)
  if (!_internal_has_refbox_cmd()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return refbox_cmd_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Log_Frame::set_allocated_refbox_cmd(std::string* refbox_cmd) {
  if (refbox_cmd != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  refbox_cmd_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), refbox_cmd);
  // @@protoc_insertion_point(field_set_allocated:Log_Frame.refbox_cmd)
}

// -------------------------------------------------------------------

// Refbox_Log

// repeated .Log_Frame log = 1;
inline int Refbox_Log::_internal_log_size() const {
  return log_.size();
}
inline int Refbox_Log::log_size() const {
  return _internal_log_size();
}
inline void Refbox_Log::clear_log() {
  log_.Clear();
}
inline ::Log_Frame* Refbox_Log::mutable_log(int index) {
  // @@protoc_insertion_point(field_mutable:Refbox_Log.log)
  return log_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >*
Refbox_Log::mutable_log() {
  // @@protoc_insertion_point(field_mutable_list:Refbox_Log.log)
  return &log_;
}
inline const ::Log_Frame& Refbox_Log::_internal_log(int index) const {
  return log_.Get(index);
}
inline const ::Log_Frame& Refbox_Log::log(int index) const {
  // @@protoc_insertion_point(field_get:Refbox_Log.log)
  return _internal_log(index);
}
inline ::Log_Frame* Refbox_Log::_internal_add_log() {
  return log_.Add();
}
inline ::Log_Frame* Refbox_Log::add_log() {
  // @@protoc_insertion_point(field_add:Refbox_Log.log)
  return _internal_add_log();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >&
Refbox_Log::log() const {
  // @@protoc_insertion_point(field_list:Refbox_Log.log)
  return log_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frefbox_5flog_2eproto
