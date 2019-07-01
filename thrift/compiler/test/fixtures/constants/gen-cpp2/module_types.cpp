/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::EmptyEnum>::size;
folly::Range<::cpp2::EmptyEnum const*> const TEnumTraits<::cpp2::EmptyEnum>::values = {};
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::EmptyEnum>::names = {};

char const* TEnumTraits<::cpp2::EmptyEnum>::findName(type value) {
  using factory = ::cpp2::_EmptyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::EmptyEnum>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_EmptyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {

const _EmptyEnum_EnumMapFactory::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES = _EmptyEnum_EnumMapFactory::makeValuesToNamesMap();
const _EmptyEnum_EnumMapFactory::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES = _EmptyEnum_EnumMapFactory::makeNamesToValuesMap();

} // cpp2

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::City>::size;
folly::Range<::cpp2::City const*> const TEnumTraits<::cpp2::City>::values = folly::range(::cpp2::_CityEnumDataStorage::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::City>::names = folly::range(::cpp2::_CityEnumDataStorage::names);

char const* TEnumTraits<::cpp2::City>::findName(type value) {
  using factory = ::cpp2::_City_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::City>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_City_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {

const _City_EnumMapFactory::ValuesToNamesMapType _City_VALUES_TO_NAMES = _City_EnumMapFactory::makeValuesToNamesMap();
const _City_EnumMapFactory::NamesToValuesMapType _City_NAMES_TO_VALUES = _City_EnumMapFactory::makeNamesToValuesMap();

} // cpp2

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::Company>::size;
folly::Range<::cpp2::Company const*> const TEnumTraits<::cpp2::Company>::values = folly::range(::cpp2::_CompanyEnumDataStorage::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Company>::names = folly::range(::cpp2::_CompanyEnumDataStorage::names);

char const* TEnumTraits<::cpp2::Company>::findName(type value) {
  using factory = ::cpp2::_Company_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::Company>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_Company_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {

const _Company_EnumMapFactory::ValuesToNamesMapType _Company_VALUES_TO_NAMES = _Company_EnumMapFactory::makeValuesToNamesMap();
const _Company_EnumMapFactory::NamesToValuesMapType _Company_NAMES_TO_VALUES = _Company_EnumMapFactory::makeNamesToValuesMap();

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Internship>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "weeks") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "title") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "employer") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I32;
  }
}
void TccStructTraits<::cpp2::UnEnumStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "city") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
}
void TccStructTraits<::cpp2::Range>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "min") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "max") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}
void TccStructTraits<::cpp2::struct1>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "a") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "b") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::struct2>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "a") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "b") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "c") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "d") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_LIST;
  }
}
void TccStructTraits<::cpp2::struct3>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "a") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "b") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "c") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}
void TccStructTraits<::cpp2::union1>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "d") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
}
void TccStructTraits<::cpp2::union2>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "d") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "s") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "u") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

Internship::Internship(apache::thrift::FragileConstructor, int32_t weeks__arg, ::std::string title__arg,  ::cpp2::Company employer__arg) :
    weeks(std::move(weeks__arg)),
    title(std::move(title__arg)),
    employer(std::move(employer__arg)) {
  __isset.title = true;
  __isset.employer = true;
}

void Internship::__clear() {
  // clear all fields
  weeks = 0;
  title = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  employer =  ::cpp2::Company::FACEBOOK;
  __isset = {};
}

bool Internship::operator==(const Internship& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.weeks == rhs.weeks)) {
    return false;
  }
  if (!(lhs.title == rhs.title)) {
    return false;
  }
  if (lhs.__isset.employer != rhs.__isset.employer) {
    return false;
  }
  if (lhs.__isset.employer) {
    if (!(lhs.employer == rhs.employer)) {
      return false;
    }
  }
  return true;
}

bool Internship::operator<(const Internship& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.weeks == rhs.weeks)) {
    return lhs.weeks < rhs.weeks;
  }
  if (!(lhs.title == rhs.title)) {
    return lhs.title < rhs.title;
  }
  if (lhs.__isset.employer != rhs.__isset.employer) {
    return lhs.__isset.employer < rhs.__isset.employer;
  }
  if (lhs.__isset.employer) {
    if (!(lhs.employer == rhs.employer)) {
      return lhs.employer < rhs.employer;
    }
  }
  return false;
}


void swap(Internship& a, Internship& b) {
  using ::std::swap;
  swap(a.weeks, b.weeks);
  swap(a.title, b.title);
  swap(a.employer, b.employer);
  swap(a.__isset, b.__isset);
}

template void Internship::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Internship::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Internship::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Internship::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Internship::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Internship::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Internship::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Internship::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

UnEnumStruct::UnEnumStruct(apache::thrift::FragileConstructor,  ::cpp2::City city__arg) :
    city(std::move(city__arg)) {
  __isset.city = true;
}

void UnEnumStruct::__clear() {
  // clear all fields
  city = static_cast< ::cpp2::City>(-1);
  __isset = {};
}

bool UnEnumStruct::operator==(const UnEnumStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.city == rhs.city)) {
    return false;
  }
  return true;
}

bool UnEnumStruct::operator<(const UnEnumStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.city == rhs.city)) {
    return lhs.city < rhs.city;
  }
  return false;
}


void swap(UnEnumStruct& a, UnEnumStruct& b) {
  using ::std::swap;
  swap(a.city, b.city);
  swap(a.__isset, b.__isset);
}

template void UnEnumStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t UnEnumStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t UnEnumStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t UnEnumStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void UnEnumStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t UnEnumStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t UnEnumStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t UnEnumStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

Range::Range(apache::thrift::FragileConstructor, int32_t min__arg, int32_t max__arg) :
    min(std::move(min__arg)),
    max(std::move(max__arg)) {}

void Range::__clear() {
  // clear all fields
  min = 0;
  max = 0;
}

bool Range::operator==(const Range& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.min == rhs.min)) {
    return false;
  }
  if (!(lhs.max == rhs.max)) {
    return false;
  }
  return true;
}

bool Range::operator<(const Range& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.min == rhs.min)) {
    return lhs.min < rhs.min;
  }
  if (!(lhs.max == rhs.max)) {
    return lhs.max < rhs.max;
  }
  return false;
}


void swap(Range& a, Range& b) {
  using ::std::swap;
  swap(a.min, b.min);
  swap(a.max, b.max);
}

template void Range::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Range::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Range::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Range::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Range::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Range::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Range::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Range::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

struct1::struct1(apache::thrift::FragileConstructor, int32_t a__arg, ::std::string b__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)) {
  __isset.a = true;
  __isset.b = true;
}

void struct1::__clear() {
  // clear all fields
  a = 1234567;
  b = apache::thrift::StringTraits< std::string>::fromStringLiteral("<uninitialized>");
  __isset = {};
}

bool struct1::operator==(const struct1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a == rhs.a)) {
    return false;
  }
  if (!(lhs.b == rhs.b)) {
    return false;
  }
  return true;
}

bool struct1::operator<(const struct1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a == rhs.a)) {
    return lhs.a < rhs.a;
  }
  if (!(lhs.b == rhs.b)) {
    return lhs.b < rhs.b;
  }
  return false;
}


void swap(struct1& a, struct1& b) {
  using ::std::swap;
  swap(a.a, b.a);
  swap(a.b, b.b);
  swap(a.__isset, b.__isset);
}

template void struct1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

struct2::struct2(apache::thrift::FragileConstructor, int32_t a__arg, ::std::string b__arg,  ::cpp2::struct1 c__arg, ::std::vector<int32_t> d__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)),
    c(std::move(c__arg)),
    d(std::move(d__arg)) {
  __isset.a = true;
  __isset.b = true;
  __isset.c = true;
  __isset.d = true;
}

void struct2::__clear() {
  // clear all fields
  a = 0;
  b = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::clear(&c);
  d.clear();
  __isset = {};
}

bool struct2::operator==(const struct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a == rhs.a)) {
    return false;
  }
  if (!(lhs.b == rhs.b)) {
    return false;
  }
  if (!(lhs.c == rhs.c)) {
    return false;
  }
  if (!(lhs.d == rhs.d)) {
    return false;
  }
  return true;
}

bool struct2::operator<(const struct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a == rhs.a)) {
    return lhs.a < rhs.a;
  }
  if (!(lhs.b == rhs.b)) {
    return lhs.b < rhs.b;
  }
  if (!(lhs.c == rhs.c)) {
    return lhs.c < rhs.c;
  }
  if (!(lhs.d == rhs.d)) {
    return lhs.d < rhs.d;
  }
  return false;
}

const  ::cpp2::struct1& struct2::get_c() const& {
  return c;
}

 ::cpp2::struct1 struct2::get_c() && {
  return std::move(c);
}

const ::std::vector<int32_t>& struct2::get_d() const& {
  return d;
}

::std::vector<int32_t> struct2::get_d() && {
  return std::move(d);
}


void swap(struct2& a, struct2& b) {
  using ::std::swap;
  swap(a.a, b.a);
  swap(a.b, b.b);
  swap(a.c, b.c);
  swap(a.d, b.d);
  swap(a.__isset, b.__isset);
}

template void struct2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

struct3::struct3(apache::thrift::FragileConstructor, ::std::string a__arg, int32_t b__arg,  ::cpp2::struct2 c__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)),
    c(std::move(c__arg)) {
  __isset.a = true;
  __isset.b = true;
  __isset.c = true;
}

void struct3::__clear() {
  // clear all fields
  a = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  b = 0;
  ::apache::thrift::Cpp2Ops<  ::cpp2::struct2>::clear(&c);
  __isset = {};
}

bool struct3::operator==(const struct3& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a == rhs.a)) {
    return false;
  }
  if (!(lhs.b == rhs.b)) {
    return false;
  }
  if (!(lhs.c == rhs.c)) {
    return false;
  }
  return true;
}

bool struct3::operator<(const struct3& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a == rhs.a)) {
    return lhs.a < rhs.a;
  }
  if (!(lhs.b == rhs.b)) {
    return lhs.b < rhs.b;
  }
  if (!(lhs.c == rhs.c)) {
    return lhs.c < rhs.c;
  }
  return false;
}

const  ::cpp2::struct2& struct3::get_c() const& {
  return c;
}

 ::cpp2::struct2 struct3::get_c() && {
  return std::move(c);
}


void swap(struct3& a, struct3& b) {
  using ::std::swap;
  swap(a.a, b.a);
  swap(a.b, b.b);
  swap(a.c, b.c);
  swap(a.__isset, b.__isset);
}

template void struct3::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct3::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct3::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct3::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct3::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct3::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct3::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct3::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

void union1::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::i:
    {
      destruct(value_.i);
      break;
    }
    case Type::d:
    {
      destruct(value_.d);
      break;
    }
    default:
    {
      assert(false);
      break;
    }
  }
  type_ = Type::__EMPTY__;
}

bool union1::operator==(const union1& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::i:
    {
      return value_.i == rhs.value_.i;
    }
    case Type::d:
    {
      return value_.d == rhs.value_.d;
    }
    default:
    {
      return true;
    }
  }
}

bool union1::operator<(const union1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::i:
      return lhs.value_.i < rhs.value_.i;
    case Type::d:
      return lhs.value_.d < rhs.value_.d;
    default:
      return false;
  }
}

void swap(union1& a, union1& b) {
  union1 temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void union1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t union1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t union1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t union1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void union1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t union1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t union1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t union1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

void union2::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::i:
    {
      destruct(value_.i);
      break;
    }
    case Type::d:
    {
      destruct(value_.d);
      break;
    }
    case Type::s:
    {
      destruct(value_.s);
      break;
    }
    case Type::u:
    {
      destruct(value_.u);
      break;
    }
    default:
    {
      assert(false);
      break;
    }
  }
  type_ = Type::__EMPTY__;
}

bool union2::operator==(const union2& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::i:
    {
      return value_.i == rhs.value_.i;
    }
    case Type::d:
    {
      return value_.d == rhs.value_.d;
    }
    case Type::s:
    {
      return value_.s == rhs.value_.s;
    }
    case Type::u:
    {
      return value_.u == rhs.value_.u;
    }
    default:
    {
      return true;
    }
  }
}

bool union2::operator<(const union2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::i:
      return lhs.value_.i < rhs.value_.i;
    case Type::d:
      return lhs.value_.d < rhs.value_.d;
    case Type::s:
      return lhs.value_.s < rhs.value_.s;
    case Type::u:
      return lhs.value_.u < rhs.value_.u;
    default:
      return false;
  }
}

void swap(union2& a, union2& b) {
  union2 temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void union2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t union2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t union2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t union2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void union2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t union2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t union2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t union2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
