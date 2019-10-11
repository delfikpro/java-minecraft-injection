#pragma once
#include <map>
#include <string>
#include "Mem.h"

struct CM {
	const char* name;
	std::map<std::string, Mem> fields;
	std::map<std::string, Mem> methods;
	CM(const char* clsName) : name(clsName) {}
};