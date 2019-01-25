// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wanjun.package.proto

#include "wanjun.package.pb.h"

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

namespace protobuf_common_2eheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_common_2eheader_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_header;
}  // namespace protobuf_common_2eheader_2eproto
namespace wanjun {
class WjPackageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WjPackage>
      _instance;
} _WjPackage_default_instance_;
}  // namespace wanjun
namespace protobuf_wanjun_2epackage_2eproto {
static void InitDefaultsWjPackage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::wanjun::_WjPackage_default_instance_;
    new (ptr) ::wanjun::WjPackage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::wanjun::WjPackage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_WjPackage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsWjPackage}, {
      &protobuf_common_2eheader_2eproto::scc_info_header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WjPackage.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wanjun::WjPackage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wanjun::WjPackage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wanjun::WjPackage, head_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wanjun::WjPackage, privatedata_),
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::wanjun::WjPackage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::wanjun::_WjPackage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "wanjun.package.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\024wanjun.package.proto\022\006wanjun\032\023common.h"
      "eader.proto\">\n\tWjPackage\022\034\n\004head\030\001 \002(\0132\016"
      ".common.header\022\023\n\013privateData\030\002 \002(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "wanjun.package.proto", &protobuf_RegisterTypes);
  ::protobuf_common_2eheader_2eproto::AddDescriptors();
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
}  // namespace protobuf_wanjun_2epackage_2eproto
namespace wanjun {

// ===================================================================

void WjPackage::InitAsDefaultInstance() {
  ::wanjun::_WjPackage_default_instance_._instance.get_mutable()->head_ = const_cast< ::common::header*>(
      ::common::header::internal_default_instance());
}
void WjPackage::clear_head() {
  if (head_ != NULL) head_->Clear();
  clear_has_head();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WjPackage::kHeadFieldNumber;
const int WjPackage::kPrivateDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WjPackage::WjPackage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_wanjun_2epackage_2eproto::scc_info_WjPackage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:wanjun.WjPackage)
}
WjPackage::WjPackage(const WjPackage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  privatedata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_privatedata()) {
    privatedata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.privatedata_);
  }
  if (from.has_head()) {
    head_ = new ::common::header(*from.head_);
  } else {
    head_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:wanjun.WjPackage)
}

void WjPackage::SharedCtor() {
  privatedata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  head_ = NULL;
}

WjPackage::~WjPackage() {
  // @@protoc_insertion_point(destructor:wanjun.WjPackage)
  SharedDtor();
}

void WjPackage::SharedDtor() {
  privatedata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete head_;
}

void WjPackage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WjPackage::descriptor() {
  ::protobuf_wanjun_2epackage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_wanjun_2epackage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WjPackage& WjPackage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_wanjun_2epackage_2eproto::scc_info_WjPackage.base);
  return *internal_default_instance();
}


void WjPackage::Clear() {
// @@protoc_insertion_point(message_clear_start:wanjun.WjPackage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      privatedata_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(head_ != NULL);
      head_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool WjPackage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:wanjun.WjPackage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .common.header head = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_head()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string privateData = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_privatedata()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->privatedata().data(), static_cast<int>(this->privatedata().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "wanjun.WjPackage.privateData");
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
  // @@protoc_insertion_point(parse_success:wanjun.WjPackage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:wanjun.WjPackage)
  return false;
#undef DO_
}

void WjPackage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:wanjun.WjPackage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .common.header head = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_head(), output);
  }

  // required string privateData = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->privatedata().data(), static_cast<int>(this->privatedata().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wanjun.WjPackage.privateData");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->privatedata(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:wanjun.WjPackage)
}

::google::protobuf::uint8* WjPackage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:wanjun.WjPackage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .common.header head = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_head(), deterministic, target);
  }

  // required string privateData = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->privatedata().data(), static_cast<int>(this->privatedata().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wanjun.WjPackage.privateData");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->privatedata(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:wanjun.WjPackage)
  return target;
}

size_t WjPackage::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:wanjun.WjPackage)
  size_t total_size = 0;

  if (has_privatedata()) {
    // required string privateData = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->privatedata());
  }

  if (has_head()) {
    // required .common.header head = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *head_);
  }

  return total_size;
}
size_t WjPackage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:wanjun.WjPackage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string privateData = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->privatedata());

    // required .common.header head = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *head_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WjPackage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:wanjun.WjPackage)
  GOOGLE_DCHECK_NE(&from, this);
  const WjPackage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WjPackage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:wanjun.WjPackage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:wanjun.WjPackage)
    MergeFrom(*source);
  }
}

void WjPackage::MergeFrom(const WjPackage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:wanjun.WjPackage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_privatedata();
      privatedata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.privatedata_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_head()->::common::header::MergeFrom(from.head());
    }
  }
}

void WjPackage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:wanjun.WjPackage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WjPackage::CopyFrom(const WjPackage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:wanjun.WjPackage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


bool WjPackage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (has_head()) {
    if (!this->head_->IsInitialized()) return false;
  }
  return true;
}

void WjPackage::Swap(WjPackage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WjPackage::InternalSwap(WjPackage* other) {
  using std::swap;
  privatedata_.Swap(&other->privatedata_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(head_, other->head_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WjPackage::GetMetadata() const {
  protobuf_wanjun_2epackage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_wanjun_2epackage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace wanjun
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::wanjun::WjPackage* Arena::CreateMaybeMessage< ::wanjun::WjPackage >(Arena* arena) {
  return Arena::CreateInternal< ::wanjun::WjPackage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
