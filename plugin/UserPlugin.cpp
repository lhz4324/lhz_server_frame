#include "UserPlugin.h"
using namespace lhz::engine;
using namespace lhz::plugin;

#include "Json.h"
using namespace lhz::json;

UserPlugin::UserPlugin() : Plugin()
{

}

UserPlugin::~UserPlugin()
{

}

bool UserPlugin::run(Context & ctx)
{
    string & input = ctx.ref<string>("input");
    ctx.ref<string>("output") += "user plugin run!";
    return true;
}

