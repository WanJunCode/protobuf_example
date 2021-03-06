// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.header.proto

#include "common.header.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace common {
class headerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<header>
      _instance;
} _header_default_instance_;
}  // namespace common
namespace protobuf_common_2eheader_2eproto {
static void InitDefaultsheader() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::common::_header_default_instance_;
    new (ptr) ::common::header();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::common::header::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_header =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsheader}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_header.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::common::header, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::common::header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::common::header, identity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::common::header, length_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::common::header)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::common::_header_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "common.header.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023common.header.proto\022\006common\"*\n\006header\022"
      "\020\n\010identity\030\001 \002(\t\022\016\n\006length\030\002 \002(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 73);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common.header.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_common_2eheader_2eproto
namespace common {

// ===================================================================

void header::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int header::kIdentityFieldNumber;
const int header::kLengthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

header::header()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_common_2eheader_2eproto::scc_info_header.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.header)
}
header::header(const header& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  identity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_identity()) {
    identity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.identity_);
  }
  length_ = from.length_;
  // @@protoc_insertion_point(copy_constructor:common.header)
}

void header::SharedCtor() {
  identity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  length_ = 0;
}

header::~header() {
  // @@protoc_insertion_point(destructor:common.header)
  SharedDtor();
}

void header::SharedDtor() {
  identity_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* header::descriptor() {
  ::protobuf_common_2eheader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_common_2eheader_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const header& header::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_common_2eheader_2eproto::scc_info_header.base);
  return *internal_default_instance();
}


void header::Clear() {
// @@protoc_insertion_point(message_clear_start:common.header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    identity_.ClearNonDefaultToEmptyNoArena();
  }
  length_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.header)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string identity = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_identity()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->identity().data(), static_cast<int>(this->identity().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "common.header.identity");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 length = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_length();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &length_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:common.header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.header)
  return false;
#undef DO_
}

void header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string identity = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->identity().data(), static_cast<int>(this->identity().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "common.header.identity");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->identity(), output);
  }

  // required int32 length = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->length(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:common.header)
}

::google::protobuf::uint8* header::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:common.header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string identity = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->identity().data(), static_cast<int>(this->identity().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "common.header.identity");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->identity(), target);
  }

  // required int32 length = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->length(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:common.header)
  return target;
}

size_t header::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:common.header)
  size_t total_size = 0;

  if (has_identity()) {
    // required string identity = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->identity());
  }

  if (has_length()) {
    // required int32 length = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->length());
  }

  return total_size;
}
size_t header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:common.header)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string identity = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->identity());

    // required int32 length = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->length());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void header::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:common.header)
  GOOGLE_DCHECK_NE(&from, this);
  const header* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const header>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:common.header)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:common.header)
    MergeFrom(*source);
  }
}

void header::MergeFrom(const header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:common.header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_identity();
      identity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.identity_);
    }
    if (cached_has_bits & 0x00000002u) {
      length_ = from.length_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void header::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:common.header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void header::CopyFrom(const header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:common.header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool header::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void header::Swap(header* other) {
  if (other == this) return;
  InternalSwap(other);
}
void header::InternalSwap(header* other) {
  using std::swap;
  identity_.Swap(&other->identity_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(length_, other->length_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata header::GetMetadata() const {
  protobuf_common_2eheader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_common_2eheader_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::common::header* Arena::CreateMaybeMessage< ::common::header >(Arena* arena) {
  return Arena::CreateInternal< ::common::header >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
