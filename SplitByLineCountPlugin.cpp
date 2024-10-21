#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SplitByLineCountPlugin.h"

void SplitByLineCountPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void SplitByLineCountPlugin::run() {}

void SplitByLineCountPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "split";
myCommand += " ";
addRequiredParameter("-l", "linecount");
myCommand += PluginManager::addPrefix(myParameters["infile"]);
myCommand += " "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<SplitByLineCountPlugin> SplitByLineCountPluginProxy = PluginProxy<SplitByLineCountPlugin>("SplitByLineCount", PluginManager::getInstance());
