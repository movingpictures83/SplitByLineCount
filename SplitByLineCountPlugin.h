#ifndef SPLITBYLINECOUNTPLUGIN_H
#define SPLITBYLINECOUNTPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SplitByLineCountPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SplitByLineCount";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
