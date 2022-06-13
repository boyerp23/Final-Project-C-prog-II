#include <iostream>
#include <string>
#include "ClassFlightCrew.h"

void meetCrew()
{
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;

	objectEngineer.Name = "Engineer";
	objectMedic.Name = "Medic";
	objectNavigator.Name = "Navigator";
	objectPilot.Name = "Pilot";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "Commander";
	//Meet the crew for the first time
	objectPilot.Move("position of attention");
	objectPilot.Talk("Crew! Attention!");
	objectEngineer.Move("position of attention");
	objectNavigator.Move("position of attention");
	objectMedic.Move("position of attention");
	//pause for user
	system("pause");
	//Greet the crew
	objectCommander.Talk("Carry on!");
	objectPilot.Talk("Great to finally meet you Commander!");
	objectCommander.Talk("Likewise. What is your position on the crew?");
	objectPilot.Talk("I'm your pilot. ");
	objectEngineer.Talk("I'm your..");
	objectNavigator.Talk("I'm your navigator sir! I'm here to make sure your pilot don't get us lost haha!");
	objectEngineer.Talk("Grr.. thanks for interuppting me.. Sir, I'm your Flight Engineer. I can fix anything on the ship!");
	objectMedic.Talk("Flight Medic thats me.");
	//pause for user
	system("pause");
}