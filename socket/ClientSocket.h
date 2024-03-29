#pragma once

#include <string>
using namespace std;

#include "Socket.h"

namespace lhz{
namespace socket {

class ClientSocket : public Socket
{
public:
    ClientSocket();
    ClientSocket(const string &ip, int port);
    virtual ~ClientSocket();
};

}}
