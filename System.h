#pragma once

#include "mapping/AbstractClass.h"
#include "PrintStream.h"

class UDP;
class System : public AbstractClass
{
public:
	System(UDP* udp);

	PrintStream* getOut();

	void exit(int code);

private:

	jfieldID field;
	jmethodID method;

};


