#pragma once

#include "mapping/AbstractClass.h"

class UDP;
class Log : public AbstractClass
{
public:
	Log(UDP* udp);

	void info(const char* text);

	jobject getChat();

private:
	jfieldID sfdCHAT;

	jmethodID mdInfo;
};

