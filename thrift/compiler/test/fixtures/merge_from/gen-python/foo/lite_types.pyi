#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import thrift.py3lite.types as _fbthrift_py3lite_types
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions


class Fields(_fbthrift_py3lite_types.Struct):
    injected_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> Fields: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...