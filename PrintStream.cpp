#include "PrintStream.h"
#include "mapping/AbstractClass.h"

PrintStream::PrintStream(UDP* udp, jobject obj) : AbstractClass::AbstractClass(udp, "PrintStream")
{
	this->udp = udp;
	this->jobj = obj;
	printMethod = getMethodID("println");
	std::cout << "methodID is " << printMethod << std::endl;

}

void PrintStream::println(const char* text) {
	callMethod(jobj, printMethod, udp->getEnv()->NewStringUTF(text));
}
