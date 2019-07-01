/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::some::ns::EnumB>::size;
folly::Range<::some::ns::EnumB const*> const TEnumTraits<::some::ns::EnumB>::values = folly::range(::some::ns::_EnumBEnumDataStorage::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::some::ns::EnumB>::names = folly::range(::some::ns::_EnumBEnumDataStorage::names);

char const* TEnumTraits<::some::ns::EnumB>::findName(type value) {
  using factory = ::some::ns::_EnumB_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::some::ns::EnumB>::findValue(char const* name, type* out) {
  using factory = ::some::ns::_EnumB_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace some { namespace ns {

const _EnumB_EnumMapFactory::ValuesToNamesMapType _EnumB_VALUES_TO_NAMES = _EnumB_EnumMapFactory::makeValuesToNamesMap();
const _EnumB_EnumMapFactory::NamesToValuesMapType _EnumB_NAMES_TO_VALUES = _EnumB_EnumMapFactory::makeNamesToValuesMap();

}} // some::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::ModuleA>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "strField") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "listField") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "mapField") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "inclAField") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "inclBField") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}
void TccStructTraits<::some::ns::ModuleB>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "inclEnumB") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

ModuleA::ModuleA() :
      i32Field(0) {}


ModuleA::~ModuleA() {}

ModuleA::ModuleA(apache::thrift::FragileConstructor, int32_t i32Field__arg, ::std::string strField__arg, ::std::vector<int16_t> listField__arg, ::std::map<::std::string, int32_t> mapField__arg,  ::some::ns::IncludedA inclAField__arg,  ::some::ns::IncludedB inclBField__arg) :
    i32Field(std::move(i32Field__arg)),
    strField(std::move(strField__arg)),
    listField(std::move(listField__arg)),
    mapField(std::move(mapField__arg)),
    inclAField(std::move(inclAField__arg)),
    inclBField(std::move(inclBField__arg)) {
  __isset.i32Field = true;
  __isset.strField = true;
  __isset.listField = true;
  __isset.mapField = true;
  __isset.inclAField = true;
  __isset.inclBField = true;
}

void ModuleA::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  listField.clear();
  mapField.clear();
  ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedA>::clear(&inclAField);
  ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedB>::clear(&inclBField);
  __isset = {};
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  if (!(lhs.strField == rhs.strField)) {
    return false;
  }
  if (!(lhs.listField == rhs.listField)) {
    return false;
  }
  if (!(lhs.mapField == rhs.mapField)) {
    return false;
  }
  if (!(lhs.inclAField == rhs.inclAField)) {
    return false;
  }
  if (!(lhs.inclBField == rhs.inclBField)) {
    return false;
  }
  return true;
}

bool ModuleA::operator<(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  if (!(lhs.strField == rhs.strField)) {
    return lhs.strField < rhs.strField;
  }
  if (!(lhs.listField == rhs.listField)) {
    return lhs.listField < rhs.listField;
  }
  if (!(lhs.mapField == rhs.mapField)) {
    return lhs.mapField < rhs.mapField;
  }
  if (!(lhs.inclAField == rhs.inclAField)) {
    return lhs.inclAField < rhs.inclAField;
  }
  if (!(lhs.inclBField == rhs.inclBField)) {
    return lhs.inclBField < rhs.inclBField;
  }
  return false;
}

const ::std::vector<int16_t>& ModuleA::get_listField() const& {
  return listField;
}

::std::vector<int16_t> ModuleA::get_listField() && {
  return std::move(listField);
}

const ::std::map<::std::string, int32_t>& ModuleA::get_mapField() const& {
  return mapField;
}

::std::map<::std::string, int32_t> ModuleA::get_mapField() && {
  return std::move(mapField);
}

const  ::some::ns::IncludedA& ModuleA::get_inclAField() const& {
  return inclAField;
}

 ::some::ns::IncludedA ModuleA::get_inclAField() && {
  return std::move(inclAField);
}

const  ::some::ns::IncludedB& ModuleA::get_inclBField() const& {
  return inclBField;
}

 ::some::ns::IncludedB ModuleA::get_inclBField() && {
  return std::move(inclBField);
}


void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.listField, b.listField);
  swap(a.mapField, b.mapField);
  swap(a.inclAField, b.inclAField);
  swap(a.inclBField, b.inclBField);
  swap(a.__isset, b.__isset);
}

template void ModuleA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace some { namespace ns {

ModuleB::ModuleB(apache::thrift::FragileConstructor, int32_t i32Field__arg,  ::some::ns::EnumB inclEnumB__arg) :
    i32Field(std::move(i32Field__arg)),
    inclEnumB(std::move(inclEnumB__arg)) {
  __isset.i32Field = true;
  __isset.inclEnumB = true;
}

void ModuleB::__clear() {
  // clear all fields
  i32Field = 0;
  inclEnumB = static_cast< ::some::ns::EnumB>(0);
  __isset = {};
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  if (!(lhs.inclEnumB == rhs.inclEnumB)) {
    return false;
  }
  return true;
}

bool ModuleB::operator<(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  if (!(lhs.inclEnumB == rhs.inclEnumB)) {
    return lhs.inclEnumB < rhs.inclEnumB;
  }
  return false;
}


void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.inclEnumB, b.inclEnumB);
  swap(a.__isset, b.__isset);
}

template void ModuleB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
