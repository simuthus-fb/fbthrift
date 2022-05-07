#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp cimport bool as cbool
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.set cimport set as cset
from libcpp.string cimport string
from libcpp.vector cimport vector

from folly cimport cFollyFuture, cFollyTry, cFollyUnit
cimport folly.iobuf as _fbthrift_iobuf
from thrift.py3.common cimport cRpcOptions
from thrift.py3.client cimport cClientWrapper

cimport test.namespace_from_package.module.module.types as _test_namespace_from_package_module_module_types


cdef extern from "src/gen-cpp2/TestService.h" namespace "::test::namespace_from_package::module":
  cdef cppclass cTestServiceAsyncClient "::test::namespace_from_package::module::TestServiceAsyncClient":
      pass

cdef extern from "<utility>" namespace "std":
  cdef unique_ptr[cTestServiceClientWrapper] move(unique_ptr[cTestServiceClientWrapper])

cdef extern from "thrift/lib/cpp/TProcessorEventHandler.h" namespace "::apache::thrift":
  cdef cppclass cTProcessorEventHandler "apache::thrift::TProcessorEventHandler":
    pass

cdef extern from "src/gen-py3/module/clients_wrapper.h" namespace "::test::namespace_from_package::module":
  cdef cppclass cTestServiceClientWrapper "::test::namespace_from_package::module::TestServiceClientWrapper":
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollyFuture[cint64_t] init(cRpcOptions, 
      cint64_t arg_int1,)

