#pragma once

#include "mapping/AbstractClass.h"

class UDP;
class dll : public AbstractClass
{
public:
	dll(UDP* udp);

	void a(const char* text);
	void b();

private:

	jmethodID mdA;
	jmethodID mdB;
};

