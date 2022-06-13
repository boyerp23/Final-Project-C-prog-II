#include <iostream>
#include <string>
#include "ClassFlightCrew.h"
#include "EnterBrief.h"
#include "PlayerChoice.h"
#include "ClassBriefAudience.h"
//function that I will use
void enterBrief()
{
	//objects that were created from a class
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;
	ClassFlightCrew objectFlightCrew;
	ClassBriefAudience objectAudience;
	//set object names
	objectEngineer.Name = "Engineer";
	objectMedic.Name = "Medic";
	objectNavigator.Name = "Navigator";
	objectPilot.Name = "Pilot";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "Commander";
	objectFlightCrew.Name = "Venus Flight Crew";
	objectAudience.Name = "Briefing Audience";
	//Enter the briefing room
	objectCAPCOM.Talk("Eh em. Gentelmen, if we could gather in Briefing Room 1, our brief will begin shortly");
	objectFlightCrew.Move("Briefing Room 1");
	objectAudience.Move("Briefing Room 1");
	objectCAPCOM.Talk("Thank you gentlemen, if you're ready commander we can begin.");
	//ask player if they want to continue
	playerChoice();
}