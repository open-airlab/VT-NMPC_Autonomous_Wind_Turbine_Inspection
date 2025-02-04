// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SITLGps.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SITLGps.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sensor_msgs {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* SITLGps_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SITLGps_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SITLGps_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_SITLGps_2eproto() {
  protobuf_AddDesc_SITLGps_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SITLGps.proto");
  GOOGLE_CHECK(file != NULL);
  SITLGps_descriptor_ = file->message_type(0);
  static const int SITLGps_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, latitude_deg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, longitude_deg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, altitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, eph_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, epv_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, velocity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, velocity_east_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, velocity_north_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, velocity_up_),
  };
  SITLGps_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SITLGps_descriptor_,
      SITLGps::default_instance_,
      SITLGps_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, _has_bits_[0]),
      -1,
      -1,
      sizeof(SITLGps),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SITLGps, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SITLGps_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SITLGps_descriptor_, &SITLGps::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SITLGps_2eproto() {
  delete SITLGps::default_instance_;
  delete SITLGps_reflection_;
}

void protobuf_AddDesc_SITLGps_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_SITLGps_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rSITLGps.proto\022\020sensor_msgs.msgs\"\306\001\n\007SI"
    "TLGps\022\014\n\004time\030\001 \002(\001\022\024\n\014latitude_deg\030\002 \002("
    "\001\022\025\n\rlongitude_deg\030\003 \002(\001\022\020\n\010altitude\030\004 \002"
    "(\001\022\013\n\003eph\030\005 \001(\001\022\013\n\003epv\030\006 \001(\001\022\020\n\010velocity"
    "\030\007 \001(\001\022\025\n\rvelocity_east\030\010 \001(\001\022\026\n\016velocit"
    "y_north\030\t \001(\001\022\023\n\013velocity_up\030\n \001(\001", 234);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SITLGps.proto", &protobuf_RegisterTypes);
  SITLGps::default_instance_ = new SITLGps();
  SITLGps::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SITLGps_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SITLGps_2eproto {
  StaticDescriptorInitializer_SITLGps_2eproto() {
    protobuf_AddDesc_SITLGps_2eproto();
  }
} static_descriptor_initializer_SITLGps_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SITLGps::kTimeFieldNumber;
const int SITLGps::kLatitudeDegFieldNumber;
const int SITLGps::kLongitudeDegFieldNumber;
const int SITLGps::kAltitudeFieldNumber;
const int SITLGps::kEphFieldNumber;
const int SITLGps::kEpvFieldNumber;
const int SITLGps::kVelocityFieldNumber;
const int SITLGps::kVelocityEastFieldNumber;
const int SITLGps::kVelocityNorthFieldNumber;
const int SITLGps::kVelocityUpFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SITLGps::SITLGps()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sensor_msgs.msgs.SITLGps)
}

void SITLGps::InitAsDefaultInstance() {
}

SITLGps::SITLGps(const SITLGps& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sensor_msgs.msgs.SITLGps)
}

void SITLGps::SharedCtor() {
  _cached_size_ = 0;
  time_ = 0;
  latitude_deg_ = 0;
  longitude_deg_ = 0;
  altitude_ = 0;
  eph_ = 0;
  epv_ = 0;
  velocity_ = 0;
  velocity_east_ = 0;
  velocity_north_ = 0;
  velocity_up_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SITLGps::~SITLGps() {
  // @@protoc_insertion_point(destructor:sensor_msgs.msgs.SITLGps)
  SharedDtor();
}

void SITLGps::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SITLGps::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SITLGps::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SITLGps_descriptor_;
}

const SITLGps& SITLGps::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SITLGps_2eproto();
  return *default_instance_;
}

SITLGps* SITLGps::default_instance_ = NULL;

SITLGps* SITLGps::New(::google::protobuf::Arena* arena) const {
  SITLGps* n = new SITLGps;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SITLGps::Clear() {
// @@protoc_insertion_point(message_clear_start:sensor_msgs.msgs.SITLGps)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SITLGps, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SITLGps*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(time_, velocity_east_);
  }
  ZR_(velocity_north_, velocity_up_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SITLGps::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sensor_msgs.msgs.SITLGps)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double time = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_latitude_deg;
        break;
      }

      // required double latitude_deg = 2;
      case 2: {
        if (tag == 17) {
         parse_latitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
          set_has_latitude_deg();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_longitude_deg;
        break;
      }

      // required double longitude_deg = 3;
      case 3: {
        if (tag == 25) {
         parse_longitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
          set_has_longitude_deg();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_altitude;
        break;
      }

      // required double altitude = 4;
      case 4: {
        if (tag == 33) {
         parse_altitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &altitude_)));
          set_has_altitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_eph;
        break;
      }

      // optional double eph = 5;
      case 5: {
        if (tag == 41) {
         parse_eph:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &eph_)));
          set_has_eph();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_epv;
        break;
      }

      // optional double epv = 6;
      case 6: {
        if (tag == 49) {
         parse_epv:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &epv_)));
          set_has_epv();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_velocity;
        break;
      }

      // optional double velocity = 7;
      case 7: {
        if (tag == 57) {
         parse_velocity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_)));
          set_has_velocity();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_velocity_east;
        break;
      }

      // optional double velocity_east = 8;
      case 8: {
        if (tag == 65) {
         parse_velocity_east:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_east_)));
          set_has_velocity_east();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_velocity_north;
        break;
      }

      // optional double velocity_north = 9;
      case 9: {
        if (tag == 73) {
         parse_velocity_north:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_north_)));
          set_has_velocity_north();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(81)) goto parse_velocity_up;
        break;
      }

      // optional double velocity_up = 10;
      case 10: {
        if (tag == 81) {
         parse_velocity_up:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_up_)));
          set_has_velocity_up();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sensor_msgs.msgs.SITLGps)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sensor_msgs.msgs.SITLGps)
  return false;
#undef DO_
}

void SITLGps::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sensor_msgs.msgs.SITLGps)
  // required double time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->time(), output);
  }

  // required double latitude_deg = 2;
  if (has_latitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->latitude_deg(), output);
  }

  // required double longitude_deg = 3;
  if (has_longitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->longitude_deg(), output);
  }

  // required double altitude = 4;
  if (has_altitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->altitude(), output);
  }

  // optional double eph = 5;
  if (has_eph()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->eph(), output);
  }

  // optional double epv = 6;
  if (has_epv()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->epv(), output);
  }

  // optional double velocity = 7;
  if (has_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->velocity(), output);
  }

  // optional double velocity_east = 8;
  if (has_velocity_east()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->velocity_east(), output);
  }

  // optional double velocity_north = 9;
  if (has_velocity_north()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->velocity_north(), output);
  }

  // optional double velocity_up = 10;
  if (has_velocity_up()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->velocity_up(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sensor_msgs.msgs.SITLGps)
}

::google::protobuf::uint8* SITLGps::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sensor_msgs.msgs.SITLGps)
  // required double time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->time(), target);
  }

  // required double latitude_deg = 2;
  if (has_latitude_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->latitude_deg(), target);
  }

  // required double longitude_deg = 3;
  if (has_longitude_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->longitude_deg(), target);
  }

  // required double altitude = 4;
  if (has_altitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->altitude(), target);
  }

  // optional double eph = 5;
  if (has_eph()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->eph(), target);
  }

  // optional double epv = 6;
  if (has_epv()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->epv(), target);
  }

  // optional double velocity = 7;
  if (has_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->velocity(), target);
  }

  // optional double velocity_east = 8;
  if (has_velocity_east()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->velocity_east(), target);
  }

  // optional double velocity_north = 9;
  if (has_velocity_north()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->velocity_north(), target);
  }

  // optional double velocity_up = 10;
  if (has_velocity_up()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->velocity_up(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensor_msgs.msgs.SITLGps)
  return target;
}

int SITLGps::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:sensor_msgs.msgs.SITLGps)
  int total_size = 0;

  if (has_time()) {
    // required double time = 1;
    total_size += 1 + 8;
  }

  if (has_latitude_deg()) {
    // required double latitude_deg = 2;
    total_size += 1 + 8;
  }

  if (has_longitude_deg()) {
    // required double longitude_deg = 3;
    total_size += 1 + 8;
  }

  if (has_altitude()) {
    // required double altitude = 4;
    total_size += 1 + 8;
  }

  return total_size;
}
int SITLGps::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sensor_msgs.msgs.SITLGps)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required double time = 1;
    total_size += 1 + 8;

    // required double latitude_deg = 2;
    total_size += 1 + 8;

    // required double longitude_deg = 3;
    total_size += 1 + 8;

    // required double altitude = 4;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[4 / 32] & 240u) {
    // optional double eph = 5;
    if (has_eph()) {
      total_size += 1 + 8;
    }

    // optional double epv = 6;
    if (has_epv()) {
      total_size += 1 + 8;
    }

    // optional double velocity = 7;
    if (has_velocity()) {
      total_size += 1 + 8;
    }

    // optional double velocity_east = 8;
    if (has_velocity_east()) {
      total_size += 1 + 8;
    }

  }
  if (_has_bits_[8 / 32] & 768u) {
    // optional double velocity_north = 9;
    if (has_velocity_north()) {
      total_size += 1 + 8;
    }

    // optional double velocity_up = 10;
    if (has_velocity_up()) {
      total_size += 1 + 8;
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SITLGps::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensor_msgs.msgs.SITLGps)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SITLGps* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SITLGps>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensor_msgs.msgs.SITLGps)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensor_msgs.msgs.SITLGps)
    MergeFrom(*source);
  }
}

void SITLGps::MergeFrom(const SITLGps& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensor_msgs.msgs.SITLGps)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_latitude_deg()) {
      set_latitude_deg(from.latitude_deg());
    }
    if (from.has_longitude_deg()) {
      set_longitude_deg(from.longitude_deg());
    }
    if (from.has_altitude()) {
      set_altitude(from.altitude());
    }
    if (from.has_eph()) {
      set_eph(from.eph());
    }
    if (from.has_epv()) {
      set_epv(from.epv());
    }
    if (from.has_velocity()) {
      set_velocity(from.velocity());
    }
    if (from.has_velocity_east()) {
      set_velocity_east(from.velocity_east());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_velocity_north()) {
      set_velocity_north(from.velocity_north());
    }
    if (from.has_velocity_up()) {
      set_velocity_up(from.velocity_up());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SITLGps::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensor_msgs.msgs.SITLGps)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SITLGps::CopyFrom(const SITLGps& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensor_msgs.msgs.SITLGps)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SITLGps::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void SITLGps::Swap(SITLGps* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SITLGps::InternalSwap(SITLGps* other) {
  std::swap(time_, other->time_);
  std::swap(latitude_deg_, other->latitude_deg_);
  std::swap(longitude_deg_, other->longitude_deg_);
  std::swap(altitude_, other->altitude_);
  std::swap(eph_, other->eph_);
  std::swap(epv_, other->epv_);
  std::swap(velocity_, other->velocity_);
  std::swap(velocity_east_, other->velocity_east_);
  std::swap(velocity_north_, other->velocity_north_);
  std::swap(velocity_up_, other->velocity_up_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SITLGps::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SITLGps_descriptor_;
  metadata.reflection = SITLGps_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SITLGps

// required double time = 1;
bool SITLGps::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SITLGps::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
void SITLGps::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
void SITLGps::clear_time() {
  time_ = 0;
  clear_has_time();
}
 double SITLGps::time() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.time)
  return time_;
}
 void SITLGps::set_time(double value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.time)
}

// required double latitude_deg = 2;
bool SITLGps::has_latitude_deg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SITLGps::set_has_latitude_deg() {
  _has_bits_[0] |= 0x00000002u;
}
void SITLGps::clear_has_latitude_deg() {
  _has_bits_[0] &= ~0x00000002u;
}
void SITLGps::clear_latitude_deg() {
  latitude_deg_ = 0;
  clear_has_latitude_deg();
}
 double SITLGps::latitude_deg() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.latitude_deg)
  return latitude_deg_;
}
 void SITLGps::set_latitude_deg(double value) {
  set_has_latitude_deg();
  latitude_deg_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.latitude_deg)
}

// required double longitude_deg = 3;
bool SITLGps::has_longitude_deg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SITLGps::set_has_longitude_deg() {
  _has_bits_[0] |= 0x00000004u;
}
void SITLGps::clear_has_longitude_deg() {
  _has_bits_[0] &= ~0x00000004u;
}
void SITLGps::clear_longitude_deg() {
  longitude_deg_ = 0;
  clear_has_longitude_deg();
}
 double SITLGps::longitude_deg() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.longitude_deg)
  return longitude_deg_;
}
 void SITLGps::set_longitude_deg(double value) {
  set_has_longitude_deg();
  longitude_deg_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.longitude_deg)
}

// required double altitude = 4;
bool SITLGps::has_altitude() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void SITLGps::set_has_altitude() {
  _has_bits_[0] |= 0x00000008u;
}
void SITLGps::clear_has_altitude() {
  _has_bits_[0] &= ~0x00000008u;
}
void SITLGps::clear_altitude() {
  altitude_ = 0;
  clear_has_altitude();
}
 double SITLGps::altitude() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.altitude)
  return altitude_;
}
 void SITLGps::set_altitude(double value) {
  set_has_altitude();
  altitude_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.altitude)
}

// optional double eph = 5;
bool SITLGps::has_eph() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void SITLGps::set_has_eph() {
  _has_bits_[0] |= 0x00000010u;
}
void SITLGps::clear_has_eph() {
  _has_bits_[0] &= ~0x00000010u;
}
void SITLGps::clear_eph() {
  eph_ = 0;
  clear_has_eph();
}
 double SITLGps::eph() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.eph)
  return eph_;
}
 void SITLGps::set_eph(double value) {
  set_has_eph();
  eph_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.eph)
}

// optional double epv = 6;
bool SITLGps::has_epv() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void SITLGps::set_has_epv() {
  _has_bits_[0] |= 0x00000020u;
}
void SITLGps::clear_has_epv() {
  _has_bits_[0] &= ~0x00000020u;
}
void SITLGps::clear_epv() {
  epv_ = 0;
  clear_has_epv();
}
 double SITLGps::epv() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.epv)
  return epv_;
}
 void SITLGps::set_epv(double value) {
  set_has_epv();
  epv_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.epv)
}

// optional double velocity = 7;
bool SITLGps::has_velocity() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void SITLGps::set_has_velocity() {
  _has_bits_[0] |= 0x00000040u;
}
void SITLGps::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000040u;
}
void SITLGps::clear_velocity() {
  velocity_ = 0;
  clear_has_velocity();
}
 double SITLGps::velocity() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.velocity)
  return velocity_;
}
 void SITLGps::set_velocity(double value) {
  set_has_velocity();
  velocity_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.velocity)
}

// optional double velocity_east = 8;
bool SITLGps::has_velocity_east() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void SITLGps::set_has_velocity_east() {
  _has_bits_[0] |= 0x00000080u;
}
void SITLGps::clear_has_velocity_east() {
  _has_bits_[0] &= ~0x00000080u;
}
void SITLGps::clear_velocity_east() {
  velocity_east_ = 0;
  clear_has_velocity_east();
}
 double SITLGps::velocity_east() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.velocity_east)
  return velocity_east_;
}
 void SITLGps::set_velocity_east(double value) {
  set_has_velocity_east();
  velocity_east_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.velocity_east)
}

// optional double velocity_north = 9;
bool SITLGps::has_velocity_north() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void SITLGps::set_has_velocity_north() {
  _has_bits_[0] |= 0x00000100u;
}
void SITLGps::clear_has_velocity_north() {
  _has_bits_[0] &= ~0x00000100u;
}
void SITLGps::clear_velocity_north() {
  velocity_north_ = 0;
  clear_has_velocity_north();
}
 double SITLGps::velocity_north() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.velocity_north)
  return velocity_north_;
}
 void SITLGps::set_velocity_north(double value) {
  set_has_velocity_north();
  velocity_north_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.velocity_north)
}

// optional double velocity_up = 10;
bool SITLGps::has_velocity_up() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void SITLGps::set_has_velocity_up() {
  _has_bits_[0] |= 0x00000200u;
}
void SITLGps::clear_has_velocity_up() {
  _has_bits_[0] &= ~0x00000200u;
}
void SITLGps::clear_velocity_up() {
  velocity_up_ = 0;
  clear_has_velocity_up();
}
 double SITLGps::velocity_up() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.SITLGps.velocity_up)
  return velocity_up_;
}
 void SITLGps::set_velocity_up(double value) {
  set_has_velocity_up();
  velocity_up_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.SITLGps.velocity_up)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)
