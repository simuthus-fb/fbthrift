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
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from folly.optional cimport cOptional
cimport b.types as _b_types
cdef extern from "src/gen-py3/a/types.h":
  pass





cdef extern from "src/gen-cpp2/a_types_custom_protocol.h" namespace "::cpp2":
    cdef cppclass cA__isset "::cpp2::A::__isset":
        bint b
        bint other

    cdef cppclass cA "::cpp2::A":
        cA() except +
        cA(const cA&) except +
        bint operator==(cA&)
        bint operator!=(cA&)
        bint operator<(cA&)
        bint operator>(cA&)
        bint operator<=(cA&)
        bint operator>=(cA&)
        __field_ref[vector[vector[_c_types.cC]]] b_ref()
        vector[vector[_c_types.cC]] b
        __field_ref[vector[_c_types.cC]] other_ref()
        vector[_c_types.cC] other
        cA__isset __isset




cdef class A(thrift.py3.types.Struct):
    cdef shared_ptr[cA] _cpp_obj
    cdef List__List__c_C __field_b
    cdef List__c_C __field_other

    @staticmethod
    cdef unique_ptr[cA] _make_instance(
        cA* base_instance,
        bint* __isNOTSET,
        object b,
        object other
    ) except *

    @staticmethod
    cdef create(shared_ptr[cA])


cdef class List__c_C(thrift.py3.types.List):
    cdef shared_ptr[vector[_c_types.cC]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[_c_types.cC]])
    @staticmethod
    cdef shared_ptr[vector[_c_types.cC]] _make_instance(object items) except *

cdef class List__List__c_C(thrift.py3.types.List):
    cdef shared_ptr[vector[vector[_c_types.cC]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[vector[_c_types.cC]]])
    @staticmethod
    cdef shared_ptr[vector[vector[_c_types.cC]]] _make_instance(object items) except *


