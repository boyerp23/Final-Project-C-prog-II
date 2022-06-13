//Allows me to input and output
#include <iostream>
//allows me to string variables
#include <string>
//allows me to use header files that I created
#include "CAPCOMIntro.h"
#include "ClassFlightCrew.h"
//so that I dont have to type std:: in front of every line
using namespace std;
//function that I will use 
void capcomIntro()
{
	//creates object from classes
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;
	//sets objects names
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "Commander";

	//get player name
	string playerName;
	objectCAPCOM.Talk("I am your CAPCOM...What is your name: ");
	getline(cin, playerName);
	objectCAPCOM.Talk("Welcome Commander " + playerName + " glad you could make it on board.");
	objectCommander.Talk("Where is the rest of the crew?");
	objectCAPCOM.Talk("The rest of the crew is inside the launch bay. Lets go there now.");
	objectCAPCOM.Move("inside to the launch bay");
	objectCommander.Move("inside to the launch bay");
	system("pause");
}