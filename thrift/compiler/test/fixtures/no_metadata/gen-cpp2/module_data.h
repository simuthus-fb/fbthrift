/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::MyEnum> {
  using type = ::cpp2::MyEnum;
  static constexpr const std::size_t size = 2;
  static constexpr const std::array<type, size> values = {{
    type::MyValue1,
    type::MyValue2,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "MyValue1",
    "MyValue2",
  }};
};

template <> struct TEnumDataStorage<::cpp2::MyUnion::Type> {
  using type = ::cpp2::MyUnion::Type;
  static constexpr const std::size_t size = 3;
  static constexpr const std::array<type, size> values = {{
    type::myEnum,
    type::myStruct,
    type::myDataItem,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "myEnum",
    "myStruct",
    "myDataItem",
  }};
};


template <> struct TStructDataStorage<::cpp2::MyDataItem> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 0;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
  }};
};


template <> struct TStructDataStorage<::cpp2::MyStruct> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "MyIntField",
    "MyStringField",
    "MyDataField",
    "myEnum",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I64,
    TType::T_STRING,
    TType::T_STRUCT,
    TType::T_I32,
  }};
};


template <> struct TStructDataStorage<::cpp2::MyUnion> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "myEnum",
    "myStruct",
    "myDataItem",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


}} // apache::thrift
