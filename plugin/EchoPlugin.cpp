#include "EchoPlugin.h"
using namespace lhz::engine;
using namespace lhz::plugin;

#include "Logger.h"
#include "Singleton.h"
#include "System.h"
using namespace lhz::utility;



EchoPlugin::EchoPlugin() : Plugin()
{
    System * sys = Singleton<System>::instance();
    const string & root_path = sys->get_root_path();
    
    // init logger
    Logger::instance()->open(root_path + "/log/echo.log");
}

EchoPlugin::~EchoPlugin()
{

}

bool EchoPlugin::run(Context & ctx)
{
    string & input = ctx.ref<string>("input");
    info(input.c_str());
    ctx.ref<string>("output") = input + " echo plugin run!";
    return true;
}