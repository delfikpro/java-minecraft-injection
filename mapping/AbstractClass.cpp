#include "../pch.h"
#include "AbstractClass.h"

AbstractClass::AbstractClass(UDP * udp, const char * clsName)
{
	this->udp = udp;
	this->clsKey = clsName;

	std::cout << "Finding class..." << std::endl;
	//Find each class that inherits AbstractClass by the class name provided
	const char* o = Mapping::getClassName(clsName);

	std::cout << "Mapping is " << o << "." << std::endl;

	cls = udp->getEnv()->FindClass(o);

	std::cout << "Class found!" << std::endl;
	//Check for exceptions. I got lazy, and this is the only time I actually check for errors
	//Basically, checks if there's an error, prints the stack trace to the console, then clears the error
	if (udp->getEnv()->ExceptionCheck()) {
		udp->getEnv()->ExceptionDescribe();
		udp->getEnv()->ExceptionClear();
	}
}