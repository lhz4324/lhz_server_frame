#pragma once
#include <map>
#include <string>
using std::string;

#include "Document.h"
#include "Element.h"
using namespace lhz::xml;

#include "Work.h"

namespace lhz {
namespace engine {

class Workflow
{
public:
    Workflow();
    ~Workflow();

    bool load(const string &workinfo);
    bool run(const string &work, const string &input, string &output);

private:
    bool load_plugin(Work* work, Element & elem);

private:
    std::map<string, Work *> m_works;
};

}}
