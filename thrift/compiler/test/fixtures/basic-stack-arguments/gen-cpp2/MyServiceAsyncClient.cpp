/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceAsyncClient.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/gen/client_cpp.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>> MyService_hasDataById_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_BOOL, bool*>> MyService_hasDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>> MyService_getDataById_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRING, ::std::string*>> MyService_getDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRING, ::std::string*>> MyService_putDataById_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_putDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRING, ::std::string*>> MyService_lobDataById_pargs;

template <typename Protocol_>
void MyServiceAsyncClient::hasDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyService_hasDataById_pargs args;
  args.get<0>().value = &id;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "hasDataById", writer, sizer, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void MyServiceAsyncClient::getDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyService_getDataById_pargs args;
  args.get<0>().value = &id;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "getDataById", writer, sizer, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void MyServiceAsyncClient::putDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyService_putDataById_pargs args;
  args.get<0>().value = &id;
  args.get<1>().value = const_cast<::std::string*>(&data);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "putDataById", writer, sizer, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void MyServiceAsyncClient::lobDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyService_lobDataById_pargs args;
  args.get<0>().value = &id;
  args.get<1>().value = const_cast<::std::string*>(&data);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "lobDataById", writer, sizer, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE);
  ctx->reqContext.setRequestHeader(nullptr);
}



void MyServiceAsyncClient::hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  hasDataById(rpcOptions, std::move(callback), id);
}

void MyServiceAsyncClient::hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(getChannel()->getProtocolId(), rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.hasDataById");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId = getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  hasDataByIdImpl(rpcOptions, std::move(ctx), apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)), id);
}

void MyServiceAsyncClient::hasDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      hasDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      hasDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

bool MyServiceAsyncClient::sync_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_hasDataById(rpcOptions, id);
}

bool MyServiceAsyncClient::sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = getChannel()->getProtocolId();
  auto evb = getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(protocolId, rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.hasDataById");
  hasDataByIdImpl(rpcOptions, ctx, apache::thrift::RequestClientCallback::Ptr(&callback), id);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return recv_hasDataById(_returnState);
}

folly::Future<bool> MyServiceAsyncClient::future_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_hasDataById(rpcOptions, id);
}

folly::SemiFuture<bool> MyServiceAsyncClient::semifuture_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_hasDataById(rpcOptions, id);
}

folly::Future<bool> MyServiceAsyncClient::future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<bool> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<bool>>(std::move(_promise), recv_wrapped_hasDataById, channel_);
  hasDataById(rpcOptions, std::move(callback), id);
  return _future;
}

folly::SemiFuture<bool> MyServiceAsyncClient::semifuture_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_hasDataById, channel_);
  auto callback = std::move(callbackAndFuture.first);
  hasDataById(rpcOptions, std::move(callback), id);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<bool>>(std::move(_promise), recv_wrapped_hasDataById, channel_);
  hasDataById(rpcOptions, std::move(callback), id);
  return _future;
}

folly::SemiFuture<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_hasDataById, channel_);
  auto callback = std::move(callbackAndFuture.first);
  hasDataById(rpcOptions, std::move(callback), id);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::hasDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id) {
  hasDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_hasDataById_presult;
  constexpr auto const fname = "hasDataById";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

bool MyServiceAsyncClient::recv_hasDataById(::apache::thrift::ClientReceiveState& state) {
  bool _return;
  auto ew = recv_wrapped_hasDataById(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

bool MyServiceAsyncClient::recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state) {
  return recv_hasDataById(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_hasDataById(_return, state);
}

void MyServiceAsyncClient::getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataById(rpcOptions, std::move(callback), id);
}

void MyServiceAsyncClient::getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(getChannel()->getProtocolId(), rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.getDataById");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId = getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  getDataByIdImpl(rpcOptions, std::move(ctx), apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)), id);
}

void MyServiceAsyncClient::getDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      getDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      getDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_getDataById(::std::string& _return, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataById(rpcOptions, _return, id);
}

void MyServiceAsyncClient::sync_getDataById(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, int64_t id) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = getChannel()->getProtocolId();
  auto evb = getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(protocolId, rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.getDataById");
  getDataByIdImpl(rpcOptions, ctx, apache::thrift::RequestClientCallback::Ptr(&callback), id);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_getDataById(_return, _returnState);
}

folly::Future<::std::string> MyServiceAsyncClient::future_getDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataById(rpcOptions, id);
}

folly::SemiFuture<::std::string> MyServiceAsyncClient::semifuture_getDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_getDataById(rpcOptions, id);
}

folly::Future<::std::string> MyServiceAsyncClient::future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<::std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::string>>(std::move(_promise), recv_wrapped_getDataById, channel_);
  getDataById(rpcOptions, std::move(callback), id);
  return _future;
}

folly::SemiFuture<::std::string> MyServiceAsyncClient::semifuture_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_getDataById, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataById(rpcOptions, std::move(callback), id);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::string>>(std::move(_promise), recv_wrapped_getDataById, channel_);
  getDataById(rpcOptions, std::move(callback), id);
  return _future;
}

folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_getDataById, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataById(rpcOptions, std::move(callback), id);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::getDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id) {
  getDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_getDataById_presult;
  constexpr auto const fname = "getDataById";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataById(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceAsyncClient::recv_instance_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataById(_return, state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataById(_return, state);
}

void MyServiceAsyncClient::putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  putDataById(rpcOptions, std::move(callback), id, data);
}

void MyServiceAsyncClient::putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(getChannel()->getProtocolId(), rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.putDataById");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId = getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  putDataByIdImpl(rpcOptions, std::move(ctx), apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)), id, data);
}

void MyServiceAsyncClient::putDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      putDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id, data);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      putDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id, data);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_putDataById(int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_putDataById(rpcOptions, id, data);
}

void MyServiceAsyncClient::sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = getChannel()->getProtocolId();
  auto evb = getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(protocolId, rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.putDataById");
  putDataByIdImpl(rpcOptions, ctx, apache::thrift::RequestClientCallback::Ptr(&callback), id, data);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_putDataById(_returnState);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_putDataById(int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_putDataById(rpcOptions, id, data);
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_putDataById(int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_putDataById(rpcOptions, id, data);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_putDataById, channel_);
  putDataById(rpcOptions, std::move(callback), id, data);
  return _future;
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_putDataById, channel_);
  auto callback = std::move(callbackAndFuture.first);
  putDataById(rpcOptions, std::move(callback), id, data);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_putDataById, channel_);
  putDataById(rpcOptions, std::move(callback), id, data);
  return _future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_putDataById, channel_);
  auto callback = std::move(callbackAndFuture.first);
  putDataById(rpcOptions, std::move(callback), id, data);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::putDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const ::std::string& data) {
  putDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id, data);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_putDataById_presult;
  constexpr auto const fname = "putDataById";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_putDataById(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_putDataById(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceAsyncClient::recv_instance_putDataById(::apache::thrift::ClientReceiveState& state) {
  recv_putDataById(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_putDataById(state);
}

void MyServiceAsyncClient::lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  lobDataById(rpcOptions, std::move(callback), id, data);
}

void MyServiceAsyncClient::lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(getChannel()->getProtocolId(), rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.lobDataById");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.oneWay = true;
  callbackContext.protocolId = getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  lobDataByIdImpl(rpcOptions, std::move(ctx), apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)), id, data);
}

void MyServiceAsyncClient::lobDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      lobDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id, data);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      lobDataByIdT(&writer, rpcOptions, std::move(ctx), std::move(callback), id, data);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_lobDataById(int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_lobDataById(rpcOptions, id, data);
}

void MyServiceAsyncClient::sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<true> callback(&_returnState);
  auto evb = getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(getChannel()->getProtocolId(), rpcOptions.releaseWriteHeaders(), this->handlers_, this->getServiceName(), "MyService.lobDataById");
  lobDataByIdImpl(rpcOptions, std::move(ctx), apache::thrift::RequestClientCallback::Ptr(&callback), id, data);
  callback.waitUntilDone(evb);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_lobDataById(int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_lobDataById(rpcOptions, id, data);
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_lobDataById(int64_t id, const ::std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_lobDataById(rpcOptions, id, data);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::OneWayFutureCallback>(std::move(_promise), channel_);
  lobDataById(rpcOptions, std::move(callback), id, data);
  return _future;
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data) {
  auto callbackAndFuture = makeOneWaySemiFutureCallback(channel_);
  auto callback = std::move(callbackAndFuture.first);
  lobDataById(rpcOptions, std::move(callback), id, data);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::lobDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const ::std::string& data) {
  lobDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id, data);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
