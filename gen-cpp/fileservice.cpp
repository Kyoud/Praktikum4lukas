/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "fileservice.h"



uint32_t fileservice_download_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fileName);
          this->__isset.fileName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->offset);
          this->__isset.offset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t fileservice_download_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("fileservice_download_args");

  xfer += oprot->writeFieldBegin("fileName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->fileName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("offset", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->offset);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t fileservice_download_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("fileservice_download_pargs");

  xfer += oprot->writeFieldBegin("fileName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->fileName)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("offset", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64((*(this->offset)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t fileservice_download_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t fileservice_download_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("fileservice_download_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t fileservice_download_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t fileservice_upload_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fileName);
          this->__isset.fileName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->currentOffset);
          this->__isset.currentOffset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->totalFilesize);
          this->__isset.totalFilesize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->chunk.read(iprot);
          this->__isset.chunk = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t fileservice_upload_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("fileservice_upload_args");

  xfer += oprot->writeFieldBegin("fileName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->fileName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("currentOffset", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->currentOffset);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("totalFilesize", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->totalFilesize);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("chunk", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->chunk.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t fileservice_upload_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("fileservice_upload_pargs");

  xfer += oprot->writeFieldBegin("fileName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->fileName)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("currentOffset", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64((*(this->currentOffset)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("totalFilesize", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64((*(this->totalFilesize)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("chunk", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += (*(this->chunk)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t fileservice_upload_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->success);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t fileservice_upload_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("fileservice_upload_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_BOOL, 0);
    xfer += oprot->writeBool(this->success);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t fileservice_upload_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool((*(this->success)));
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void fileserviceClient::download(FileChunk& _return, const std::string& fileName, const int64_t offset)
{
  send_download(fileName, offset);
  recv_download(_return);
}

void fileserviceClient::send_download(const std::string& fileName, const int64_t offset)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("download", ::apache::thrift::protocol::T_CALL, cseqid);

  fileservice_download_pargs args;
  args.fileName = &fileName;
  args.offset = &offset;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void fileserviceClient::recv_download(FileChunk& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("download") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  fileservice_download_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "download failed: unknown result");
}

bool fileserviceClient::upload(const std::string& fileName, const int64_t currentOffset, const int64_t totalFilesize, const FileChunk& chunk)
{
  send_upload(fileName, currentOffset, totalFilesize, chunk);
  return recv_upload();
}

void fileserviceClient::send_upload(const std::string& fileName, const int64_t currentOffset, const int64_t totalFilesize, const FileChunk& chunk)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("upload", ::apache::thrift::protocol::T_CALL, cseqid);

  fileservice_upload_pargs args;
  args.fileName = &fileName;
  args.currentOffset = &currentOffset;
  args.totalFilesize = &totalFilesize;
  args.chunk = &chunk;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

bool fileserviceClient::recv_upload()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("upload") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  bool _return;
  fileservice_upload_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    return _return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "upload failed: unknown result");
}

bool fileserviceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void fileserviceProcessor::process_download(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("fileservice.download", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "fileservice.download");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "fileservice.download");
  }

  fileservice_download_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "fileservice.download", bytes);
  }

  fileservice_download_result result;
  try {
    iface_->download(result.success, args.fileName, args.offset);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "fileservice.download");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("download", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "fileservice.download");
  }

  oprot->writeMessageBegin("download", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "fileservice.download", bytes);
  }
}

void fileserviceProcessor::process_upload(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("fileservice.upload", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "fileservice.upload");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "fileservice.upload");
  }

  fileservice_upload_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "fileservice.upload", bytes);
  }

  fileservice_upload_result result;
  try {
    result.success = iface_->upload(args.fileName, args.currentOffset, args.totalFilesize, args.chunk);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "fileservice.upload");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("upload", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "fileservice.upload");
  }

  oprot->writeMessageBegin("upload", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "fileservice.upload", bytes);
  }
}

::boost::shared_ptr< ::apache::thrift::TProcessor > fileserviceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< fileserviceIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< fileserviceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new fileserviceProcessor(handler));
  return processor;
}


