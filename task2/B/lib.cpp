#include "lib.h"

void PrintString(const std::string& current) {
	std::cout << current << std::endl;
}


void CowSay(const std::string& current) {
	PrintString(current);
	PrintString(cow);
}