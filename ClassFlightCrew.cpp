#include "ClassFlightCrew.h"
#include <iostream>
//allows objects that are created from class to do these things.
void ClassFlightCrew::Talk(std::string crewtalk)
{
	std::cout << "\n" << Name << " says: " << crewtalk << std::endl;
}

void ClassFlightCrew::Move(std::string location)
{
	std::cout << "\n" << Name << " moves to: " << location << std::endl;
}
