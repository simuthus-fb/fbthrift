/**
 * Autogenerated by Thrift for src/reflection.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_types.h"

namespace apache { namespace thrift {



template <> struct TStructDataStorage<::cpp2::ReflectionStruct> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "fieldA",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
  }};
};


}} // apache::thrift
