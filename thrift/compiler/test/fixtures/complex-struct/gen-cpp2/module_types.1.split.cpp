/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStructMapFloatThrowExp>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStructMapFloatThrowExp::MyStructMapFloatThrowExp(apache::thrift::FragileConstructor, int64_t myLongField__arg, ::std::map<int32_t, ::std::vector<::std::vector< ::cpp2::floatTypedef>>> mapListOfFloats__arg) :
    myLongField(std::move(myLongField__arg)),
    mapListOfFloats(std::move(mapListOfFloats__arg)) {
  __isset.myLongField = true;
  __isset.mapListOfFloats = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyStructMapFloatThrowExp::__clear() {
  // clear all fields
  myLongField = 0;
  mapListOfFloats.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStructMapFloatThrowExp::operator==(const MyStructMapFloatThrowExp& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myLongField == rhs.myLongField)) {
    return false;
  }
  if (!(lhs.mapListOfFloats == rhs.mapListOfFloats)) {
    return false;
  }
  return true;
}

bool MyStructMapFloatThrowExp::operator<(const MyStructMapFloatThrowExp& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myLongField == rhs.myLongField)) {
    return lhs.myLongField < rhs.myLongField;
  }
  if (!(lhs.mapListOfFloats == rhs.mapListOfFloats)) {
    return lhs.mapListOfFloats < rhs.mapListOfFloats;
  }
  return false;
}

const ::std::map<int32_t, ::std::vector<::std::vector< ::cpp2::floatTypedef>>>& MyStructMapFloatThrowExp::get_mapListOfFloats() const& {
  return mapListOfFloats;
}

::std::map<int32_t, ::std::vector<::std::vector< ::cpp2::floatTypedef>>> MyStructMapFloatThrowExp::get_mapListOfFloats() && {
  return std::move(mapListOfFloats);
}


void swap(MyStructMapFloatThrowExp& a, MyStructMapFloatThrowExp& b) {
  using ::std::swap;
  swap(a.myLongField_ref().value(), b.myLongField_ref().value());
  swap(a.mapListOfFloats_ref().value(), b.mapListOfFloats_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyStructMapFloatThrowExp::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStructMapFloatThrowExp::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStructMapFloatThrowExp::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStructMapFloatThrowExp::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStructMapFloatThrowExp::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStructMapFloatThrowExp::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStructMapFloatThrowExp::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStructMapFloatThrowExp::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::defaultStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::defaultStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
defaultStruct::defaultStruct() :
      myLongDFset(10LL),
      myLongDF(0),
      portDFset(3456),
      portNum(0),
      myBinaryDFset(apache::thrift::StringTraits< std::string>::fromStringLiteral("abc")),
      myByteDFSet(static_cast<int8_t>(17)),
      myByte(0),
      myDoubleDFset(99.7678),
      myDoubleDFZero(0),
      myDouble(0),
      field3(std::initializer_list<std::pair<const int32_t, ::std::string>>{{15, apache::thrift::StringTraits< std::string>::fromStringLiteral("a_value")},
  {2, apache::thrift::StringTraits< std::string>::fromStringLiteral("b_value")}}),
      myList(std::initializer_list< ::cpp2::MyEnum>{ ::cpp2::MyEnum::MyValue1,
   ::cpp2::MyEnum::MyValue1,
   ::cpp2::MyEnum::MyValue2}),
      mySet(std::initializer_list<::std::string>{apache::thrift::StringTraits< std::string>::fromStringLiteral("house"),
  apache::thrift::StringTraits< std::string>::fromStringLiteral("car"),
  apache::thrift::StringTraits< std::string>::fromStringLiteral("dog")}),
      simpleStruct(::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(40LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("John")))),
      listStructDFset(std::initializer_list< ::cpp2::SimpleStruct>{::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(40LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("IronMan"))),
  ::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(999LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Thanos")))}),
      myUnion(::apache::thrift::detail::make_constant< ::cpp2::MyUnion>(::apache::thrift::type_class::variant{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::myEnum>( ::cpp2::MyEnum::MyValue2))),
      listUnionDFset(std::initializer_list< ::cpp2::MyUnion>{::apache::thrift::detail::make_constant< ::cpp2::MyUnion>(::apache::thrift::type_class::variant{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::myEnum>( ::cpp2::MyEnum::MyValue2)),
  ::apache::thrift::detail::make_constant< ::cpp2::MyUnion>(::apache::thrift::type_class::variant{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::intValue>(123))}),
      mapNestlistStructDfSet(std::initializer_list<std::pair<const int32_t, ::std::vector< ::cpp2::SimpleStruct>>>{{1, std::initializer_list< ::cpp2::SimpleStruct>{::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(40LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("IronMan"))),
  ::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(999LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Thanos")))}},
  {2, std::initializer_list< ::cpp2::SimpleStruct>{::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(28LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("BatMan"))),
  ::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(12LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Robin")))}},
  {5, std::initializer_list< ::cpp2::SimpleStruct>{::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(12LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("RatMan"))),
  ::apache::thrift::detail::make_constant< ::cpp2::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::age>(6LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::name>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Catman")))}}}),
      mapJavaTypeDFset(std::initializer_list<std::pair<const int64_t, ::std::string>>{{15, apache::thrift::StringTraits< std::string>::fromStringLiteral("a_value")},
  {2, apache::thrift::StringTraits< std::string>::fromStringLiteral("b_value")}}),
      enumMapDFset(std::initializer_list<std::pair<const ::std::string, ::std::map<int32_t,  ::cpp2::MyEnum>>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("SANDY BRIDGE"), std::initializer_list<std::pair<const int32_t,  ::cpp2::MyEnum>>{{16,  ::cpp2::MyEnum::MyValue1},
  {144,  ::cpp2::MyEnum::MyValue1}}},
  {apache::thrift::StringTraits< std::string>::fromStringLiteral("IVY BRIDGE"), std::initializer_list<std::pair<const int32_t,  ::cpp2::MyEnum>>{{32,  ::cpp2::MyEnum::MyValue2},
  {144,  ::cpp2::MyEnum::MyValue2}}},
  {apache::thrift::StringTraits< std::string>::fromStringLiteral("HASWELL"), std::initializer_list<std::pair<const int32_t,  ::cpp2::MyEnum>>{{32,  ::cpp2::MyEnum::MyValue3},
  {128,  ::cpp2::MyEnum::MyValue3},
  {256,  ::cpp2::MyEnum::MyValue3}}}}) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


defaultStruct::~defaultStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
defaultStruct::defaultStruct(apache::thrift::FragileConstructor, int64_t myLongDFset__arg, int64_t myLongDF__arg, int32_t portDFset__arg, int32_t portNum__arg, ::std::string myBinaryDFset__arg, ::std::string myBinary__arg, int8_t myByteDFSet__arg, int8_t myByte__arg, double myDoubleDFset__arg, double myDoubleDFZero__arg, double myDouble__arg, ::std::map<int32_t, ::std::string> field3__arg, ::std::vector< ::cpp2::MyEnum> myList__arg, ::std::set<::std::string> mySet__arg,  ::cpp2::SimpleStruct simpleStruct__arg, ::std::vector< ::cpp2::SimpleStruct> listStructDFset__arg,  ::cpp2::MyUnion myUnion__arg, ::std::vector< ::cpp2::MyUnion> listUnionDFset__arg, ::std::map<int32_t, ::std::vector< ::cpp2::SimpleStruct>> mapNestlistStructDfSet__arg, ::std::map<int64_t, ::std::string> mapJavaTypeDFset__arg, ::std::map<int64_t, int32_t> emptyMap__arg, ::std::map<::std::string, ::std::map<int32_t,  ::cpp2::MyEnum>> enumMapDFset__arg) :
    myLongDFset(std::move(myLongDFset__arg)),
    myLongDF(std::move(myLongDF__arg)),
    portDFset(std::move(portDFset__arg)),
    portNum(std::move(portNum__arg)),
    myBinaryDFset(std::move(myBinaryDFset__arg)),
    myBinary(std::move(myBinary__arg)),
    myByteDFSet(std::move(myByteDFSet__arg)),
    myByte(std::move(myByte__arg)),
    myDoubleDFset(std::move(myDoubleDFset__arg)),
    myDoubleDFZero(std::move(myDoubleDFZero__arg)),
    myDouble(std::move(myDouble__arg)),
    field3(std::move(field3__arg)),
    myList(std::move(myList__arg)),
    mySet(std::move(mySet__arg)),
    simpleStruct(std::move(simpleStruct__arg)),
    listStructDFset(std::move(listStructDFset__arg)),
    myUnion(std::move(myUnion__arg)),
    listUnionDFset(std::move(listUnionDFset__arg)),
    mapNestlistStructDfSet(std::move(mapNestlistStructDfSet__arg)),
    mapJavaTypeDFset(std::move(mapJavaTypeDFset__arg)),
    emptyMap(std::move(emptyMap__arg)),
    enumMapDFset(std::move(enumMapDFset__arg)) {
  __isset.myLongDFset = true;
  __isset.myLongDF = true;
  __isset.portDFset = true;
  __isset.portNum = true;
  __isset.myBinaryDFset = true;
  __isset.myBinary = true;
  __isset.myByteDFSet = true;
  __isset.myByte = true;
  __isset.myDoubleDFset = true;
  __isset.myDoubleDFZero = true;
  __isset.myDouble = true;
  __isset.field3 = true;
  __isset.myList = true;
  __isset.mySet = true;
  __isset.simpleStruct = true;
  __isset.listStructDFset = true;
  __isset.myUnion = true;
  __isset.listUnionDFset = true;
  __isset.mapNestlistStructDfSet = true;
  __isset.mapJavaTypeDFset = true;
  __isset.emptyMap = true;
  __isset.enumMapDFset = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void defaultStruct::__clear() {
  // clear all fields
  myLongDFset = 10LL;
  myLongDF = 0;
  portDFset = 3456;
  portNum = 0;
  myBinaryDFset = apache::thrift::StringTraits< std::string>::fromStringLiteral("abc");
  myBinary = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  myByteDFSet = static_cast<int8_t>(17);
  myByte = 0;
  myDoubleDFset = 99.7678;
  myDoubleDFZero = 0;
  myDouble = 0;
  field3.clear();
  myList.clear();
  mySet.clear();
  simpleStruct.__clear();
  listStructDFset.clear();
  myUnion.__clear();
  listUnionDFset.clear();
  mapNestlistStructDfSet.clear();
  mapJavaTypeDFset.clear();
  emptyMap.clear();
  enumMapDFset.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool defaultStruct::operator==(const defaultStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myLongDFset == rhs.myLongDFset)) {
    return false;
  }
  if (!(lhs.myLongDF == rhs.myLongDF)) {
    return false;
  }
  if (!(lhs.portDFset == rhs.portDFset)) {
    return false;
  }
  if (!(lhs.portNum == rhs.portNum)) {
    return false;
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.myBinaryDFset, rhs.myBinaryDFset)) {
    return false;
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.myBinary, rhs.myBinary)) {
    return false;
  }
  if (!(lhs.myByteDFSet == rhs.myByteDFSet)) {
    return false;
  }
  if (!(lhs.myByte == rhs.myByte)) {
    return false;
  }
  if (!(lhs.myDoubleDFset == rhs.myDoubleDFset)) {
    return false;
  }
  if (!(lhs.myDoubleDFZero == rhs.myDoubleDFZero)) {
    return false;
  }
  if (!(lhs.myDouble == rhs.myDouble)) {
    return false;
  }
  if (!(lhs.field3 == rhs.field3)) {
    return false;
  }
  if (!(lhs.myList == rhs.myList)) {
    return false;
  }
  if (!(lhs.mySet == rhs.mySet)) {
    return false;
  }
  if (!(lhs.simpleStruct == rhs.simpleStruct)) {
    return false;
  }
  if (!(lhs.listStructDFset == rhs.listStructDFset)) {
    return false;
  }
  if (!(lhs.myUnion == rhs.myUnion)) {
    return false;
  }
  if (!(lhs.listUnionDFset == rhs.listUnionDFset)) {
    return false;
  }
  if (!(lhs.mapNestlistStructDfSet == rhs.mapNestlistStructDfSet)) {
    return false;
  }
  if (!(lhs.mapJavaTypeDFset == rhs.mapJavaTypeDFset)) {
    return false;
  }
  if (!(lhs.emptyMap == rhs.emptyMap)) {
    return false;
  }
  if (!(lhs.enumMapDFset == rhs.enumMapDFset)) {
    return false;
  }
  return true;
}

bool defaultStruct::operator<(const defaultStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myLongDFset == rhs.myLongDFset)) {
    return lhs.myLongDFset < rhs.myLongDFset;
  }
  if (!(lhs.myLongDF == rhs.myLongDF)) {
    return lhs.myLongDF < rhs.myLongDF;
  }
  if (!(lhs.portDFset == rhs.portDFset)) {
    return lhs.portDFset < rhs.portDFset;
  }
  if (!(lhs.portNum == rhs.portNum)) {
    return lhs.portNum < rhs.portNum;
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.myBinaryDFset, rhs.myBinaryDFset)) {
    return apache::thrift::StringTraits<std::string>::isLess(lhs.myBinaryDFset, rhs.myBinaryDFset);
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.myBinary, rhs.myBinary)) {
    return apache::thrift::StringTraits<std::string>::isLess(lhs.myBinary, rhs.myBinary);
  }
  if (!(lhs.myByteDFSet == rhs.myByteDFSet)) {
    return lhs.myByteDFSet < rhs.myByteDFSet;
  }
  if (!(lhs.myByte == rhs.myByte)) {
    return lhs.myByte < rhs.myByte;
  }
  if (!(lhs.myDoubleDFset == rhs.myDoubleDFset)) {
    return lhs.myDoubleDFset < rhs.myDoubleDFset;
  }
  if (!(lhs.myDoubleDFZero == rhs.myDoubleDFZero)) {
    return lhs.myDoubleDFZero < rhs.myDoubleDFZero;
  }
  if (!(lhs.myDouble == rhs.myDouble)) {
    return lhs.myDouble < rhs.myDouble;
  }
  if (!(lhs.field3 == rhs.field3)) {
    return lhs.field3 < rhs.field3;
  }
  if (!(lhs.myList == rhs.myList)) {
    return lhs.myList < rhs.myList;
  }
  if (!(lhs.mySet == rhs.mySet)) {
    return lhs.mySet < rhs.mySet;
  }
  if (!(lhs.simpleStruct == rhs.simpleStruct)) {
    return lhs.simpleStruct < rhs.simpleStruct;
  }
  if (!(lhs.listStructDFset == rhs.listStructDFset)) {
    return lhs.listStructDFset < rhs.listStructDFset;
  }
  if (!(lhs.myUnion == rhs.myUnion)) {
    return lhs.myUnion < rhs.myUnion;
  }
  if (!(lhs.listUnionDFset == rhs.listUnionDFset)) {
    return lhs.listUnionDFset < rhs.listUnionDFset;
  }
  if (!(lhs.mapNestlistStructDfSet == rhs.mapNestlistStructDfSet)) {
    return lhs.mapNestlistStructDfSet < rhs.mapNestlistStructDfSet;
  }
  if (!(lhs.mapJavaTypeDFset == rhs.mapJavaTypeDFset)) {
    return lhs.mapJavaTypeDFset < rhs.mapJavaTypeDFset;
  }
  if (!(lhs.emptyMap == rhs.emptyMap)) {
    return lhs.emptyMap < rhs.emptyMap;
  }
  if (!(lhs.enumMapDFset == rhs.enumMapDFset)) {
    return lhs.enumMapDFset < rhs.enumMapDFset;
  }
  return false;
}

const ::std::map<int32_t, ::std::string>& defaultStruct::get_field3() const& {
  return field3;
}

::std::map<int32_t, ::std::string> defaultStruct::get_field3() && {
  return std::move(field3);
}

const ::std::vector< ::cpp2::MyEnum>& defaultStruct::get_myList() const& {
  return myList;
}

::std::vector< ::cpp2::MyEnum> defaultStruct::get_myList() && {
  return std::move(myList);
}

const ::std::set<::std::string>& defaultStruct::get_mySet() const& {
  return mySet;
}

::std::set<::std::string> defaultStruct::get_mySet() && {
  return std::move(mySet);
}

const  ::cpp2::SimpleStruct& defaultStruct::get_simpleStruct() const& {
  return simpleStruct;
}

 ::cpp2::SimpleStruct defaultStruct::get_simpleStruct() && {
  return std::move(simpleStruct);
}

const ::std::vector< ::cpp2::SimpleStruct>& defaultStruct::get_listStructDFset() const& {
  return listStructDFset;
}

::std::vector< ::cpp2::SimpleStruct> defaultStruct::get_listStructDFset() && {
  return std::move(listStructDFset);
}

const  ::cpp2::MyUnion& defaultStruct::get_myUnion() const& {
  return myUnion;
}

 ::cpp2::MyUnion defaultStruct::get_myUnion() && {
  return std::move(myUnion);
}

const ::std::vector< ::cpp2::MyUnion>& defaultStruct::get_listUnionDFset() const& {
  return listUnionDFset;
}

::std::vector< ::cpp2::MyUnion> defaultStruct::get_listUnionDFset() && {
  return std::move(listUnionDFset);
}

const ::std::map<int32_t, ::std::vector< ::cpp2::SimpleStruct>>& defaultStruct::get_mapNestlistStructDfSet() const& {
  return mapNestlistStructDfSet;
}

::std::map<int32_t, ::std::vector< ::cpp2::SimpleStruct>> defaultStruct::get_mapNestlistStructDfSet() && {
  return std::move(mapNestlistStructDfSet);
}

const ::std::map<int64_t, ::std::string>& defaultStruct::get_mapJavaTypeDFset() const& {
  return mapJavaTypeDFset;
}

::std::map<int64_t, ::std::string> defaultStruct::get_mapJavaTypeDFset() && {
  return std::move(mapJavaTypeDFset);
}

const ::std::map<int64_t, int32_t>& defaultStruct::get_emptyMap() const& {
  return emptyMap;
}

::std::map<int64_t, int32_t> defaultStruct::get_emptyMap() && {
  return std::move(emptyMap);
}

const ::std::map<::std::string, ::std::map<int32_t,  ::cpp2::MyEnum>>& defaultStruct::get_enumMapDFset() const& {
  return enumMapDFset;
}

::std::map<::std::string, ::std::map<int32_t,  ::cpp2::MyEnum>> defaultStruct::get_enumMapDFset() && {
  return std::move(enumMapDFset);
}


void swap(defaultStruct& a, defaultStruct& b) {
  using ::std::swap;
  swap(a.myLongDFset_ref().value(), b.myLongDFset_ref().value());
  swap(a.myLongDF_ref().value(), b.myLongDF_ref().value());
  swap(a.portDFset_ref().value(), b.portDFset_ref().value());
  swap(a.portNum_ref().value(), b.portNum_ref().value());
  swap(a.myBinaryDFset_ref().value(), b.myBinaryDFset_ref().value());
  swap(a.myBinary_ref().value(), b.myBinary_ref().value());
  swap(a.myByteDFSet_ref().value(), b.myByteDFSet_ref().value());
  swap(a.myByte_ref().value(), b.myByte_ref().value());
  swap(a.myDoubleDFset_ref().value(), b.myDoubleDFset_ref().value());
  swap(a.myDoubleDFZero_ref().value(), b.myDoubleDFZero_ref().value());
  swap(a.myDouble_ref().value(), b.myDouble_ref().value());
  swap(a.field3_ref().value(), b.field3_ref().value());
  swap(a.myList_ref().value(), b.myList_ref().value());
  swap(a.mySet_ref().value(), b.mySet_ref().value());
  swap(a.simpleStruct_ref().value(), b.simpleStruct_ref().value());
  swap(a.listStructDFset_ref().value(), b.listStructDFset_ref().value());
  swap(a.myUnion_ref().value(), b.myUnion_ref().value());
  swap(a.listUnionDFset_ref().value(), b.listUnionDFset_ref().value());
  swap(a.mapNestlistStructDfSet_ref().value(), b.mapNestlistStructDfSet_ref().value());
  swap(a.mapJavaTypeDFset_ref().value(), b.mapJavaTypeDFset_ref().value());
  swap(a.emptyMap_ref().value(), b.emptyMap_ref().value());
  swap(a.enumMapDFset_ref().value(), b.enumMapDFset_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void defaultStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t defaultStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t defaultStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t defaultStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void defaultStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t defaultStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t defaultStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t defaultStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        defaultStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SimpleStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        defaultStruct,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector< ::cpp2::SimpleStruct>>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        defaultStruct,
        ::apache::thrift::type_class::variant,
         ::cpp2::MyUnion>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        defaultStruct,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>>,
        ::std::map<int32_t, ::std::vector< ::cpp2::SimpleStruct>>>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        defaultStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SimpleStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        defaultStruct,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector< ::cpp2::SimpleStruct>>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        defaultStruct,
        ::apache::thrift::type_class::variant,
         ::cpp2::MyUnion>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        defaultStruct,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>>,
        ::std::map<int32_t, ::std::vector< ::cpp2::SimpleStruct>>>,
    "inconsistent use of nimble option");

} // cpp2
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyUnion::Type>::size;
folly::Range<::cpp2::MyUnion::Type const*> const TEnumTraits<::cpp2::MyUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::names);

char const* TEnumTraits<::cpp2::MyUnion::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::MyUnion::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyUnion::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::MyUnion::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void MyUnion::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::myEnum:
      destruct(value_.myEnum);
      break;
    case Type::myStruct:
      destruct(value_.myStruct);
      break;
    case Type::myDataItem:
      destruct(value_.myDataItem);
      break;
    case Type::complexNestedStruct:
      destruct(value_.complexNestedStruct);
      break;
    case Type::longValue:
      destruct(value_.longValue);
      break;
    case Type::intValue:
      destruct(value_.intValue);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool MyUnion::operator==(const MyUnion& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::myEnum:
      return value_.myEnum == rhs.value_.myEnum;
    case Type::myStruct:
      return value_.myStruct == rhs.value_.myStruct;
    case Type::myDataItem:
      return value_.myDataItem == rhs.value_.myDataItem;
    case Type::complexNestedStruct:
      return value_.complexNestedStruct == rhs.value_.complexNestedStruct;
    case Type::longValue:
      return value_.longValue == rhs.value_.longValue;
    case Type::intValue:
      return value_.intValue == rhs.value_.intValue;
    default:
      return true;
  }
}

bool MyUnion::operator<(const MyUnion& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::myEnum:
      return lhs.value_.myEnum < rhs.value_.myEnum;
    case Type::myStruct:
      return lhs.value_.myStruct < rhs.value_.myStruct;
    case Type::myDataItem:
      return lhs.value_.myDataItem < rhs.value_.myDataItem;
    case Type::complexNestedStruct:
      return lhs.value_.complexNestedStruct < rhs.value_.complexNestedStruct;
    case Type::longValue:
      return lhs.value_.longValue < rhs.value_.longValue;
    case Type::intValue:
      return lhs.value_.intValue < rhs.value_.intValue;
    default:
      return false;
  }
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
         ::cpp2::MyStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
         ::cpp2::MyDataItem>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
         ::cpp2::ComplexNestedStruct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyUnion,
        ::apache::thrift::type_class::structure,
         ::cpp2::MyStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyUnion,
        ::apache::thrift::type_class::structure,
         ::cpp2::MyDataItem>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyUnion,
        ::apache::thrift::type_class::structure,
         ::cpp2::ComplexNestedStruct>,
    "inconsistent use of nimble option");

} // cpp2
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::TypeRemapped>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::TypeRemapped>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
TypeRemapped::TypeRemapped(apache::thrift::FragileConstructor, ::std::map<int64_t, ::std::string> lsMap__arg, ::std::map<int32_t,  ::cpp2::FMap> ioMap__arg, int32_t BigInteger__arg, ::std::string binaryTestBuffer__arg) :
    lsMap(std::move(lsMap__arg)),
    ioMap(std::move(ioMap__arg)),
    BigInteger(std::move(BigInteger__arg)),
    binaryTestBuffer(std::move(binaryTestBuffer__arg)) {
  __isset.lsMap = true;
  __isset.ioMap = true;
  __isset.BigInteger = true;
  __isset.binaryTestBuffer = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void TypeRemapped::__clear() {
  // clear all fields
  lsMap.clear();
  ioMap.clear();
  BigInteger = 0;
  binaryTestBuffer = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool TypeRemapped::operator==(const TypeRemapped& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.lsMap == rhs.lsMap)) {
    return false;
  }
  if (!(lhs.ioMap == rhs.ioMap)) {
    return false;
  }
  if (!(lhs.BigInteger == rhs.BigInteger)) {
    return false;
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.binaryTestBuffer, rhs.binaryTestBuffer)) {
    return false;
  }
  return true;
}

bool TypeRemapped::operator<(const TypeRemapped& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.lsMap == rhs.lsMap)) {
    return lhs.lsMap < rhs.lsMap;
  }
  if (!(lhs.ioMap == rhs.ioMap)) {
    return lhs.ioMap < rhs.ioMap;
  }
  if (!(lhs.BigInteger == rhs.BigInteger)) {
    return lhs.BigInteger < rhs.BigInteger;
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.binaryTestBuffer, rhs.binaryTestBuffer)) {
    return apache::thrift::StringTraits<std::string>::isLess(lhs.binaryTestBuffer, rhs.binaryTestBuffer);
  }
  return false;
}

const ::std::map<int64_t, ::std::string>& TypeRemapped::get_lsMap() const& {
  return lsMap;
}

::std::map<int64_t, ::std::string> TypeRemapped::get_lsMap() && {
  return std::move(lsMap);
}

const ::std::map<int32_t,  ::cpp2::FMap>& TypeRemapped::get_ioMap() const& {
  return ioMap;
}

::std::map<int32_t,  ::cpp2::FMap> TypeRemapped::get_ioMap() && {
  return std::move(ioMap);
}


void swap(TypeRemapped& a, TypeRemapped& b) {
  using ::std::swap;
  swap(a.lsMap_ref().value(), b.lsMap_ref().value());
  swap(a.ioMap_ref().value(), b.ioMap_ref().value());
  swap(a.BigInteger_ref().value(), b.BigInteger_ref().value());
  swap(a.binaryTestBuffer_ref().value(), b.binaryTestBuffer_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void TypeRemapped::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TypeRemapped::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TypeRemapped::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TypeRemapped::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TypeRemapped::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TypeRemapped::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TypeRemapped::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TypeRemapped::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::optXcep>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::optXcep>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
optXcep::optXcep(apache::thrift::FragileConstructor, ::std::string message__arg, int32_t errorCode__arg) :
    message(std::move(message__arg)),
    errorCode(std::move(errorCode__arg)) {
  __isset.message = true;
  __isset.errorCode = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void optXcep::__clear() {
  // clear all fields
  message = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  errorCode = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool optXcep::operator==(const optXcep& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.message_ref() != rhs.message_ref()) {
    return false;
  }
  if (lhs.errorCode_ref() != rhs.errorCode_ref()) {
    return false;
  }
  return true;
}

bool optXcep::operator<(const optXcep& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.message_ref() != rhs.message_ref()) {
    return lhs.message_ref() < rhs.message_ref();
  }
  if (lhs.errorCode_ref() != rhs.errorCode_ref()) {
    return lhs.errorCode_ref() < rhs.errorCode_ref();
  }
  return false;
}


void swap(optXcep& a, optXcep& b) {
  using ::std::swap;
  swap(a.message_ref().value_unchecked(), b.message_ref().value_unchecked());
  swap(a.errorCode_ref().value_unchecked(), b.errorCode_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void optXcep::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t optXcep::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t optXcep::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t optXcep::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void optXcep::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t optXcep::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t optXcep::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t optXcep::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
