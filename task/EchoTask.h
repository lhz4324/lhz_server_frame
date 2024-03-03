#pragma once

#include "Task.h"
using namespace lhz::thread;

#include "Socket.h"
using namespace lhz::socket;

namespace lhz {
namespace task {

class EchoTask : public Task
{
public:
    EchoTask(Socket * socket);
    virtual ~EchoTask();

    virtual void run();

    virtual void destroy();
};

}}
