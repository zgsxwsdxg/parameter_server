// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data/proto/example.proto

#ifndef PROTOBUF_data_2fproto_2fexample_2eproto__INCLUDED
#define PROTOBUF_data_2fproto_2fexample_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_data_2fproto_2fexample_2eproto();
void protobuf_AssignDesc_data_2fproto_2fexample_2eproto();
void protobuf_ShutdownFile_data_2fproto_2fexample_2eproto();

class SlotInfo;
class ExampleInfo;
class Slot;
class Example;

enum SlotInfo_Format {
  SlotInfo_Format_DENSE = 1,
  SlotInfo_Format_SPARSE = 2,
  SlotInfo_Format_SPARSE_BINARY = 3
};
bool SlotInfo_Format_IsValid(int value);
const SlotInfo_Format SlotInfo_Format_Format_MIN = SlotInfo_Format_DENSE;
const SlotInfo_Format SlotInfo_Format_Format_MAX = SlotInfo_Format_SPARSE_BINARY;
const int SlotInfo_Format_Format_ARRAYSIZE = SlotInfo_Format_Format_MAX + 1;

const ::google::protobuf::EnumDescriptor* SlotInfo_Format_descriptor();
inline const ::std::string& SlotInfo_Format_Name(SlotInfo_Format value) {
  return ::google::protobuf::internal::NameOfEnum(
    SlotInfo_Format_descriptor(), value);
}
inline bool SlotInfo_Format_Parse(
    const ::std::string& name, SlotInfo_Format* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SlotInfo_Format>(
    SlotInfo_Format_descriptor(), name, value);
}
// ===================================================================

class SlotInfo : public ::google::protobuf::Message {
 public:
  SlotInfo();
  virtual ~SlotInfo();

  SlotInfo(const SlotInfo& from);

  inline SlotInfo& operator=(const SlotInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SlotInfo& default_instance();

  void Swap(SlotInfo* other);

  // implements Message ----------------------------------------------

  SlotInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SlotInfo& from);
  void MergeFrom(const SlotInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SlotInfo_Format Format;
  static const Format DENSE = SlotInfo_Format_DENSE;
  static const Format SPARSE = SlotInfo_Format_SPARSE;
  static const Format SPARSE_BINARY = SlotInfo_Format_SPARSE_BINARY;
  static inline bool Format_IsValid(int value) {
    return SlotInfo_Format_IsValid(value);
  }
  static const Format Format_MIN =
    SlotInfo_Format_Format_MIN;
  static const Format Format_MAX =
    SlotInfo_Format_Format_MAX;
  static const int Format_ARRAYSIZE =
    SlotInfo_Format_Format_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Format_descriptor() {
    return SlotInfo_Format_descriptor();
  }
  static inline const ::std::string& Format_Name(Format value) {
    return SlotInfo_Format_Name(value);
  }
  static inline bool Format_Parse(const ::std::string& name,
      Format* value) {
    return SlotInfo_Format_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .PS.SlotInfo.Format format = 1;
  inline bool has_format() const;
  inline void clear_format();
  static const int kFormatFieldNumber = 1;
  inline ::PS::SlotInfo_Format format() const;
  inline void set_format(::PS::SlotInfo_Format value);

  // optional int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional uint64 min_key = 3 [default = 18446744073709551615];
  inline bool has_min_key() const;
  inline void clear_min_key();
  static const int kMinKeyFieldNumber = 3;
  inline ::google::protobuf::uint64 min_key() const;
  inline void set_min_key(::google::protobuf::uint64 value);

  // optional uint64 max_key = 4;
  inline bool has_max_key() const;
  inline void clear_max_key();
  static const int kMaxKeyFieldNumber = 4;
  inline ::google::protobuf::uint64 max_key() const;
  inline void set_max_key(::google::protobuf::uint64 value);

  // optional uint64 nnz_ele = 5;
  inline bool has_nnz_ele() const;
  inline void clear_nnz_ele();
  static const int kNnzEleFieldNumber = 5;
  inline ::google::protobuf::uint64 nnz_ele() const;
  inline void set_nnz_ele(::google::protobuf::uint64 value);

  // optional uint64 nnz_ex = 6;
  inline bool has_nnz_ex() const;
  inline void clear_nnz_ex();
  static const int kNnzExFieldNumber = 6;
  inline ::google::protobuf::uint64 nnz_ex() const;
  inline void set_nnz_ex(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:PS.SlotInfo)
 private:
  inline void set_has_format();
  inline void clear_has_format();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_min_key();
  inline void clear_has_min_key();
  inline void set_has_max_key();
  inline void clear_has_max_key();
  inline void set_has_nnz_ele();
  inline void clear_has_nnz_ele();
  inline void set_has_nnz_ex();
  inline void clear_has_nnz_ex();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int format_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::uint64 min_key_;
  ::google::protobuf::uint64 max_key_;
  ::google::protobuf::uint64 nnz_ele_;
  ::google::protobuf::uint64 nnz_ex_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_AssignDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_ShutdownFile_data_2fproto_2fexample_2eproto();

  void InitAsDefaultInstance();
  static SlotInfo* default_instance_;
};
// -------------------------------------------------------------------

class ExampleInfo : public ::google::protobuf::Message {
 public:
  ExampleInfo();
  virtual ~ExampleInfo();

  ExampleInfo(const ExampleInfo& from);

  inline ExampleInfo& operator=(const ExampleInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExampleInfo& default_instance();

  void Swap(ExampleInfo* other);

  // implements Message ----------------------------------------------

  ExampleInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExampleInfo& from);
  void MergeFrom(const ExampleInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PS.SlotInfo slot = 1;
  inline int slot_size() const;
  inline void clear_slot();
  static const int kSlotFieldNumber = 1;
  inline const ::PS::SlotInfo& slot(int index) const;
  inline ::PS::SlotInfo* mutable_slot(int index);
  inline ::PS::SlotInfo* add_slot();
  inline const ::google::protobuf::RepeatedPtrField< ::PS::SlotInfo >&
      slot() const;
  inline ::google::protobuf::RepeatedPtrField< ::PS::SlotInfo >*
      mutable_slot();

  // optional uint64 num_ex = 2;
  inline bool has_num_ex() const;
  inline void clear_num_ex();
  static const int kNumExFieldNumber = 2;
  inline ::google::protobuf::uint64 num_ex() const;
  inline void set_num_ex(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:PS.ExampleInfo)
 private:
  inline void set_has_num_ex();
  inline void clear_has_num_ex();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::PS::SlotInfo > slot_;
  ::google::protobuf::uint64 num_ex_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_AssignDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_ShutdownFile_data_2fproto_2fexample_2eproto();

  void InitAsDefaultInstance();
  static ExampleInfo* default_instance_;
};
// -------------------------------------------------------------------

class Slot : public ::google::protobuf::Message {
 public:
  Slot();
  virtual ~Slot();

  Slot(const Slot& from);

  inline Slot& operator=(const Slot& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Slot& default_instance();

  void Swap(Slot* other);

  // implements Message ----------------------------------------------

  Slot* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Slot& from);
  void MergeFrom(const Slot& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // repeated uint64 key = 2 [packed = true];
  inline int key_size() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 2;
  inline ::google::protobuf::uint64 key(int index) const;
  inline void set_key(int index, ::google::protobuf::uint64 value);
  inline void add_key(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      key() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_key();

  // repeated float val = 3 [packed = true];
  inline int val_size() const;
  inline void clear_val();
  static const int kValFieldNumber = 3;
  inline float val(int index) const;
  inline void set_val(int index, float value);
  inline void add_val(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      val() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_val();

  // @@protoc_insertion_point(class_scope:PS.Slot)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > key_;
  mutable int _key_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > val_;
  mutable int _val_cached_byte_size_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_AssignDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_ShutdownFile_data_2fproto_2fexample_2eproto();

  void InitAsDefaultInstance();
  static Slot* default_instance_;
};
// -------------------------------------------------------------------

class Example : public ::google::protobuf::Message {
 public:
  Example();
  virtual ~Example();

  Example(const Example& from);

  inline Example& operator=(const Example& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Example& default_instance();

  void Swap(Example* other);

  // implements Message ----------------------------------------------

  Example* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Example& from);
  void MergeFrom(const Example& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PS.Slot slot = 1;
  inline int slot_size() const;
  inline void clear_slot();
  static const int kSlotFieldNumber = 1;
  inline const ::PS::Slot& slot(int index) const;
  inline ::PS::Slot* mutable_slot(int index);
  inline ::PS::Slot* add_slot();
  inline const ::google::protobuf::RepeatedPtrField< ::PS::Slot >&
      slot() const;
  inline ::google::protobuf::RepeatedPtrField< ::PS::Slot >*
      mutable_slot();

  // @@protoc_insertion_point(class_scope:PS.Example)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::PS::Slot > slot_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_AssignDesc_data_2fproto_2fexample_2eproto();
  friend void protobuf_ShutdownFile_data_2fproto_2fexample_2eproto();

  void InitAsDefaultInstance();
  static Example* default_instance_;
};
// ===================================================================


// ===================================================================

// SlotInfo

// optional .PS.SlotInfo.Format format = 1;
inline bool SlotInfo::has_format() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SlotInfo::set_has_format() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SlotInfo::clear_has_format() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SlotInfo::clear_format() {
  format_ = 1;
  clear_has_format();
}
inline ::PS::SlotInfo_Format SlotInfo::format() const {
  return static_cast< ::PS::SlotInfo_Format >(format_);
}
inline void SlotInfo::set_format(::PS::SlotInfo_Format value) {
  assert(::PS::SlotInfo_Format_IsValid(value));
  set_has_format();
  format_ = value;
}

// optional int32 id = 2;
inline bool SlotInfo::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SlotInfo::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SlotInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SlotInfo::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SlotInfo::id() const {
  return id_;
}
inline void SlotInfo::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional uint64 min_key = 3 [default = 18446744073709551615];
inline bool SlotInfo::has_min_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SlotInfo::set_has_min_key() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SlotInfo::clear_has_min_key() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SlotInfo::clear_min_key() {
  min_key_ = GOOGLE_ULONGLONG(18446744073709551615);
  clear_has_min_key();
}
inline ::google::protobuf::uint64 SlotInfo::min_key() const {
  return min_key_;
}
inline void SlotInfo::set_min_key(::google::protobuf::uint64 value) {
  set_has_min_key();
  min_key_ = value;
}

// optional uint64 max_key = 4;
inline bool SlotInfo::has_max_key() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SlotInfo::set_has_max_key() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SlotInfo::clear_has_max_key() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SlotInfo::clear_max_key() {
  max_key_ = GOOGLE_ULONGLONG(0);
  clear_has_max_key();
}
inline ::google::protobuf::uint64 SlotInfo::max_key() const {
  return max_key_;
}
inline void SlotInfo::set_max_key(::google::protobuf::uint64 value) {
  set_has_max_key();
  max_key_ = value;
}

// optional uint64 nnz_ele = 5;
inline bool SlotInfo::has_nnz_ele() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SlotInfo::set_has_nnz_ele() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SlotInfo::clear_has_nnz_ele() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SlotInfo::clear_nnz_ele() {
  nnz_ele_ = GOOGLE_ULONGLONG(0);
  clear_has_nnz_ele();
}
inline ::google::protobuf::uint64 SlotInfo::nnz_ele() const {
  return nnz_ele_;
}
inline void SlotInfo::set_nnz_ele(::google::protobuf::uint64 value) {
  set_has_nnz_ele();
  nnz_ele_ = value;
}

// optional uint64 nnz_ex = 6;
inline bool SlotInfo::has_nnz_ex() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SlotInfo::set_has_nnz_ex() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SlotInfo::clear_has_nnz_ex() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SlotInfo::clear_nnz_ex() {
  nnz_ex_ = GOOGLE_ULONGLONG(0);
  clear_has_nnz_ex();
}
inline ::google::protobuf::uint64 SlotInfo::nnz_ex() const {
  return nnz_ex_;
}
inline void SlotInfo::set_nnz_ex(::google::protobuf::uint64 value) {
  set_has_nnz_ex();
  nnz_ex_ = value;
}

// -------------------------------------------------------------------

// ExampleInfo

// repeated .PS.SlotInfo slot = 1;
inline int ExampleInfo::slot_size() const {
  return slot_.size();
}
inline void ExampleInfo::clear_slot() {
  slot_.Clear();
}
inline const ::PS::SlotInfo& ExampleInfo::slot(int index) const {
  return slot_.Get(index);
}
inline ::PS::SlotInfo* ExampleInfo::mutable_slot(int index) {
  return slot_.Mutable(index);
}
inline ::PS::SlotInfo* ExampleInfo::add_slot() {
  return slot_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PS::SlotInfo >&
ExampleInfo::slot() const {
  return slot_;
}
inline ::google::protobuf::RepeatedPtrField< ::PS::SlotInfo >*
ExampleInfo::mutable_slot() {
  return &slot_;
}

// optional uint64 num_ex = 2;
inline bool ExampleInfo::has_num_ex() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExampleInfo::set_has_num_ex() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExampleInfo::clear_has_num_ex() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExampleInfo::clear_num_ex() {
  num_ex_ = GOOGLE_ULONGLONG(0);
  clear_has_num_ex();
}
inline ::google::protobuf::uint64 ExampleInfo::num_ex() const {
  return num_ex_;
}
inline void ExampleInfo::set_num_ex(::google::protobuf::uint64 value) {
  set_has_num_ex();
  num_ex_ = value;
}

// -------------------------------------------------------------------

// Slot

// optional int32 id = 1;
inline bool Slot::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Slot::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Slot::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Slot::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Slot::id() const {
  return id_;
}
inline void Slot::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated uint64 key = 2 [packed = true];
inline int Slot::key_size() const {
  return key_.size();
}
inline void Slot::clear_key() {
  key_.Clear();
}
inline ::google::protobuf::uint64 Slot::key(int index) const {
  return key_.Get(index);
}
inline void Slot::set_key(int index, ::google::protobuf::uint64 value) {
  key_.Set(index, value);
}
inline void Slot::add_key(::google::protobuf::uint64 value) {
  key_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Slot::key() const {
  return key_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Slot::mutable_key() {
  return &key_;
}

// repeated float val = 3 [packed = true];
inline int Slot::val_size() const {
  return val_.size();
}
inline void Slot::clear_val() {
  val_.Clear();
}
inline float Slot::val(int index) const {
  return val_.Get(index);
}
inline void Slot::set_val(int index, float value) {
  val_.Set(index, value);
}
inline void Slot::add_val(float value) {
  val_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
Slot::val() const {
  return val_;
}
inline ::google::protobuf::RepeatedField< float >*
Slot::mutable_val() {
  return &val_;
}

// -------------------------------------------------------------------

// Example

// repeated .PS.Slot slot = 1;
inline int Example::slot_size() const {
  return slot_.size();
}
inline void Example::clear_slot() {
  slot_.Clear();
}
inline const ::PS::Slot& Example::slot(int index) const {
  return slot_.Get(index);
}
inline ::PS::Slot* Example::mutable_slot(int index) {
  return slot_.Mutable(index);
}
inline ::PS::Slot* Example::add_slot() {
  return slot_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PS::Slot >&
Example::slot() const {
  return slot_;
}
inline ::google::protobuf::RepeatedPtrField< ::PS::Slot >*
Example::mutable_slot() {
  return &slot_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::SlotInfo_Format>() {
  return ::PS::SlotInfo_Format_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data_2fproto_2fexample_2eproto__INCLUDED