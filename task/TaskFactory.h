#pragma once

#include "Socket.h"
using namespace lhz::socket;

#include "Task.h"
using namespace lhz::thread;

#include "EchoTask.h"
#include "WorkTask.h"
#include "PingTask.h"
using namespace lhz::task;

namespace lhz {
namespace task {

class TaskFactory
{
public:
    static Task * create(Socket * socket)
    {
        return new WorkTask(socket);
        // return new EchoTask(socket);
        // return new PingTask(socket);
    }
};

}}