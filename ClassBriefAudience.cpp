#include "ClassBriefAudience.h"
#include <iostream>
//allows objects that are created from class to do these things.
void ClassBriefAudience::Talk(std::string audtalk)
{
	std::cout << "\n" << Name << " says: " << audtalk << std::endl;
}

void ClassBriefAudience::Move(std::string location)
{
	std::cout << "\n" << Name << " moves to: " << location << std::endl;
}
