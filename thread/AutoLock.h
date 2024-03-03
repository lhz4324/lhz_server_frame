#pragma once

#include "Mutex.h"

namespace lhz {
namespace thread {

class AutoLock
{
public:
    AutoLock(Mutex* mutex);
    ~AutoLock();

private:
    Mutex* m_mutex;
};

}}
