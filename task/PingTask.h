#pragma once

#include "Task.h"
using namespace lhz::thread;

#include "Socket.h"
using namespace lhz::socket;

namespace lhz {
namespace task {

class PingTask : public Task
{
public:
    PingTask(Socket * socket);
    virtual ~PingTask();

    virtual void run();

    virtual void destroy();
};

}}
