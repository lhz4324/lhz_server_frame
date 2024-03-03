#pragma once

#include "Plugin.h"
using namespace lhz::engine;

namespace lhz {
namespace plugin {

class UserPlugin : public Plugin
{
public:
    UserPlugin();
    virtual ~UserPlugin();

    virtual bool run(Context & ctx);

};

DEFINE_PLUGIN(UserPlugin)

}}
