#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions


import facebook.thrift.annotation.thrift.lite_types


class Fields(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            100,  # id
            True,  # isUnqualified
            "injected_field",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter classes
        ),
        (
            101,  # id
            False,  # isUnqualified
            "injected_structured_annotation_field",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter classes
        ),
        (
            102,  # id
            False,  # isUnqualified
            "injected_unstructured_annotation_field",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter classes
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "foo.Fields"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Fields()


# This unfortunately has to be down here to prevent circular imports
import foo.lite_metadata


def _fbthrift_metadata__struct_Fields():
    return foo.lite_metadata.gen_metadata_struct_Fields()

_fbthrift_all_structs = [
    Fields,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)
