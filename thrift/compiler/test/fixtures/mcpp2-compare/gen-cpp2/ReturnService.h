/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ReturnServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include <folly/small_vector.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {

class ReturnServiceSvAsyncIf {
 public:
  virtual ~ReturnServiceSvAsyncIf() {}
  virtual void async_eb_noReturn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_noReturn() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_noReturn() = 0;
  virtual void async_tm_boolReturn(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) = 0;
  virtual folly::Future<bool> future_boolReturn() = 0;
  virtual folly::SemiFuture<bool> semifuture_boolReturn() = 0;
  virtual void async_tm_i16Return(std::unique_ptr<apache::thrift::HandlerCallback<int16_t>> callback) = 0;
  virtual folly::Future<int16_t> future_i16Return() = 0;
  virtual folly::SemiFuture<int16_t> semifuture_i16Return() = 0;
  virtual void async_tm_i32Return(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) = 0;
  virtual folly::Future<int32_t> future_i32Return() = 0;
  virtual folly::SemiFuture<int32_t> semifuture_i32Return() = 0;
  virtual void async_tm_i64Return(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback) = 0;
  virtual folly::Future<int64_t> future_i64Return() = 0;
  virtual folly::SemiFuture<int64_t> semifuture_i64Return() = 0;
  virtual void async_tm_floatReturn(std::unique_ptr<apache::thrift::HandlerCallback<float>> callback) = 0;
  virtual folly::Future<float> future_floatReturn() = 0;
  virtual folly::SemiFuture<float> semifuture_floatReturn() = 0;
  virtual void async_tm_doubleReturn(std::unique_ptr<apache::thrift::HandlerCallback<double>> callback) = 0;
  virtual folly::Future<double> future_doubleReturn() = 0;
  virtual folly::SemiFuture<double> semifuture_doubleReturn() = 0;
  virtual void async_eb_stringReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::string>> future_stringReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_stringReturn() = 0;
  virtual void async_tm_binaryReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::string>> future_binaryReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_binaryReturn() = 0;
  virtual void async_tm_mapReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::std::string, int64_t>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::map<::std::string, int64_t>>> future_mapReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::map<::std::string, int64_t>>> semifuture_mapReturn() = 0;
  virtual void async_tm_simpleTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::simpleTypeDef>> callback) = 0;
  virtual folly::Future< ::some::valid::ns::simpleTypeDef> future_simpleTypedefReturn() = 0;
  virtual folly::SemiFuture< ::some::valid::ns::simpleTypeDef> semifuture_simpleTypedefReturn() = 0;
  virtual void async_tm_complexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> future_complexTypedefReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> semifuture_complexTypedefReturn() = 0;
  virtual void async_tm_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> future_list_mostComplexTypedefReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> semifuture_list_mostComplexTypedefReturn() = 0;
  virtual void async_eb_enumReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::MyEnumA>> callback) = 0;
  virtual folly::Future< ::some::valid::ns::MyEnumA> future_enumReturn() = 0;
  virtual folly::SemiFuture< ::some::valid::ns::MyEnumA> semifuture_enumReturn() = 0;
  virtual void async_eb_list_EnumReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>> future_list_EnumReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>> semifuture_list_EnumReturn() = 0;
  virtual void async_tm_structReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::MyStruct>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::MyStruct>> future_structReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::MyStruct>> semifuture_structReturn() = 0;
  virtual void async_tm_set_StructReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> future_set_StructReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> semifuture_set_StructReturn() = 0;
  virtual void async_eb_unionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::ComplexUnion>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::ComplexUnion>> future_unionReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::ComplexUnion>> semifuture_unionReturn() = 0;
  virtual void async_tm_list_UnionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> future_list_UnionReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> semifuture_list_UnionReturn() = 0;
  virtual void async_eb_readDataEb(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBuf>>> callback, int64_t size) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::IOBuf>> future_readDataEb(int64_t size) = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBuf>> semifuture_readDataEb(int64_t size) = 0;
  virtual void async_tm_readData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBufPtr>>> callback, int64_t size) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::IOBufPtr>> future_readData(int64_t size) = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBufPtr>> semifuture_readData(int64_t size) = 0;
};

class ReturnServiceAsyncProcessor;

class ReturnServiceSvIf : public ReturnServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef ReturnServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void noReturn();
  folly::Future<folly::Unit> future_noReturn() override;
  folly::SemiFuture<folly::Unit> semifuture_noReturn() override;
  void async_eb_noReturn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual bool boolReturn();
  folly::Future<bool> future_boolReturn() override;
  folly::SemiFuture<bool> semifuture_boolReturn() override;
  void async_tm_boolReturn(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) override;
  virtual int16_t i16Return();
  folly::Future<int16_t> future_i16Return() override;
  folly::SemiFuture<int16_t> semifuture_i16Return() override;
  void async_tm_i16Return(std::unique_ptr<apache::thrift::HandlerCallback<int16_t>> callback) override;
  virtual int32_t i32Return();
  folly::Future<int32_t> future_i32Return() override;
  folly::SemiFuture<int32_t> semifuture_i32Return() override;
  void async_tm_i32Return(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) override;
  virtual int64_t i64Return();
  folly::Future<int64_t> future_i64Return() override;
  folly::SemiFuture<int64_t> semifuture_i64Return() override;
  void async_tm_i64Return(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback) override;
  virtual float floatReturn();
  folly::Future<float> future_floatReturn() override;
  folly::SemiFuture<float> semifuture_floatReturn() override;
  void async_tm_floatReturn(std::unique_ptr<apache::thrift::HandlerCallback<float>> callback) override;
  virtual double doubleReturn();
  folly::Future<double> future_doubleReturn() override;
  folly::SemiFuture<double> semifuture_doubleReturn() override;
  void async_tm_doubleReturn(std::unique_ptr<apache::thrift::HandlerCallback<double>> callback) override;
  virtual void stringReturn(::std::string& /*_return*/);
  folly::Future<std::unique_ptr<::std::string>> future_stringReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_stringReturn() override;
  void async_eb_stringReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) override;
  virtual void binaryReturn(::std::string& /*_return*/);
  folly::Future<std::unique_ptr<::std::string>> future_binaryReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_binaryReturn() override;
  void async_tm_binaryReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) override;
  virtual void mapReturn(::std::map<::std::string, int64_t>& /*_return*/);
  folly::Future<std::unique_ptr<::std::map<::std::string, int64_t>>> future_mapReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::map<::std::string, int64_t>>> semifuture_mapReturn() override;
  void async_tm_mapReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::std::string, int64_t>>>> callback) override;
  virtual  ::some::valid::ns::simpleTypeDef simpleTypedefReturn();
  folly::Future< ::some::valid::ns::simpleTypeDef> future_simpleTypedefReturn() override;
  folly::SemiFuture< ::some::valid::ns::simpleTypeDef> semifuture_simpleTypedefReturn() override;
  void async_tm_simpleTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::simpleTypeDef>> callback) override;
  virtual void complexTypedefReturn( ::some::valid::ns::complexStructTypeDef& /*_return*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> future_complexTypedefReturn() override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> semifuture_complexTypedefReturn() override;
  void async_tm_complexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>>> callback) override;
  virtual void list_mostComplexTypedefReturn(::std::vector< ::some::valid::ns::mostComplexTypeDef>& /*_return*/);
  folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> future_list_mostComplexTypedefReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> semifuture_list_mostComplexTypedefReturn() override;
  void async_tm_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>>> callback) override;
  virtual  ::some::valid::ns::MyEnumA enumReturn();
  folly::Future< ::some::valid::ns::MyEnumA> future_enumReturn() override;
  folly::SemiFuture< ::some::valid::ns::MyEnumA> semifuture_enumReturn() override;
  void async_eb_enumReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::MyEnumA>> callback) override;
  virtual void list_EnumReturn(::std::vector< ::some::valid::ns::MyEnumA>& /*_return*/);
  folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>> future_list_EnumReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>> semifuture_list_EnumReturn() override;
  void async_eb_list_EnumReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>>> callback) override;
  virtual void structReturn( ::some::valid::ns::MyStruct& /*_return*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::MyStruct>> future_structReturn() override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::MyStruct>> semifuture_structReturn() override;
  void async_tm_structReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::MyStruct>>> callback) override;
  virtual void set_StructReturn(::std::set< ::some::valid::ns::MyStruct>& /*_return*/);
  folly::Future<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> future_set_StructReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> semifuture_set_StructReturn() override;
  void async_tm_set_StructReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>>> callback) override;
  virtual void unionReturn( ::some::valid::ns::ComplexUnion& /*_return*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::ComplexUnion>> future_unionReturn() override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::ComplexUnion>> semifuture_unionReturn() override;
  void async_eb_unionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::ComplexUnion>>> callback) override;
  virtual void list_UnionReturn(::std::vector< ::some::valid::ns::ComplexUnion>& /*_return*/);
  folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> future_list_UnionReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> semifuture_list_UnionReturn() override;
  void async_tm_list_UnionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>>> callback) override;
  virtual void readDataEb( ::some::valid::ns::IOBuf& /*_return*/, int64_t /*size*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::IOBuf>> future_readDataEb(int64_t size) override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBuf>> semifuture_readDataEb(int64_t size) override;
  void async_eb_readDataEb(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBuf>>> callback, int64_t size) override;
  virtual void readData( ::some::valid::ns::IOBufPtr& /*_return*/, int64_t /*size*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::IOBufPtr>> future_readData(int64_t size) override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBufPtr>> semifuture_readData(int64_t size) override;
  void async_tm_readData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBufPtr>>> callback, int64_t size) override;
};

class ReturnServiceSvNull : public ReturnServiceSvIf {
 public:
  bool boolReturn() override;
  int16_t i16Return() override;
  int32_t i32Return() override;
  int64_t i64Return() override;
  float floatReturn() override;
  double doubleReturn() override;
  void binaryReturn(::std::string& /*_return*/) override;
  void mapReturn(::std::map<::std::string, int64_t>& /*_return*/) override;
   ::some::valid::ns::simpleTypeDef simpleTypedefReturn() override;
  void complexTypedefReturn( ::some::valid::ns::complexStructTypeDef& /*_return*/) override;
  void list_mostComplexTypedefReturn(::std::vector< ::some::valid::ns::mostComplexTypeDef>& /*_return*/) override;
  void structReturn( ::some::valid::ns::MyStruct& /*_return*/) override;
  void set_StructReturn(::std::set< ::some::valid::ns::MyStruct>& /*_return*/) override;
  void list_UnionReturn(::std::vector< ::some::valid::ns::ComplexUnion>& /*_return*/) override;
  void readData( ::some::valid::ns::IOBufPtr& /*_return*/, int64_t /*size*/) override;
};

class ReturnServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  ReturnServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<ReturnServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const ReturnServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const ReturnServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const ReturnServiceAsyncProcessor::ProcessMap binaryProcessMap_;
   static const ReturnServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_noReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_noReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_noReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_boolReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_boolReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_boolReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_boolReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_i16Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_i16Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_i16Return(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int16_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i16Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_i32Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_i32Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_i32Return(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i32Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_i64Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_i64Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_i64Return(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int64_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i64Return(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_floatReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_floatReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_floatReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, float const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_floatReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_doubleReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_doubleReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_doubleReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, double const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doubleReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_stringReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_stringReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_stringReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_binaryReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_binaryReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_binaryReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_binaryReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_mapReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_mapReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_mapReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::map<::std::string, int64_t> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_simpleTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_simpleTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_simpleTypedefReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::simpleTypeDef const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simpleTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_complexTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_complexTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_complexTypedefReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::complexStructTypeDef const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_complexTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_list_mostComplexTypedefReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::vector< ::some::valid::ns::mostComplexTypeDef> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_enumReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_enumReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::MyEnumA const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_enumReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_list_EnumReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_list_EnumReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::vector< ::some::valid::ns::MyEnumA> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_EnumReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_structReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_structReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_structReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::MyStruct const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_structReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_set_StructReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_set_StructReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_set_StructReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::set< ::some::valid::ns::MyStruct> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_set_StructReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_unionReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_unionReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::ComplexUnion const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_unionReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_list_UnionReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_list_UnionReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_list_UnionReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::vector< ::some::valid::ns::ComplexUnion> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_UnionReturn(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_readDataEb(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_readDataEb(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::IOBuf const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_readDataEb(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_readData(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_readData(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_readData(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::IOBufPtr const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_readData(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  ReturnServiceAsyncProcessor(ReturnServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~ReturnServiceAsyncProcessor() {}
};

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
