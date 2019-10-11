#include "Log.h"
#include "mapping/AbstractClass.h"

Log::Log(UDP* udp) : AbstractClass::AbstractClass(udp, "Log")
{ 
	this -> udp = udp;
	mdInfo = getMethodID("info");
	std::cout << "mdInfo is " << mdInfo << std::endl;
	sfdCHAT = getFieldID("CHAT");

}

jobject Log::getChat() {
	std::cout << "Getting the chat..." << std::endl;
	return getObject(sfdCHAT);
}

void Log::info(const char* text) {
	jobject o = getChat();
	std::cout << "Chat got successfully! " << o << std::endl;
	std::cout << "Calling log.info()..." << std::endl;
	callMethod(o, mdInfo, udp->getEnv()->NewStringUTF(text));
	std::cout << "All clear!" << std::endl;
}
