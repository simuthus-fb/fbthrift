/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::apache::thrift::test::Foo> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace test {

template <class Protocol_>
void Foo::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field1:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->field1, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.field1 = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field2:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->field2, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.field2 = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_field3:
  {
    _readState.beforeSubobject(iprot);
    this->field3 = ::std::vector<int32_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::readWithContext(*iprot, this->field3, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.field3 = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_field4:
  {
    _readState.beforeSubobject(iprot);
    this->field4 = ::std::vector<int32_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::readWithContext(*iprot, this->field4, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.field4 = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Foo>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field1;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field2;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_field3;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_field4;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Foo::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->field1);
  xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->field2);
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::serializedSize<false>(*prot_, this->field3);
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_LIST, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::serializedSize<false>(*prot_, this->field4);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->field1);
  xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->field2);
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::serializedSize<false>(*prot_, this->field3);
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_LIST, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::serializedSize<false>(*prot_, this->field4);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Foo");
  xfer += prot_->writeFieldBegin("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->field1);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field2", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->field2);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field3", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::write(*prot_, this->field3);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field4", apache::thrift::protocol::T_LIST, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int32_t>>::write(*prot_, this->field4);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // apache::thrift::test
