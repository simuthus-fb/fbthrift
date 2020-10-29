/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {


constexpr const std::size_t TEnumDataStorage<::cpp2::TypedEnum>::size;
constexpr const std::array<::cpp2::TypedEnum, 2> TEnumDataStorage<::cpp2::TypedEnum>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::TypedEnum>::names;


constexpr const std::size_t TEnumDataStorage<::cpp2::MyUnion::Type>::size;
constexpr const std::array<::cpp2::MyUnion::Type, 2> TEnumDataStorage<::cpp2::MyUnion::Type>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::MyUnion::Type>::names;


constexpr const std::size_t TStructDataStorage<::cpp2::MyUnion>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::MyUnion>::fields_size> TStructDataStorage<::cpp2::MyUnion>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::MyUnion>::fields_size> TStructDataStorage<::cpp2::MyUnion>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::MyUnion>::fields_size> TStructDataStorage<::cpp2::MyUnion>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::MyField>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::MyField>::fields_size> TStructDataStorage<::cpp2::MyField>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::MyField>::fields_size> TStructDataStorage<::cpp2::MyField>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::MyField>::fields_size> TStructDataStorage<::cpp2::MyField>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::MyStruct>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::MyStruct>::fields_size> TStructDataStorage<::cpp2::MyStruct>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::MyStruct>::fields_size> TStructDataStorage<::cpp2::MyStruct>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::MyStruct>::fields_size> TStructDataStorage<::cpp2::MyStruct>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithUnion>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithUnion>::fields_size> TStructDataStorage<::cpp2::StructWithUnion>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithUnion>::fields_size> TStructDataStorage<::cpp2::StructWithUnion>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithUnion>::fields_size> TStructDataStorage<::cpp2::StructWithUnion>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::RecursiveStruct>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::RecursiveStruct>::fields_size> TStructDataStorage<::cpp2::RecursiveStruct>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::RecursiveStruct>::fields_size> TStructDataStorage<::cpp2::RecursiveStruct>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::RecursiveStruct>::fields_size> TStructDataStorage<::cpp2::RecursiveStruct>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithContainers>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithContainers>::fields_size> TStructDataStorage<::cpp2::StructWithContainers>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithContainers>::fields_size> TStructDataStorage<::cpp2::StructWithContainers>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithContainers>::fields_size> TStructDataStorage<::cpp2::StructWithContainers>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithSharedConst>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithSharedConst>::fields_size> TStructDataStorage<::cpp2::StructWithSharedConst>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithSharedConst>::fields_size> TStructDataStorage<::cpp2::StructWithSharedConst>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithSharedConst>::fields_size> TStructDataStorage<::cpp2::StructWithSharedConst>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::Empty>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::Empty>::fields_size> TStructDataStorage<::cpp2::Empty>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::Empty>::fields_size> TStructDataStorage<::cpp2::Empty>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::Empty>::fields_size> TStructDataStorage<::cpp2::Empty>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithRef>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithRef>::fields_size> TStructDataStorage<::cpp2::StructWithRef>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithRef>::fields_size> TStructDataStorage<::cpp2::StructWithRef>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithRef>::fields_size> TStructDataStorage<::cpp2::StructWithRef>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_size> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_types;
constexpr const std::size_t TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_size> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_size> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_size> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_types;

} // namespace thrift
} // namespace apache
