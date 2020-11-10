#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as __iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport b.types as _b_types

cimport a.types as _a_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__A():
    cdef _a_types.A defaults = _a_types.A.create(
        constant_shared_ptr[_a_types.cA](
            default_inst[_a_types.cA]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="A",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            name="b",
            type=_a_types.List__List__c_C,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            name="other",
            type=_a_types.List__c_C,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __ListSpec get_reflection__List__c_C():
    return __ListSpec.create(
        value=_c_types.C,
        kind=__NumberType.NOT_A_NUMBER,
    )

cdef __ListSpec get_reflection__List__List__c_C():
    return __ListSpec.create(
        value=_a_types.List__c_C,
        kind=__NumberType.NOT_A_NUMBER,
    )

