#include "dll.h"
#include "mapping/AbstractClass.h"

dll::dll(UDP* udp) : AbstractClass::AbstractClass(udp, "dll")
{
	this->udp = udp;
	mdA = getMethodID("a");
	mdB = getMethodID("b");
	std::cout << "mdInfo is " << mdA << " | " << mdB << std::endl;

}

void dll::a(const char* text) {
	callMethod(mdA, udp->getEnv()->NewStringUTF(text));
}

void dll::b() {
	callMethod(mdB);
}
