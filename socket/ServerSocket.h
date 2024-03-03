#pragma once

#include <string>
using namespace std;

#include "Socket.h"

namespace lhz{
namespace socket {

class ServerSocket : public Socket
{
public:
    ServerSocket();
    ServerSocket(const string &ip, int port);
    virtual ~ServerSocket();
};

}}
