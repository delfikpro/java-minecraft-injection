#pragma once

#include "mapping/AbstractClass.h"
#include "PrintStream.h"

class UDP;
class PrintStream : public AbstractClass
{
public:
	PrintStream(UDP* udp, jobject obj);

	void println(const char* text);

private:

	jobject jobj;

	jmethodID printMethod;

};



