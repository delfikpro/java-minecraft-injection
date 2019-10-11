#pragma once
struct Mem {
	const char* name;
	const char* desc;
	bool isStatic;
	Mem(const char* memName, const char* memDesc, bool stat) : name(memName), desc(memDesc), isStatic(stat) {}
};