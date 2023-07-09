// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StratifiedCurrentVelocity.proto

#ifndef PROTOBUF_StratifiedCurrentVelocity_2eproto__INCLUDED
#define PROTOBUF_StratifiedCurrentVelocity_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
#include "any.pb.h"
// @@protoc_insertion_point(includes)

namespace dave_gazebo_world_plugins_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_StratifiedCurrentVelocity_2eproto();
void protobuf_AssignDesc_StratifiedCurrentVelocity_2eproto();
void protobuf_ShutdownFile_StratifiedCurrentVelocity_2eproto();

class StratifiedCurrentVelocity;

// ===================================================================

class StratifiedCurrentVelocity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity) */ {
 public:
  StratifiedCurrentVelocity();
  virtual ~StratifiedCurrentVelocity();

  StratifiedCurrentVelocity(const StratifiedCurrentVelocity& from);

  inline StratifiedCurrentVelocity& operator=(const StratifiedCurrentVelocity& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StratifiedCurrentVelocity& default_instance();

  void Swap(StratifiedCurrentVelocity* other);

  // implements Message ----------------------------------------------

  inline StratifiedCurrentVelocity* New() const { return New(NULL); }

  StratifiedCurrentVelocity* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StratifiedCurrentVelocity& from);
  void MergeFrom(const StratifiedCurrentVelocity& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StratifiedCurrentVelocity* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .gazebo.msgs.Vector3d velocity = 1;
  int velocity_size() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 1;
  const ::gazebo::msgs::Vector3d& velocity(int index) const;
  ::gazebo::msgs::Vector3d* mutable_velocity(int index);
  ::gazebo::msgs::Vector3d* add_velocity();
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_velocity();
  const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      velocity() const;

  // repeated double depth = 2;
  int depth_size() const;
  void clear_depth();
  static const int kDepthFieldNumber = 2;
  double depth(int index) const;
  void set_depth(int index, double value);
  void add_depth(double value);
  const ::google::protobuf::RepeatedField< double >&
      depth() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_depth();

  // @@protoc_insertion_point(class_scope:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d > velocity_;
  ::google::protobuf::RepeatedField< double > depth_;
  friend void  protobuf_AddDesc_StratifiedCurrentVelocity_2eproto();
  friend void protobuf_AssignDesc_StratifiedCurrentVelocity_2eproto();
  friend void protobuf_ShutdownFile_StratifiedCurrentVelocity_2eproto();

  void InitAsDefaultInstance();
  static StratifiedCurrentVelocity* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StratifiedCurrentVelocity

// repeated .gazebo.msgs.Vector3d velocity = 1;
inline int StratifiedCurrentVelocity::velocity_size() const {
  return velocity_.size();
}
inline void StratifiedCurrentVelocity::clear_velocity() {
  velocity_.Clear();
}
inline const ::gazebo::msgs::Vector3d& StratifiedCurrentVelocity::velocity(int index) const {
  // @@protoc_insertion_point(field_get:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_.Get(index);
}
inline ::gazebo::msgs::Vector3d* StratifiedCurrentVelocity::mutable_velocity(int index) {
  // @@protoc_insertion_point(field_mutable:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_.Mutable(index);
}
inline ::gazebo::msgs::Vector3d* StratifiedCurrentVelocity::add_velocity() {
  // @@protoc_insertion_point(field_add:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
StratifiedCurrentVelocity::mutable_velocity() {
  // @@protoc_insertion_point(field_mutable_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return &velocity_;
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
StratifiedCurrentVelocity::velocity() const {
  // @@protoc_insertion_point(field_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_;
}

// repeated double depth = 2;
inline int StratifiedCurrentVelocity::depth_size() const {
  return depth_.size();
}
inline void StratifiedCurrentVelocity::clear_depth() {
  depth_.Clear();
}
inline double StratifiedCurrentVelocity::depth(int index) const {
  // @@protoc_insertion_point(field_get:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
  return depth_.Get(index);
}
inline void StratifiedCurrentVelocity::set_depth(int index, double value) {
  depth_.Set(index, value);
  // @@protoc_insertion_point(field_set:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
}
inline void StratifiedCurrentVelocity::add_depth(double value) {
  depth_.Add(value);
  // @@protoc_insertion_point(field_add:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
}
inline const ::google::protobuf::RepeatedField< double >&
StratifiedCurrentVelocity::depth() const {
  // @@protoc_insertion_point(field_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
  return depth_;
}
inline ::google::protobuf::RepeatedField< double >*
StratifiedCurrentVelocity::mutable_depth() {
  // @@protoc_insertion_point(field_mutable_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
  return &depth_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace dave_gazebo_world_plugins_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StratifiedCurrentVelocity_2eproto__INCLUDED
