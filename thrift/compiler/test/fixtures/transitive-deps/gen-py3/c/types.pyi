#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as __iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class C(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    class __fbthrift_IsSet:
        i: bool
        pass

    i: Final[int] = ...

    def __init__(
        self, *,
        i: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        i: _typing.Union[int, __NotSet, None]=NOTSET
    ) -> C: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['C'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __hash__(self) -> int: ...
    def __lt__(self, other: 'C') -> bool: ...
    def __gt__(self, other: 'C') -> bool: ...
    def __le__(self, other: 'C') -> bool: ...
    def __ge__(self, other: 'C') -> bool: ...


