/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/deprecated-enforce-required/gen-cpp2/module_types.h"

namespace apache { namespace thrift {



template <> struct TStructDataStorage<::cpp2::Foo> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "bar",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
  }};
};


}} // apache::thrift
