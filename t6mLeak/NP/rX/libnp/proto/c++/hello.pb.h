// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#ifndef PROTOBUF_hello_2eproto__INCLUDED
#define PROTOBUF_hello_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_hello_2eproto();
void protobuf_AssignDesc_hello_2eproto();
void protobuf_ShutdownFile_hello_2eproto();

class HelloMessage;
class CloseAppMessage;
class MessagingSendDataMessage;

// ===================================================================

class HelloMessage : public ::google::protobuf::MessageLite {
 public:
  HelloMessage();
  virtual ~HelloMessage();

  HelloMessage(const HelloMessage& from);

  inline HelloMessage& operator=(const HelloMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const HelloMessage& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HelloMessage* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(HelloMessage* other);

  // implements Message ----------------------------------------------

  HelloMessage* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const HelloMessage& from);
  void MergeFrom(const HelloMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline ::google::protobuf::int32 number() const;
  inline void set_number(::google::protobuf::int32 value);

  // required int32 number2 = 2;
  inline bool has_number2() const;
  inline void clear_number2();
  static const int kNumber2FieldNumber = 2;
  inline ::google::protobuf::int32 number2() const;
  inline void set_number2(::google::protobuf::int32 value);

  // required string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string stuff = 4;
  inline bool has_stuff() const;
  inline void clear_stuff();
  static const int kStuffFieldNumber = 4;
  inline const ::std::string& stuff() const;
  inline void set_stuff(const ::std::string& value);
  inline void set_stuff(const char* value);
  inline void set_stuff(const char* value, size_t size);
  inline ::std::string* mutable_stuff();
  inline ::std::string* release_stuff();
  inline void set_allocated_stuff(::std::string* stuff);

  // @@protoc_insertion_point(class_scope:HelloMessage)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_number2();
  inline void clear_has_number2();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_stuff();
  inline void clear_has_stuff();

  ::google::protobuf::int32 number_;
  ::google::protobuf::int32 number2_;
  ::std::string* name_;
  ::std::string* stuff_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_hello_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_hello_2eproto();
  #endif
  friend void protobuf_AssignDesc_hello_2eproto();
  friend void protobuf_ShutdownFile_hello_2eproto();

  void InitAsDefaultInstance();
  static HelloMessage* default_instance_;
};
// -------------------------------------------------------------------

class CloseAppMessage : public ::google::protobuf::MessageLite {
 public:
  CloseAppMessage();
  virtual ~CloseAppMessage();

  CloseAppMessage(const CloseAppMessage& from);

  inline CloseAppMessage& operator=(const CloseAppMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const CloseAppMessage& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CloseAppMessage* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CloseAppMessage* other);

  // implements Message ----------------------------------------------

  CloseAppMessage* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CloseAppMessage& from);
  void MergeFrom(const CloseAppMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string reason = 1;
  inline bool has_reason() const;
  inline void clear_reason();
  static const int kReasonFieldNumber = 1;
  inline const ::std::string& reason() const;
  inline void set_reason(const ::std::string& value);
  inline void set_reason(const char* value);
  inline void set_reason(const char* value, size_t size);
  inline ::std::string* mutable_reason();
  inline ::std::string* release_reason();
  inline void set_allocated_reason(::std::string* reason);

  // @@protoc_insertion_point(class_scope:CloseAppMessage)
 private:
  inline void set_has_reason();
  inline void clear_has_reason();

  ::std::string* reason_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_hello_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_hello_2eproto();
  #endif
  friend void protobuf_AssignDesc_hello_2eproto();
  friend void protobuf_ShutdownFile_hello_2eproto();

  void InitAsDefaultInstance();
  static CloseAppMessage* default_instance_;
};
// -------------------------------------------------------------------

class MessagingSendDataMessage : public ::google::protobuf::MessageLite {
 public:
  MessagingSendDataMessage();
  virtual ~MessagingSendDataMessage();

  MessagingSendDataMessage(const MessagingSendDataMessage& from);

  inline MessagingSendDataMessage& operator=(const MessagingSendDataMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const MessagingSendDataMessage& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessagingSendDataMessage* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessagingSendDataMessage* other);

  // implements Message ----------------------------------------------

  MessagingSendDataMessage* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessagingSendDataMessage& from);
  void MergeFrom(const MessagingSendDataMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required fixed64 npid = 1;
  inline bool has_npid() const;
  inline void clear_npid();
  static const int kNpidFieldNumber = 1;
  inline ::google::protobuf::uint64 npid() const;
  inline void set_npid(::google::protobuf::uint64 value);

  // required bytes data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:MessagingSendDataMessage)
 private:
  inline void set_has_npid();
  inline void clear_has_npid();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::uint64 npid_;
  ::std::string* data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_hello_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_hello_2eproto();
  #endif
  friend void protobuf_AssignDesc_hello_2eproto();
  friend void protobuf_ShutdownFile_hello_2eproto();

  void InitAsDefaultInstance();
  static MessagingSendDataMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// HelloMessage

// required int32 number = 1;
inline bool HelloMessage::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HelloMessage::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HelloMessage::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HelloMessage::clear_number() {
  number_ = 0;
  clear_has_number();
}
inline ::google::protobuf::int32 HelloMessage::number() const {
  return number_;
}
inline void HelloMessage::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
}

// required int32 number2 = 2;
inline bool HelloMessage::has_number2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HelloMessage::set_has_number2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HelloMessage::clear_has_number2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HelloMessage::clear_number2() {
  number2_ = 0;
  clear_has_number2();
}
inline ::google::protobuf::int32 HelloMessage::number2() const {
  return number2_;
}
inline void HelloMessage::set_number2(::google::protobuf::int32 value) {
  set_has_number2();
  number2_ = value;
}

// required string name = 3;
inline bool HelloMessage::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HelloMessage::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HelloMessage::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HelloMessage::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& HelloMessage::name() const {
  return *name_;
}
inline void HelloMessage::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void HelloMessage::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void HelloMessage::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HelloMessage::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* HelloMessage::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void HelloMessage::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string stuff = 4;
inline bool HelloMessage::has_stuff() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HelloMessage::set_has_stuff() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HelloMessage::clear_has_stuff() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HelloMessage::clear_stuff() {
  if (stuff_ != &::google::protobuf::internal::kEmptyString) {
    stuff_->clear();
  }
  clear_has_stuff();
}
inline const ::std::string& HelloMessage::stuff() const {
  return *stuff_;
}
inline void HelloMessage::set_stuff(const ::std::string& value) {
  set_has_stuff();
  if (stuff_ == &::google::protobuf::internal::kEmptyString) {
    stuff_ = new ::std::string;
  }
  stuff_->assign(value);
}
inline void HelloMessage::set_stuff(const char* value) {
  set_has_stuff();
  if (stuff_ == &::google::protobuf::internal::kEmptyString) {
    stuff_ = new ::std::string;
  }
  stuff_->assign(value);
}
inline void HelloMessage::set_stuff(const char* value, size_t size) {
  set_has_stuff();
  if (stuff_ == &::google::protobuf::internal::kEmptyString) {
    stuff_ = new ::std::string;
  }
  stuff_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HelloMessage::mutable_stuff() {
  set_has_stuff();
  if (stuff_ == &::google::protobuf::internal::kEmptyString) {
    stuff_ = new ::std::string;
  }
  return stuff_;
}
inline ::std::string* HelloMessage::release_stuff() {
  clear_has_stuff();
  if (stuff_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = stuff_;
    stuff_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void HelloMessage::set_allocated_stuff(::std::string* stuff) {
  if (stuff_ != &::google::protobuf::internal::kEmptyString) {
    delete stuff_;
  }
  if (stuff) {
    set_has_stuff();
    stuff_ = stuff;
  } else {
    clear_has_stuff();
    stuff_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CloseAppMessage

// required string reason = 1;
inline bool CloseAppMessage::has_reason() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CloseAppMessage::set_has_reason() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CloseAppMessage::clear_has_reason() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CloseAppMessage::clear_reason() {
  if (reason_ != &::google::protobuf::internal::kEmptyString) {
    reason_->clear();
  }
  clear_has_reason();
}
inline const ::std::string& CloseAppMessage::reason() const {
  return *reason_;
}
inline void CloseAppMessage::set_reason(const ::std::string& value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::kEmptyString) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
}
inline void CloseAppMessage::set_reason(const char* value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::kEmptyString) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
}
inline void CloseAppMessage::set_reason(const char* value, size_t size) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::kEmptyString) {
    reason_ = new ::std::string;
  }
  reason_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CloseAppMessage::mutable_reason() {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::kEmptyString) {
    reason_ = new ::std::string;
  }
  return reason_;
}
inline ::std::string* CloseAppMessage::release_reason() {
  clear_has_reason();
  if (reason_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reason_;
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CloseAppMessage::set_allocated_reason(::std::string* reason) {
  if (reason_ != &::google::protobuf::internal::kEmptyString) {
    delete reason_;
  }
  if (reason) {
    set_has_reason();
    reason_ = reason;
  } else {
    clear_has_reason();
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MessagingSendDataMessage

// required fixed64 npid = 1;
inline bool MessagingSendDataMessage::has_npid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessagingSendDataMessage::set_has_npid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessagingSendDataMessage::clear_has_npid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessagingSendDataMessage::clear_npid() {
  npid_ = GOOGLE_ULONGLONG(0);
  clear_has_npid();
}
inline ::google::protobuf::uint64 MessagingSendDataMessage::npid() const {
  return npid_;
}
inline void MessagingSendDataMessage::set_npid(::google::protobuf::uint64 value) {
  set_has_npid();
  npid_ = value;
}

// required bytes data = 2;
inline bool MessagingSendDataMessage::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessagingSendDataMessage::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessagingSendDataMessage::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessagingSendDataMessage::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& MessagingSendDataMessage::data() const {
  return *data_;
}
inline void MessagingSendDataMessage::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void MessagingSendDataMessage::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void MessagingSendDataMessage::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MessagingSendDataMessage::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* MessagingSendDataMessage::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MessagingSendDataMessage::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hello_2eproto__INCLUDED
