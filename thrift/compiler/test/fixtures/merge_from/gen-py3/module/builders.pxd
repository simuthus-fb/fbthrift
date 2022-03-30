#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport facebook.thrift.annotation.meta.types as _facebook_thrift_annotation_meta_types
cimport facebook.thrift.annotation.meta.builders as _facebook_thrift_annotation_meta_builders
cimport foo.types as _foo_types
cimport foo.builders as _foo_builders

cimport module.types as _module_types

cdef class Fields_Builder(thrift.py3.builder.StructBuilder):
    cdef public str injected_field


cdef class FieldsInjectedToEmptyStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public str injected_field


cdef class FieldsInjectedToStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public str string_field
    cdef public str injected_field


cdef class FieldsInjectedWithIncludedStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public str string_field
    cdef public str injected_field

