#include "ClassgoForLaunch.h"
#include <iostream>

using namespace std;
void goForLaunch()
{
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;
	ClassFlightCrew objectFlightCrew;

	objectEngineer.Name = "Potter";
	objectMedic.Name = "Hook";
	objectNavigator.Name = "Charles";
	objectPilot.Name = "Herman";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "You";
	cout << "\t\t\t **** FINAL LAUNCH SEQUENCE COMPLETE LAUNCH CODE INPUT ACCEPTED ****\n";
	cout << "\t\t\t\t\t **** T-10 MINUTES FROM TAKEOFF ****\n\n";
	objectCAPCOM.Talk("\tCAPCOM here with a fianl update prior to launch: Currently weather conditions are fair\n"
		"current temp: 72\nhumidity: 24%\nceilings: skies broken at 180 & 220\nwarnings watches advisories: none\n"
		"Current trajectory and flight plan puts you on course to reach the planet in 2 years 3 months 16 days and 4 hours\n"
		"at least thats according to our experts, I say otherwise, but who am I to know when you'll get there. I digress.\n"
		"You all know your mission, you've rehearsed, briefed, and we'll be with you the whole way\n");
	cout << "\t\t\t\t\t **** T-5 MINUTES FROM TAKEOFF ****\n\n";
	objectCommander.Talk("Thanks CAPCOM, we're buttoned up here and ready to get this rig a rollin'.\n"
		"We're now under 5 minutes from takeoff and will initiate engine start. Herm, she's all yours.");
	objectPilot.Talk("Roger that commander, intitating final engine start\n");
	objectPilot.Move("To initiate final engine start");
	cout << "\t\t\t\t\t **** T-1 MINUTES FROM TAKEOFF ****\n\n";
	objectCAPCOM.Talk("1 minute from takeoff - good luck and god speed");
}