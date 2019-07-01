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
#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainersAsyncClient.h"
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_types.h"

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

namespace cpp2 {

class NestedContainersSvAsyncIf {
 public:
  virtual ~NestedContainersSvAsyncIf() {}
  virtual void async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) = 0;
  virtual folly::Future<folly::Unit> future_mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) = 0;
  virtual void async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) = 0;
  virtual folly::Future<folly::Unit> future_mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) = 0;
  virtual void async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) = 0;
  virtual folly::Future<folly::Unit> future_listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) = 0;
  virtual void async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) = 0;
  virtual folly::Future<folly::Unit> future_listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) = 0;
  virtual void async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) = 0;
  virtual folly::Future<folly::Unit> future_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) = 0;
};

class NestedContainersAsyncProcessor;

class NestedContainersSvIf : public NestedContainersSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef NestedContainersAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) override;
  folly::SemiFuture<folly::Unit> semifuture_mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) override;
  void async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) override;
  virtual void mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) override;
  folly::SemiFuture<folly::Unit> semifuture_mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) override;
  void async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) override;
  virtual void listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) override;
  folly::SemiFuture<folly::Unit> semifuture_listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) override;
  void async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) override;
  virtual void listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) override;
  folly::SemiFuture<folly::Unit> semifuture_listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) override;
  void async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) override;
  virtual void turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> /*foo*/);
  folly::Future<folly::Unit> future_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) override;
  folly::SemiFuture<folly::Unit> semifuture_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) override;
  void async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) override;
};

class NestedContainersSvNull : public NestedContainersSvIf {
 public:
  void mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> /*foo*/) override;
  void mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> /*foo*/) override;
  void listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> /*foo*/) override;
  void listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> /*foo*/) override;
  void turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> /*foo*/) override;
};

class NestedContainersAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  NestedContainersSvIf* iface_;
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
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<NestedContainersAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const NestedContainersAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const NestedContainersAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const NestedContainersAsyncProcessor::ProcessMap binaryProcessMap_;
   static const NestedContainersAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_mapList(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_mapList(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_mapList(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapList(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_mapSet(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_mapSet(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_mapSet(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapSet(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_listMap(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_listMap(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_listMap(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_listMap(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_listSet(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_listSet(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_listSet(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_listSet(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_turtles(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_turtles(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_turtles(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_turtles(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  NestedContainersAsyncProcessor(NestedContainersSvIf* iface) :
      iface_(iface) {}

  virtual ~NestedContainersAsyncProcessor() {}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
