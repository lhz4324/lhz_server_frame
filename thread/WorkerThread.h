#pragma once

#include <pthread.h>
#include <signal.h>

#include "Thread.h"

namespace lhz{
namespace thread {

class WorkerThread : public Thread
{
public:
    WorkerThread();
    virtual ~WorkerThread();

    virtual void run();

    static void cleanup(void* ptr);
};

}}
