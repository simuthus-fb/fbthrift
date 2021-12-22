#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/module/types.h":
  pass


cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cMyEnum "::cpp2::MyEnum":
        pass





cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cMyStructNestedAnnotation "::cpp2::MyStructNestedAnnotation":
        cMyStructNestedAnnotation() except +
        cMyStructNestedAnnotation(const cMyStructNestedAnnotation&) except +
        bint operator==(cMyStructNestedAnnotation&)
        bint operator!=(cMyStructNestedAnnotation&)
        bint operator<(cMyStructNestedAnnotation&)
        bint operator>(cMyStructNestedAnnotation&)
        bint operator<=(cMyStructNestedAnnotation&)
        bint operator>=(cMyStructNestedAnnotation&)
        __field_ref[string] name_ref()


    cdef cppclass cMyStruct "::cpp2::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)
        __field_ref[cint64_t] major_ref "majorVer_ref"()
        __field_ref[string] package_ref()
        __field_ref[string] annotation_with_quote_ref()
        __field_ref[string] class__ref()
        __field_ref[string] annotation_with_trailing_comma_ref()
        __field_ref[string] empty_annotations_ref()
        __field_ref[cMyEnum] my_enum_ref()


    cdef cppclass cSecretStruct "::cpp2::SecretStruct":
        cSecretStruct() except +
        cSecretStruct(const cSecretStruct&) except +
        bint operator==(cSecretStruct&)
        bint operator!=(cSecretStruct&)
        bint operator<(cSecretStruct&)
        bint operator>(cSecretStruct&)
        bint operator<=(cSecretStruct&)
        bint operator>=(cSecretStruct&)
        __field_ref[cint64_t] id_ref()
        __field_ref[string] password_ref()




cdef class MyStructNestedAnnotation(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructNestedAnnotation] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter _fields_setter
    cdef inline object name_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructNestedAnnotation])



cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object major_impl(self)
    cdef inline object package_impl(self)
    cdef inline object annotation_with_quote_impl(self)
    cdef inline object class__impl(self)
    cdef inline object annotation_with_trailing_comma_impl(self)
    cdef inline object empty_annotations_impl(self)
    cdef inline object my_enum_impl(self)
    cdef object __fbthrift_cached_my_enum

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct])



cdef class SecretStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cSecretStruct] _cpp_obj
    cdef _fbthrift_types_fields.__SecretStruct_FieldsSetter _fields_setter
    cdef inline object id_impl(self)
    cdef inline object password_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cSecretStruct])



cdef extern from "src/gen-cpp2/module_constants.h" namespace "::cpp2":
    cdef cMyStruct cmyStruct "::cpp2::module_constants::myStruct"()
