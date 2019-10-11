#include "System.h"
#include "mapping/AbstractClass.h"

System::System(UDP* udp) : AbstractClass::AbstractClass(udp, "System")
{
	this->udp = udp;
	field = getFieldID("out");
	std::cout << "fieldID is " << field << std::endl;
	method = getMethodID("exit");
	std::cout << "methodID is " << method << std::endl;

}

PrintStream* System::getOut() {
	return new PrintStream(udp, getObject(field));
}

void System::exit(int code) {
	callMethod(method, code);
}