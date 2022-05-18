#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import facebook.thrift.annotation.hack.types as _facebook_thrift_annotation_hack_types


__property__ = property


class MyEnum(thrift.py3.types.Enum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...


class MyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        MyIntField: bool
        MyStringField: bool
        MyDataField: bool
        myEnum: bool
        oneway: bool
        readonly: bool
        idempotent: bool
        floatSet: bool
        no_hack_codegen_field: bool
        pass

    MyIntField: Final[int] = ...

    MyStringField: Final[str] = ...

    MyDataField: Final[MyDataItem] = ...

    myEnum: Final[MyEnum] = ...

    oneway: Final[bool] = ...

    readonly: Final[bool] = ...

    idempotent: Final[bool] = ...

    floatSet: Final[_typing.AbstractSet[float]] = ...

    no_hack_codegen_field: Final[str] = ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=None,
        MyStringField: _typing.Optional[str]=None,
        MyDataField: _typing.Optional[MyDataItem]=None,
        myEnum: _typing.Optional[MyEnum]=None,
        oneway: _typing.Optional[bool]=None,
        readonly: _typing.Optional[bool]=None,
        idempotent: _typing.Optional[bool]=None,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=None,
        no_hack_codegen_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Union[int, '__NotSet', None]=NOTSET,
        MyStringField: _typing.Union[str, '__NotSet', None]=NOTSET,
        MyDataField: _typing.Union[MyDataItem, '__NotSet', None]=NOTSET,
        myEnum: _typing.Union[MyEnum, '__NotSet', None]=NOTSET,
        oneway: _typing.Union[bool, '__NotSet', None]=NOTSET,
        readonly: _typing.Union[bool, '__NotSet', None]=NOTSET,
        idempotent: _typing.Union[bool, '__NotSet', None]=NOTSET,
        floatSet: _typing.Union[_typing.AbstractSet[float], '__NotSet', None]=NOTSET,
        no_hack_codegen_field: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...


class MyDataItem(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> MyDataItem: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyDataItem'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyDataItem') -> bool: ...
    def __gt__(self, other: 'MyDataItem') -> bool: ...
    def __le__(self, other: 'MyDataItem') -> bool: ...
    def __ge__(self, other: 'MyDataItem') -> bool: ...


class MyUnion(thrift.py3.types.Union, _typing.Hashable):
    class __fbthrift_IsSet:
        myEnum: bool
        myStruct: bool
        myDataItem: bool
        floatSet: bool
        pass

    myEnum: Final[MyEnum] = ...

    myStruct: Final[MyStruct] = ...

    myDataItem: Final[MyDataItem] = ...

    floatSet: Final[_typing.AbstractSet[float]] = ...

    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=None,
        myStruct: _typing.Optional[MyStruct]=None,
        myDataItem: _typing.Optional[MyDataItem]=None,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyUnion') -> bool: ...
    def __gt__(self, other: 'MyUnion') -> bool: ...
    def __le__(self, other: 'MyUnion') -> bool: ...
    def __ge__(self, other: 'MyUnion') -> bool: ...

    class Type(thrift.py3.types.Enum):
        EMPTY: MyUnion.Type = ...
        myEnum: MyUnion.Type = ...
        myStruct: MyUnion.Type = ...
        myDataItem: MyUnion.Type = ...
        floatSet: MyUnion.Type = ...

    @staticmethod
    def fromValue(value: _typing.Union[None, MyEnum, MyStruct, MyDataItem, _typing.AbstractSet[float]]) -> MyUnion: ...
    @__property__
    def value(self) -> _typing.Union[None, MyEnum, MyStruct, MyDataItem, _typing.AbstractSet[float]]: ...
    @__property__
    def type(self) -> "MyUnion.Type": ...


class Set__float(_typing.AbstractSet[float], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[float]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[float]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def intersection(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def difference(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def symmetric_difference(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def issubset(self, other: _typing.AbstractSet[float]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[float]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[float]: ...

