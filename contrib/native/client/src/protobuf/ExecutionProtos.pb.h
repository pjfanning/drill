// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExecutionProtos.proto

#ifndef PROTOBUF_ExecutionProtos_2eproto__INCLUDED
#define PROTOBUF_ExecutionProtos_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "Coordination.pb.h"
#include "UserBitShared.pb.h"
// @@protoc_insertion_point(includes)

namespace exec {
namespace bit {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ExecutionProtos_2eproto();
void protobuf_AssignDesc_ExecutionProtos_2eproto();
void protobuf_ShutdownFile_ExecutionProtos_2eproto();

class FragmentHandle;
class ServerPreparedStatementState;

// ===================================================================

class FragmentHandle : public ::google::protobuf::Message {
 public:
  FragmentHandle();
  virtual ~FragmentHandle();

  FragmentHandle(const FragmentHandle& from);

  inline FragmentHandle& operator=(const FragmentHandle& from) {
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
  static const FragmentHandle& default_instance();

  void Swap(FragmentHandle* other);

  // implements Message ----------------------------------------------

  FragmentHandle* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FragmentHandle& from);
  void MergeFrom(const FragmentHandle& from);
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

  // optional .exec.shared.QueryId query_id = 1;
  inline bool has_query_id() const;
  inline void clear_query_id();
  static const int kQueryIdFieldNumber = 1;
  inline const ::exec::shared::QueryId& query_id() const;
  inline ::exec::shared::QueryId* mutable_query_id();
  inline ::exec::shared::QueryId* release_query_id();
  inline void set_allocated_query_id(::exec::shared::QueryId* query_id);

  // optional int32 major_fragment_id = 2;
  inline bool has_major_fragment_id() const;
  inline void clear_major_fragment_id();
  static const int kMajorFragmentIdFieldNumber = 2;
  inline ::google::protobuf::int32 major_fragment_id() const;
  inline void set_major_fragment_id(::google::protobuf::int32 value);

  // optional int32 minor_fragment_id = 3;
  inline bool has_minor_fragment_id() const;
  inline void clear_minor_fragment_id();
  static const int kMinorFragmentIdFieldNumber = 3;
  inline ::google::protobuf::int32 minor_fragment_id() const;
  inline void set_minor_fragment_id(::google::protobuf::int32 value);

  // optional .exec.shared.QueryId parent_query_id = 4;
  inline bool has_parent_query_id() const;
  inline void clear_parent_query_id();
  static const int kParentQueryIdFieldNumber = 4;
  inline const ::exec::shared::QueryId& parent_query_id() const;
  inline ::exec::shared::QueryId* mutable_parent_query_id();
  inline ::exec::shared::QueryId* release_parent_query_id();
  inline void set_allocated_parent_query_id(::exec::shared::QueryId* parent_query_id);

  // @@protoc_insertion_point(class_scope:exec.bit.FragmentHandle)
 private:
  inline void set_has_query_id();
  inline void clear_has_query_id();
  inline void set_has_major_fragment_id();
  inline void clear_has_major_fragment_id();
  inline void set_has_minor_fragment_id();
  inline void clear_has_minor_fragment_id();
  inline void set_has_parent_query_id();
  inline void clear_has_parent_query_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::exec::shared::QueryId* query_id_;
  ::google::protobuf::int32 major_fragment_id_;
  ::google::protobuf::int32 minor_fragment_id_;
  ::exec::shared::QueryId* parent_query_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_ExecutionProtos_2eproto();
  friend void protobuf_AssignDesc_ExecutionProtos_2eproto();
  friend void protobuf_ShutdownFile_ExecutionProtos_2eproto();

  void InitAsDefaultInstance();
  static FragmentHandle* default_instance_;
};
// -------------------------------------------------------------------

class ServerPreparedStatementState : public ::google::protobuf::Message {
 public:
  ServerPreparedStatementState();
  virtual ~ServerPreparedStatementState();

  ServerPreparedStatementState(const ServerPreparedStatementState& from);

  inline ServerPreparedStatementState& operator=(const ServerPreparedStatementState& from) {
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
  static const ServerPreparedStatementState& default_instance();

  void Swap(ServerPreparedStatementState* other);

  // implements Message ----------------------------------------------

  ServerPreparedStatementState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerPreparedStatementState& from);
  void MergeFrom(const ServerPreparedStatementState& from);
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

  // optional string sql_query = 1;
  inline bool has_sql_query() const;
  inline void clear_sql_query();
  static const int kSqlQueryFieldNumber = 1;
  inline const ::std::string& sql_query() const;
  inline void set_sql_query(const ::std::string& value);
  inline void set_sql_query(const char* value);
  inline void set_sql_query(const char* value, size_t size);
  inline ::std::string* mutable_sql_query();
  inline ::std::string* release_sql_query();
  inline void set_allocated_sql_query(::std::string* sql_query);

  // @@protoc_insertion_point(class_scope:exec.bit.ServerPreparedStatementState)
 private:
  inline void set_has_sql_query();
  inline void clear_has_sql_query();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* sql_query_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ExecutionProtos_2eproto();
  friend void protobuf_AssignDesc_ExecutionProtos_2eproto();
  friend void protobuf_ShutdownFile_ExecutionProtos_2eproto();

  void InitAsDefaultInstance();
  static ServerPreparedStatementState* default_instance_;
};
// ===================================================================


// ===================================================================

// FragmentHandle

// optional .exec.shared.QueryId query_id = 1;
inline bool FragmentHandle::has_query_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FragmentHandle::set_has_query_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FragmentHandle::clear_has_query_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FragmentHandle::clear_query_id() {
  if (query_id_ != NULL) query_id_->::exec::shared::QueryId::Clear();
  clear_has_query_id();
}
inline const ::exec::shared::QueryId& FragmentHandle::query_id() const {
  return query_id_ != NULL ? *query_id_ : *default_instance_->query_id_;
}
inline ::exec::shared::QueryId* FragmentHandle::mutable_query_id() {
  set_has_query_id();
  if (query_id_ == NULL) query_id_ = new ::exec::shared::QueryId;
  return query_id_;
}
inline ::exec::shared::QueryId* FragmentHandle::release_query_id() {
  clear_has_query_id();
  ::exec::shared::QueryId* temp = query_id_;
  query_id_ = NULL;
  return temp;
}
inline void FragmentHandle::set_allocated_query_id(::exec::shared::QueryId* query_id) {
  delete query_id_;
  query_id_ = query_id;
  if (query_id) {
    set_has_query_id();
  } else {
    clear_has_query_id();
  }
}

// optional int32 major_fragment_id = 2;
inline bool FragmentHandle::has_major_fragment_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FragmentHandle::set_has_major_fragment_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FragmentHandle::clear_has_major_fragment_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FragmentHandle::clear_major_fragment_id() {
  major_fragment_id_ = 0;
  clear_has_major_fragment_id();
}
inline ::google::protobuf::int32 FragmentHandle::major_fragment_id() const {
  return major_fragment_id_;
}
inline void FragmentHandle::set_major_fragment_id(::google::protobuf::int32 value) {
  set_has_major_fragment_id();
  major_fragment_id_ = value;
}

// optional int32 minor_fragment_id = 3;
inline bool FragmentHandle::has_minor_fragment_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FragmentHandle::set_has_minor_fragment_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FragmentHandle::clear_has_minor_fragment_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FragmentHandle::clear_minor_fragment_id() {
  minor_fragment_id_ = 0;
  clear_has_minor_fragment_id();
}
inline ::google::protobuf::int32 FragmentHandle::minor_fragment_id() const {
  return minor_fragment_id_;
}
inline void FragmentHandle::set_minor_fragment_id(::google::protobuf::int32 value) {
  set_has_minor_fragment_id();
  minor_fragment_id_ = value;
}

// optional .exec.shared.QueryId parent_query_id = 4;
inline bool FragmentHandle::has_parent_query_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FragmentHandle::set_has_parent_query_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FragmentHandle::clear_has_parent_query_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FragmentHandle::clear_parent_query_id() {
  if (parent_query_id_ != NULL) parent_query_id_->::exec::shared::QueryId::Clear();
  clear_has_parent_query_id();
}
inline const ::exec::shared::QueryId& FragmentHandle::parent_query_id() const {
  return parent_query_id_ != NULL ? *parent_query_id_ : *default_instance_->parent_query_id_;
}
inline ::exec::shared::QueryId* FragmentHandle::mutable_parent_query_id() {
  set_has_parent_query_id();
  if (parent_query_id_ == NULL) parent_query_id_ = new ::exec::shared::QueryId;
  return parent_query_id_;
}
inline ::exec::shared::QueryId* FragmentHandle::release_parent_query_id() {
  clear_has_parent_query_id();
  ::exec::shared::QueryId* temp = parent_query_id_;
  parent_query_id_ = NULL;
  return temp;
}
inline void FragmentHandle::set_allocated_parent_query_id(::exec::shared::QueryId* parent_query_id) {
  delete parent_query_id_;
  parent_query_id_ = parent_query_id;
  if (parent_query_id) {
    set_has_parent_query_id();
  } else {
    clear_has_parent_query_id();
  }
}

// -------------------------------------------------------------------

// ServerPreparedStatementState

// optional string sql_query = 1;
inline bool ServerPreparedStatementState::has_sql_query() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerPreparedStatementState::set_has_sql_query() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerPreparedStatementState::clear_has_sql_query() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerPreparedStatementState::clear_sql_query() {
  if (sql_query_ != &::google::protobuf::internal::kEmptyString) {
    sql_query_->clear();
  }
  clear_has_sql_query();
}
inline const ::std::string& ServerPreparedStatementState::sql_query() const {
  return *sql_query_;
}
inline void ServerPreparedStatementState::set_sql_query(const ::std::string& value) {
  set_has_sql_query();
  if (sql_query_ == &::google::protobuf::internal::kEmptyString) {
    sql_query_ = new ::std::string;
  }
  sql_query_->assign(value);
}
inline void ServerPreparedStatementState::set_sql_query(const char* value) {
  set_has_sql_query();
  if (sql_query_ == &::google::protobuf::internal::kEmptyString) {
    sql_query_ = new ::std::string;
  }
  sql_query_->assign(value);
}
inline void ServerPreparedStatementState::set_sql_query(const char* value, size_t size) {
  set_has_sql_query();
  if (sql_query_ == &::google::protobuf::internal::kEmptyString) {
    sql_query_ = new ::std::string;
  }
  sql_query_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ServerPreparedStatementState::mutable_sql_query() {
  set_has_sql_query();
  if (sql_query_ == &::google::protobuf::internal::kEmptyString) {
    sql_query_ = new ::std::string;
  }
  return sql_query_;
}
inline ::std::string* ServerPreparedStatementState::release_sql_query() {
  clear_has_sql_query();
  if (sql_query_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sql_query_;
    sql_query_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ServerPreparedStatementState::set_allocated_sql_query(::std::string* sql_query) {
  if (sql_query_ != &::google::protobuf::internal::kEmptyString) {
    delete sql_query_;
  }
  if (sql_query) {
    set_has_sql_query();
    sql_query_ = sql_query;
  } else {
    clear_has_sql_query();
    sql_query_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace bit
}  // namespace exec

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ExecutionProtos_2eproto__INCLUDED