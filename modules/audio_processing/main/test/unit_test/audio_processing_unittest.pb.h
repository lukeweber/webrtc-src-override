// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: audio_processing_unittest.proto

#ifndef PROTOBUF_audio_5fprocessing_5funittest_2eproto__INCLUDED
#define PROTOBUF_audio_5fprocessing_5funittest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace audio_processing_unittest {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_audio_5fprocessing_5funittest_2eproto();
void protobuf_AssignDesc_audio_5fprocessing_5funittest_2eproto();
void protobuf_ShutdownFile_audio_5fprocessing_5funittest_2eproto();

class Test;
class Test_Frame;
class Test_Statistic;
class Test_EchoMetrics;
class OutputData;

// ===================================================================

class Test_Frame : public ::google::protobuf::MessageLite {
 public:
  Test_Frame();
  virtual ~Test_Frame();
  
  Test_Frame(const Test_Frame& from);
  
  inline Test_Frame& operator=(const Test_Frame& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const Test_Frame& default_instance();
  
  void Swap(Test_Frame* other);
  
  // implements Message ----------------------------------------------
  
  Test_Frame* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Test_Frame& from);
  void MergeFrom(const Test_Frame& from);
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
  
  // @@protoc_insertion_point(class_scope:audio_processing_unittest.Test.Frame)
 private:
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_AssignDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_ShutdownFile_audio_5fprocessing_5funittest_2eproto();
  
  void InitAsDefaultInstance();
  static Test_Frame* default_instance_;
};
// -------------------------------------------------------------------

class Test_Statistic : public ::google::protobuf::MessageLite {
 public:
  Test_Statistic();
  virtual ~Test_Statistic();
  
  Test_Statistic(const Test_Statistic& from);
  
  inline Test_Statistic& operator=(const Test_Statistic& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const Test_Statistic& default_instance();
  
  void Swap(Test_Statistic* other);
  
  // implements Message ----------------------------------------------
  
  Test_Statistic* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Test_Statistic& from);
  void MergeFrom(const Test_Statistic& from);
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
  
  // optional int32 instant = 1;
  inline bool has_instant() const;
  inline void clear_instant();
  static const int kInstantFieldNumber = 1;
  inline ::google::protobuf::int32 instant() const;
  inline void set_instant(::google::protobuf::int32 value);
  
  // optional int32 average = 2;
  inline bool has_average() const;
  inline void clear_average();
  static const int kAverageFieldNumber = 2;
  inline ::google::protobuf::int32 average() const;
  inline void set_average(::google::protobuf::int32 value);
  
  // optional int32 maximum = 3;
  inline bool has_maximum() const;
  inline void clear_maximum();
  static const int kMaximumFieldNumber = 3;
  inline ::google::protobuf::int32 maximum() const;
  inline void set_maximum(::google::protobuf::int32 value);
  
  // optional int32 minimum = 4;
  inline bool has_minimum() const;
  inline void clear_minimum();
  static const int kMinimumFieldNumber = 4;
  inline ::google::protobuf::int32 minimum() const;
  inline void set_minimum(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:audio_processing_unittest.Test.Statistic)
 private:
  inline void set_has_instant();
  inline void clear_has_instant();
  inline void set_has_average();
  inline void clear_has_average();
  inline void set_has_maximum();
  inline void clear_has_maximum();
  inline void set_has_minimum();
  inline void clear_has_minimum();
  
  ::google::protobuf::int32 instant_;
  ::google::protobuf::int32 average_;
  ::google::protobuf::int32 maximum_;
  ::google::protobuf::int32 minimum_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_AssignDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_ShutdownFile_audio_5fprocessing_5funittest_2eproto();
  
  void InitAsDefaultInstance();
  static Test_Statistic* default_instance_;
};
// -------------------------------------------------------------------

class Test_EchoMetrics : public ::google::protobuf::MessageLite {
 public:
  Test_EchoMetrics();
  virtual ~Test_EchoMetrics();
  
  Test_EchoMetrics(const Test_EchoMetrics& from);
  
  inline Test_EchoMetrics& operator=(const Test_EchoMetrics& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const Test_EchoMetrics& default_instance();
  
  void Swap(Test_EchoMetrics* other);
  
  // implements Message ----------------------------------------------
  
  Test_EchoMetrics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Test_EchoMetrics& from);
  void MergeFrom(const Test_EchoMetrics& from);
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
  
  // optional .audio_processing_unittest.Test.Statistic residual_echo_return_loss = 1;
  inline bool has_residual_echo_return_loss() const;
  inline void clear_residual_echo_return_loss();
  static const int kResidualEchoReturnLossFieldNumber = 1;
  inline const ::audio_processing_unittest::Test_Statistic& residual_echo_return_loss() const;
  inline ::audio_processing_unittest::Test_Statistic* mutable_residual_echo_return_loss();
  inline ::audio_processing_unittest::Test_Statistic* release_residual_echo_return_loss();
  
  // optional .audio_processing_unittest.Test.Statistic echo_return_loss = 2;
  inline bool has_echo_return_loss() const;
  inline void clear_echo_return_loss();
  static const int kEchoReturnLossFieldNumber = 2;
  inline const ::audio_processing_unittest::Test_Statistic& echo_return_loss() const;
  inline ::audio_processing_unittest::Test_Statistic* mutable_echo_return_loss();
  inline ::audio_processing_unittest::Test_Statistic* release_echo_return_loss();
  
  // optional .audio_processing_unittest.Test.Statistic echo_return_loss_enhancement = 3;
  inline bool has_echo_return_loss_enhancement() const;
  inline void clear_echo_return_loss_enhancement();
  static const int kEchoReturnLossEnhancementFieldNumber = 3;
  inline const ::audio_processing_unittest::Test_Statistic& echo_return_loss_enhancement() const;
  inline ::audio_processing_unittest::Test_Statistic* mutable_echo_return_loss_enhancement();
  inline ::audio_processing_unittest::Test_Statistic* release_echo_return_loss_enhancement();
  
  // optional .audio_processing_unittest.Test.Statistic a_nlp = 4;
  inline bool has_a_nlp() const;
  inline void clear_a_nlp();
  static const int kANlpFieldNumber = 4;
  inline const ::audio_processing_unittest::Test_Statistic& a_nlp() const;
  inline ::audio_processing_unittest::Test_Statistic* mutable_a_nlp();
  inline ::audio_processing_unittest::Test_Statistic* release_a_nlp();
  
  // @@protoc_insertion_point(class_scope:audio_processing_unittest.Test.EchoMetrics)
 private:
  inline void set_has_residual_echo_return_loss();
  inline void clear_has_residual_echo_return_loss();
  inline void set_has_echo_return_loss();
  inline void clear_has_echo_return_loss();
  inline void set_has_echo_return_loss_enhancement();
  inline void clear_has_echo_return_loss_enhancement();
  inline void set_has_a_nlp();
  inline void clear_has_a_nlp();
  
  ::audio_processing_unittest::Test_Statistic* residual_echo_return_loss_;
  ::audio_processing_unittest::Test_Statistic* echo_return_loss_;
  ::audio_processing_unittest::Test_Statistic* echo_return_loss_enhancement_;
  ::audio_processing_unittest::Test_Statistic* a_nlp_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_AssignDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_ShutdownFile_audio_5fprocessing_5funittest_2eproto();
  
  void InitAsDefaultInstance();
  static Test_EchoMetrics* default_instance_;
};
// -------------------------------------------------------------------

class Test : public ::google::protobuf::MessageLite {
 public:
  Test();
  virtual ~Test();
  
  Test(const Test& from);
  
  inline Test& operator=(const Test& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const Test& default_instance();
  
  void Swap(Test* other);
  
  // implements Message ----------------------------------------------
  
  Test* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Test& from);
  void MergeFrom(const Test& from);
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
  
  typedef Test_Frame Frame;
  typedef Test_Statistic Statistic;
  typedef Test_EchoMetrics EchoMetrics;
  
  // accessors -------------------------------------------------------
  
  // optional int32 num_reverse_channels = 1;
  inline bool has_num_reverse_channels() const;
  inline void clear_num_reverse_channels();
  static const int kNumReverseChannelsFieldNumber = 1;
  inline ::google::protobuf::int32 num_reverse_channels() const;
  inline void set_num_reverse_channels(::google::protobuf::int32 value);
  
  // optional int32 num_input_channels = 2;
  inline bool has_num_input_channels() const;
  inline void clear_num_input_channels();
  static const int kNumInputChannelsFieldNumber = 2;
  inline ::google::protobuf::int32 num_input_channels() const;
  inline void set_num_input_channels(::google::protobuf::int32 value);
  
  // optional int32 num_output_channels = 3;
  inline bool has_num_output_channels() const;
  inline void clear_num_output_channels();
  static const int kNumOutputChannelsFieldNumber = 3;
  inline ::google::protobuf::int32 num_output_channels() const;
  inline void set_num_output_channels(::google::protobuf::int32 value);
  
  // optional int32 sample_rate = 4;
  inline bool has_sample_rate() const;
  inline void clear_sample_rate();
  static const int kSampleRateFieldNumber = 4;
  inline ::google::protobuf::int32 sample_rate() const;
  inline void set_sample_rate(::google::protobuf::int32 value);
  
  // repeated .audio_processing_unittest.Test.Frame frame = 5;
  inline int frame_size() const;
  inline void clear_frame();
  static const int kFrameFieldNumber = 5;
  inline const ::audio_processing_unittest::Test_Frame& frame(int index) const;
  inline ::audio_processing_unittest::Test_Frame* mutable_frame(int index);
  inline ::audio_processing_unittest::Test_Frame* add_frame();
  inline const ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test_Frame >&
      frame() const;
  inline ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test_Frame >*
      mutable_frame();
  
  // optional int32 analog_level_average = 6;
  inline bool has_analog_level_average() const;
  inline void clear_analog_level_average();
  static const int kAnalogLevelAverageFieldNumber = 6;
  inline ::google::protobuf::int32 analog_level_average() const;
  inline void set_analog_level_average(::google::protobuf::int32 value);
  
  // optional int32 max_output_average = 7;
  inline bool has_max_output_average() const;
  inline void clear_max_output_average();
  static const int kMaxOutputAverageFieldNumber = 7;
  inline ::google::protobuf::int32 max_output_average() const;
  inline void set_max_output_average(::google::protobuf::int32 value);
  
  // optional int32 has_echo_count = 8;
  inline bool has_has_echo_count() const;
  inline void clear_has_echo_count();
  static const int kHasEchoCountFieldNumber = 8;
  inline ::google::protobuf::int32 has_echo_count() const;
  inline void set_has_echo_count(::google::protobuf::int32 value);
  
  // optional int32 has_voice_count = 9;
  inline bool has_has_voice_count() const;
  inline void clear_has_voice_count();
  static const int kHasVoiceCountFieldNumber = 9;
  inline ::google::protobuf::int32 has_voice_count() const;
  inline void set_has_voice_count(::google::protobuf::int32 value);
  
  // optional int32 is_saturated_count = 10;
  inline bool has_is_saturated_count() const;
  inline void clear_is_saturated_count();
  static const int kIsSaturatedCountFieldNumber = 10;
  inline ::google::protobuf::int32 is_saturated_count() const;
  inline void set_is_saturated_count(::google::protobuf::int32 value);
  
  // optional .audio_processing_unittest.Test.EchoMetrics echo_metrics = 11;
  inline bool has_echo_metrics() const;
  inline void clear_echo_metrics();
  static const int kEchoMetricsFieldNumber = 11;
  inline const ::audio_processing_unittest::Test_EchoMetrics& echo_metrics() const;
  inline ::audio_processing_unittest::Test_EchoMetrics* mutable_echo_metrics();
  inline ::audio_processing_unittest::Test_EchoMetrics* release_echo_metrics();
  
  // @@protoc_insertion_point(class_scope:audio_processing_unittest.Test)
 private:
  inline void set_has_num_reverse_channels();
  inline void clear_has_num_reverse_channels();
  inline void set_has_num_input_channels();
  inline void clear_has_num_input_channels();
  inline void set_has_num_output_channels();
  inline void clear_has_num_output_channels();
  inline void set_has_sample_rate();
  inline void clear_has_sample_rate();
  inline void set_has_analog_level_average();
  inline void clear_has_analog_level_average();
  inline void set_has_max_output_average();
  inline void clear_has_max_output_average();
  inline void set_has_has_echo_count();
  inline void clear_has_has_echo_count();
  inline void set_has_has_voice_count();
  inline void clear_has_has_voice_count();
  inline void set_has_is_saturated_count();
  inline void clear_has_is_saturated_count();
  inline void set_has_echo_metrics();
  inline void clear_has_echo_metrics();
  
  ::google::protobuf::int32 num_reverse_channels_;
  ::google::protobuf::int32 num_input_channels_;
  ::google::protobuf::int32 num_output_channels_;
  ::google::protobuf::int32 sample_rate_;
  ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test_Frame > frame_;
  ::google::protobuf::int32 analog_level_average_;
  ::google::protobuf::int32 max_output_average_;
  ::google::protobuf::int32 has_echo_count_;
  ::google::protobuf::int32 has_voice_count_;
  ::audio_processing_unittest::Test_EchoMetrics* echo_metrics_;
  ::google::protobuf::int32 is_saturated_count_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];
  
  friend void  protobuf_AddDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_AssignDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_ShutdownFile_audio_5fprocessing_5funittest_2eproto();
  
  void InitAsDefaultInstance();
  static Test* default_instance_;
};
// -------------------------------------------------------------------

class OutputData : public ::google::protobuf::MessageLite {
 public:
  OutputData();
  virtual ~OutputData();
  
  OutputData(const OutputData& from);
  
  inline OutputData& operator=(const OutputData& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const OutputData& default_instance();
  
  void Swap(OutputData* other);
  
  // implements Message ----------------------------------------------
  
  OutputData* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const OutputData& from);
  void MergeFrom(const OutputData& from);
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
  
  // repeated .audio_processing_unittest.Test test = 1;
  inline int test_size() const;
  inline void clear_test();
  static const int kTestFieldNumber = 1;
  inline const ::audio_processing_unittest::Test& test(int index) const;
  inline ::audio_processing_unittest::Test* mutable_test(int index);
  inline ::audio_processing_unittest::Test* add_test();
  inline const ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test >&
      test() const;
  inline ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test >*
      mutable_test();
  
  // @@protoc_insertion_point(class_scope:audio_processing_unittest.OutputData)
 private:
  
  ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test > test_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_AssignDesc_audio_5fprocessing_5funittest_2eproto();
  friend void protobuf_ShutdownFile_audio_5fprocessing_5funittest_2eproto();
  
  void InitAsDefaultInstance();
  static OutputData* default_instance_;
};
// ===================================================================


// ===================================================================

// Test_Frame

// -------------------------------------------------------------------

// Test_Statistic

// optional int32 instant = 1;
inline bool Test_Statistic::has_instant() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Test_Statistic::set_has_instant() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Test_Statistic::clear_has_instant() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Test_Statistic::clear_instant() {
  instant_ = 0;
  clear_has_instant();
}
inline ::google::protobuf::int32 Test_Statistic::instant() const {
  return instant_;
}
inline void Test_Statistic::set_instant(::google::protobuf::int32 value) {
  set_has_instant();
  instant_ = value;
}

// optional int32 average = 2;
inline bool Test_Statistic::has_average() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Test_Statistic::set_has_average() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Test_Statistic::clear_has_average() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Test_Statistic::clear_average() {
  average_ = 0;
  clear_has_average();
}
inline ::google::protobuf::int32 Test_Statistic::average() const {
  return average_;
}
inline void Test_Statistic::set_average(::google::protobuf::int32 value) {
  set_has_average();
  average_ = value;
}

// optional int32 maximum = 3;
inline bool Test_Statistic::has_maximum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Test_Statistic::set_has_maximum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Test_Statistic::clear_has_maximum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Test_Statistic::clear_maximum() {
  maximum_ = 0;
  clear_has_maximum();
}
inline ::google::protobuf::int32 Test_Statistic::maximum() const {
  return maximum_;
}
inline void Test_Statistic::set_maximum(::google::protobuf::int32 value) {
  set_has_maximum();
  maximum_ = value;
}

// optional int32 minimum = 4;
inline bool Test_Statistic::has_minimum() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Test_Statistic::set_has_minimum() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Test_Statistic::clear_has_minimum() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Test_Statistic::clear_minimum() {
  minimum_ = 0;
  clear_has_minimum();
}
inline ::google::protobuf::int32 Test_Statistic::minimum() const {
  return minimum_;
}
inline void Test_Statistic::set_minimum(::google::protobuf::int32 value) {
  set_has_minimum();
  minimum_ = value;
}

// -------------------------------------------------------------------

// Test_EchoMetrics

// optional .audio_processing_unittest.Test.Statistic residual_echo_return_loss = 1;
inline bool Test_EchoMetrics::has_residual_echo_return_loss() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Test_EchoMetrics::set_has_residual_echo_return_loss() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Test_EchoMetrics::clear_has_residual_echo_return_loss() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Test_EchoMetrics::clear_residual_echo_return_loss() {
  if (residual_echo_return_loss_ != NULL) residual_echo_return_loss_->::audio_processing_unittest::Test_Statistic::Clear();
  clear_has_residual_echo_return_loss();
}
inline const ::audio_processing_unittest::Test_Statistic& Test_EchoMetrics::residual_echo_return_loss() const {
  return residual_echo_return_loss_ != NULL ? *residual_echo_return_loss_ : *default_instance_->residual_echo_return_loss_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::mutable_residual_echo_return_loss() {
  set_has_residual_echo_return_loss();
  if (residual_echo_return_loss_ == NULL) residual_echo_return_loss_ = new ::audio_processing_unittest::Test_Statistic;
  return residual_echo_return_loss_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::release_residual_echo_return_loss() {
  clear_has_residual_echo_return_loss();
  ::audio_processing_unittest::Test_Statistic* temp = residual_echo_return_loss_;
  residual_echo_return_loss_ = NULL;
  return temp;
}

// optional .audio_processing_unittest.Test.Statistic echo_return_loss = 2;
inline bool Test_EchoMetrics::has_echo_return_loss() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Test_EchoMetrics::set_has_echo_return_loss() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Test_EchoMetrics::clear_has_echo_return_loss() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Test_EchoMetrics::clear_echo_return_loss() {
  if (echo_return_loss_ != NULL) echo_return_loss_->::audio_processing_unittest::Test_Statistic::Clear();
  clear_has_echo_return_loss();
}
inline const ::audio_processing_unittest::Test_Statistic& Test_EchoMetrics::echo_return_loss() const {
  return echo_return_loss_ != NULL ? *echo_return_loss_ : *default_instance_->echo_return_loss_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::mutable_echo_return_loss() {
  set_has_echo_return_loss();
  if (echo_return_loss_ == NULL) echo_return_loss_ = new ::audio_processing_unittest::Test_Statistic;
  return echo_return_loss_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::release_echo_return_loss() {
  clear_has_echo_return_loss();
  ::audio_processing_unittest::Test_Statistic* temp = echo_return_loss_;
  echo_return_loss_ = NULL;
  return temp;
}

// optional .audio_processing_unittest.Test.Statistic echo_return_loss_enhancement = 3;
inline bool Test_EchoMetrics::has_echo_return_loss_enhancement() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Test_EchoMetrics::set_has_echo_return_loss_enhancement() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Test_EchoMetrics::clear_has_echo_return_loss_enhancement() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Test_EchoMetrics::clear_echo_return_loss_enhancement() {
  if (echo_return_loss_enhancement_ != NULL) echo_return_loss_enhancement_->::audio_processing_unittest::Test_Statistic::Clear();
  clear_has_echo_return_loss_enhancement();
}
inline const ::audio_processing_unittest::Test_Statistic& Test_EchoMetrics::echo_return_loss_enhancement() const {
  return echo_return_loss_enhancement_ != NULL ? *echo_return_loss_enhancement_ : *default_instance_->echo_return_loss_enhancement_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::mutable_echo_return_loss_enhancement() {
  set_has_echo_return_loss_enhancement();
  if (echo_return_loss_enhancement_ == NULL) echo_return_loss_enhancement_ = new ::audio_processing_unittest::Test_Statistic;
  return echo_return_loss_enhancement_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::release_echo_return_loss_enhancement() {
  clear_has_echo_return_loss_enhancement();
  ::audio_processing_unittest::Test_Statistic* temp = echo_return_loss_enhancement_;
  echo_return_loss_enhancement_ = NULL;
  return temp;
}

// optional .audio_processing_unittest.Test.Statistic a_nlp = 4;
inline bool Test_EchoMetrics::has_a_nlp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Test_EchoMetrics::set_has_a_nlp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Test_EchoMetrics::clear_has_a_nlp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Test_EchoMetrics::clear_a_nlp() {
  if (a_nlp_ != NULL) a_nlp_->::audio_processing_unittest::Test_Statistic::Clear();
  clear_has_a_nlp();
}
inline const ::audio_processing_unittest::Test_Statistic& Test_EchoMetrics::a_nlp() const {
  return a_nlp_ != NULL ? *a_nlp_ : *default_instance_->a_nlp_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::mutable_a_nlp() {
  set_has_a_nlp();
  if (a_nlp_ == NULL) a_nlp_ = new ::audio_processing_unittest::Test_Statistic;
  return a_nlp_;
}
inline ::audio_processing_unittest::Test_Statistic* Test_EchoMetrics::release_a_nlp() {
  clear_has_a_nlp();
  ::audio_processing_unittest::Test_Statistic* temp = a_nlp_;
  a_nlp_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// Test

// optional int32 num_reverse_channels = 1;
inline bool Test::has_num_reverse_channels() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Test::set_has_num_reverse_channels() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Test::clear_has_num_reverse_channels() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Test::clear_num_reverse_channels() {
  num_reverse_channels_ = 0;
  clear_has_num_reverse_channels();
}
inline ::google::protobuf::int32 Test::num_reverse_channels() const {
  return num_reverse_channels_;
}
inline void Test::set_num_reverse_channels(::google::protobuf::int32 value) {
  set_has_num_reverse_channels();
  num_reverse_channels_ = value;
}

// optional int32 num_input_channels = 2;
inline bool Test::has_num_input_channels() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Test::set_has_num_input_channels() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Test::clear_has_num_input_channels() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Test::clear_num_input_channels() {
  num_input_channels_ = 0;
  clear_has_num_input_channels();
}
inline ::google::protobuf::int32 Test::num_input_channels() const {
  return num_input_channels_;
}
inline void Test::set_num_input_channels(::google::protobuf::int32 value) {
  set_has_num_input_channels();
  num_input_channels_ = value;
}

// optional int32 num_output_channels = 3;
inline bool Test::has_num_output_channels() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Test::set_has_num_output_channels() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Test::clear_has_num_output_channels() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Test::clear_num_output_channels() {
  num_output_channels_ = 0;
  clear_has_num_output_channels();
}
inline ::google::protobuf::int32 Test::num_output_channels() const {
  return num_output_channels_;
}
inline void Test::set_num_output_channels(::google::protobuf::int32 value) {
  set_has_num_output_channels();
  num_output_channels_ = value;
}

// optional int32 sample_rate = 4;
inline bool Test::has_sample_rate() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Test::set_has_sample_rate() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Test::clear_has_sample_rate() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Test::clear_sample_rate() {
  sample_rate_ = 0;
  clear_has_sample_rate();
}
inline ::google::protobuf::int32 Test::sample_rate() const {
  return sample_rate_;
}
inline void Test::set_sample_rate(::google::protobuf::int32 value) {
  set_has_sample_rate();
  sample_rate_ = value;
}

// repeated .audio_processing_unittest.Test.Frame frame = 5;
inline int Test::frame_size() const {
  return frame_.size();
}
inline void Test::clear_frame() {
  frame_.Clear();
}
inline const ::audio_processing_unittest::Test_Frame& Test::frame(int index) const {
  return frame_.Get(index);
}
inline ::audio_processing_unittest::Test_Frame* Test::mutable_frame(int index) {
  return frame_.Mutable(index);
}
inline ::audio_processing_unittest::Test_Frame* Test::add_frame() {
  return frame_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test_Frame >&
Test::frame() const {
  return frame_;
}
inline ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test_Frame >*
Test::mutable_frame() {
  return &frame_;
}

// optional int32 analog_level_average = 6;
inline bool Test::has_analog_level_average() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Test::set_has_analog_level_average() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Test::clear_has_analog_level_average() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Test::clear_analog_level_average() {
  analog_level_average_ = 0;
  clear_has_analog_level_average();
}
inline ::google::protobuf::int32 Test::analog_level_average() const {
  return analog_level_average_;
}
inline void Test::set_analog_level_average(::google::protobuf::int32 value) {
  set_has_analog_level_average();
  analog_level_average_ = value;
}

// optional int32 max_output_average = 7;
inline bool Test::has_max_output_average() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Test::set_has_max_output_average() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Test::clear_has_max_output_average() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Test::clear_max_output_average() {
  max_output_average_ = 0;
  clear_has_max_output_average();
}
inline ::google::protobuf::int32 Test::max_output_average() const {
  return max_output_average_;
}
inline void Test::set_max_output_average(::google::protobuf::int32 value) {
  set_has_max_output_average();
  max_output_average_ = value;
}

// optional int32 has_echo_count = 8;
inline bool Test::has_has_echo_count() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Test::set_has_has_echo_count() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Test::clear_has_has_echo_count() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Test::clear_has_echo_count() {
  has_echo_count_ = 0;
  clear_has_has_echo_count();
}
inline ::google::protobuf::int32 Test::has_echo_count() const {
  return has_echo_count_;
}
inline void Test::set_has_echo_count(::google::protobuf::int32 value) {
  set_has_has_echo_count();
  has_echo_count_ = value;
}

// optional int32 has_voice_count = 9;
inline bool Test::has_has_voice_count() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Test::set_has_has_voice_count() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Test::clear_has_has_voice_count() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Test::clear_has_voice_count() {
  has_voice_count_ = 0;
  clear_has_has_voice_count();
}
inline ::google::protobuf::int32 Test::has_voice_count() const {
  return has_voice_count_;
}
inline void Test::set_has_voice_count(::google::protobuf::int32 value) {
  set_has_has_voice_count();
  has_voice_count_ = value;
}

// optional int32 is_saturated_count = 10;
inline bool Test::has_is_saturated_count() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Test::set_has_is_saturated_count() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Test::clear_has_is_saturated_count() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Test::clear_is_saturated_count() {
  is_saturated_count_ = 0;
  clear_has_is_saturated_count();
}
inline ::google::protobuf::int32 Test::is_saturated_count() const {
  return is_saturated_count_;
}
inline void Test::set_is_saturated_count(::google::protobuf::int32 value) {
  set_has_is_saturated_count();
  is_saturated_count_ = value;
}

// optional .audio_processing_unittest.Test.EchoMetrics echo_metrics = 11;
inline bool Test::has_echo_metrics() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Test::set_has_echo_metrics() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Test::clear_has_echo_metrics() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Test::clear_echo_metrics() {
  if (echo_metrics_ != NULL) echo_metrics_->::audio_processing_unittest::Test_EchoMetrics::Clear();
  clear_has_echo_metrics();
}
inline const ::audio_processing_unittest::Test_EchoMetrics& Test::echo_metrics() const {
  return echo_metrics_ != NULL ? *echo_metrics_ : *default_instance_->echo_metrics_;
}
inline ::audio_processing_unittest::Test_EchoMetrics* Test::mutable_echo_metrics() {
  set_has_echo_metrics();
  if (echo_metrics_ == NULL) echo_metrics_ = new ::audio_processing_unittest::Test_EchoMetrics;
  return echo_metrics_;
}
inline ::audio_processing_unittest::Test_EchoMetrics* Test::release_echo_metrics() {
  clear_has_echo_metrics();
  ::audio_processing_unittest::Test_EchoMetrics* temp = echo_metrics_;
  echo_metrics_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// OutputData

// repeated .audio_processing_unittest.Test test = 1;
inline int OutputData::test_size() const {
  return test_.size();
}
inline void OutputData::clear_test() {
  test_.Clear();
}
inline const ::audio_processing_unittest::Test& OutputData::test(int index) const {
  return test_.Get(index);
}
inline ::audio_processing_unittest::Test* OutputData::mutable_test(int index) {
  return test_.Mutable(index);
}
inline ::audio_processing_unittest::Test* OutputData::add_test() {
  return test_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test >&
OutputData::test() const {
  return test_;
}
inline ::google::protobuf::RepeatedPtrField< ::audio_processing_unittest::Test >*
OutputData::mutable_test() {
  return &test_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace audio_processing_unittest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_audio_5fprocessing_5funittest_2eproto__INCLUDED
