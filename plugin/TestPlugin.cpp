#include "TestPlugin.h"
using namespace lhz::engine;
using namespace lhz::plugin;


TestPlugin::TestPlugin() : Plugin()
{

}

TestPlugin::~TestPlugin()
{

}

bool TestPlugin::run(Context & ctx)
{
    string & input = ctx.ref<string>("input");
    ctx.ref<string>("output") = input + " test plugin run!\n";
    return false;
}

