#include <iostream>
#include <string>
#include "finalLaunchSequence.h"
#include "ClassFlightCrew.h"
#include "playerChoice3.h"

using namespace std;

void finalLaunchSequence()
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
	//conduct final preop before takeoff
	objectPilot.Talk("CAPCOM Launch code accepted. inititating final thrusters preop check.");
	objectCAPCOM.Talk("Roger, we are t-1 hr from takeoff, time to suit up ladies and gets");
	objectCommander.Talk("Roger CAPCOM, Herm see you back here shortly yeah?");
	objectPilot.Talk("Yes sir, after this check is complete I'll suit up.");
	//pause for user
	system("pause");
	//finalize final preop checks and get ready for takeoff
	objectCommander.Move(" to suit up");
	cout << "CAPCOM thrusters are looking good preop check complete\n";
	objectCAPCOM.Talk("Roger that");
	objectPilot.Move("to suit up");
	//pause for user
	system("pause");
	//take final seating positions and prepare for launch
	objectFlightCrew.Move("into seat positions for final takeoff");
	objectCommander.Talk("CAPCOM, flight crew is suited up and ready for takeoff in t-minus 5 minutes");
	objectCAPCOM.Talk("Roger that, we are go for takeoff");
	objectCommander.Talk("Herm, let me know when to punch in the launch code");
	objectPilot.Talk("Will do sir, just another minute or so and the system will prompt you same as before");
	//pause for user
	system("pause");
	//enter launch code
	string enterLaunchCode;
	getline(cin, enterLaunchCode);
}