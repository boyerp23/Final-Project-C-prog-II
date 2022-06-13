#include <iostream>
#include <string>
#include "LaunchSequence.h"
#include "ClassFlightCrew.h"
#include "playerChoice2.h"

using namespace std;

void launchSequence()
{
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;

	objectEngineer.Name = "Potter";
	objectMedic.Name = "Hook";
	objectNavigator.Name = "Charles";
	objectPilot.Name = "Herman";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "You";
	//wake up and talk to the crew on launch day before time runs out
	cout << "After a good night's sleep it launch day. \n";
	objectCAPCOM.Talk("Good morning sir! Today is the day we make intersteller history");
	objectCommander.Talk("Indeed it is CAPCOM. Is the Crew on board?");
	objectCAPCOM.Talk("Yes sir, the Pilot is finishing up preflight checks now" );
	cout << "We're t-4 hours or so from launch. \n";
	objectCommander.Talk("Great thanks I'll make my way onto the ship if you don't mind. I still don't know the crews names..");
	objectCommander.Move("to the ships");
	objectCAPCOM.Talk("We'll be on headsets shortly! Good luck Commander!");
	objectCAPCOM.Move("Inside to control station");
	system("pause");
	objectMedic.Talk("Attention!");
	objectCommander.Talk("Carry on. No need for customs and courtesies.");
	objectNavigator.Talk("Oh thank god. I was about to lock my knees out so I could just pass out");
	objectCommander.Talk("So you all know me, but I don't know you. What are your names, where are you from");
	objectEngineer.Talk("Names Potter. From Kentucky sir.");
	objectCommander.Talk("How's the fried chicken? Kidding, great to meet you Potter");
	system("pause");
	objectMedic.Talk("Name is actually Maria, but I go by Hook. Long story, but I once hooked myself and the name stuck..");
	cout << "Oh and I'm from Minnesota";
	objectCommander.Talk("Well if Hook is preferred, Hook it'll be");
	cout << "Minnesota, how big is the Mall of America anyways?\n";
	objectMedic.Talk("You know I've never been asked that before, but it's massive");
	system("pause");
	objectNavigator.Talk("Names Charles sir! I don't answer to Charlie neither. But I'm from Iowa");
	cout << "And apprently the only form of entertainment around here guys! Right? Right?\n";
	objectMedic.Talk("Ugh.. you know we can be funny too..whatever CHARLIE");
	objectNavigator.Talk("Hey! ehh whateves.. I was only kidding about answering to charlie too.. CAUSE YOU KNOW WHAT?");
	cout << "I love it.. so..so much. And they love me\n";
	objectCommander.Talk("If you build it they will come.. sorry love that movie.. Well I'll try and remember Charles and not Charlie");
	cout << "Well at least yal are talkative otherwise this would be boring\n";
	system("pause");
	objectMedic.Talk("The pilot is Herman, He's still preflighting, but he's from some podunk town in Delaware");
	cout << "he's like super proud or whatever, but he's cool.\n";
	objectCommander.Talk("Well its great to meet everyone and we should be getting close to launch soon");
	objectPilot.Talk("Sir if you could come to the cockpit, CAPCOM need you.");
	system("pause");
	objectCommander.Talk("Duty calls, catch you guys after we launch.");
	objectCommander.Move("to cockpit");
	objectCommander.Talk("Herman, how are you. CAPCOM this is the Commander go ahead, over.");
	objectCAPCOM.Talk("I have you launch code when you're ready to copy");
	cout << "I will also give you the address but thats only for situational awareness \n";
	cout << " The address hops each time the system is kicked on so it's not required to keep.\n";
	objectCommander.Talk("Roger CAPCOM, send your traffic, over.");
	//pause for user
	system("pause");
	int code;
	int& r_launchCode = code;
	//Make our referance what the user will input as thier launch code
	//pattern for referance = Data Type, Ref Operator(&), Ref Name, assignment, value
	//*** & used for more than 1 thing in C++ - used in an IF statement. Mean different things
	//EXP: if (this == 3 && that == 4)
	//		{			}
	code = r_launchCode;
	cout << "\nthis is CAPCOM your launch code is " << r_launchCode << " for takeoff.\n";
	//Make our pointer to the address of the launch code
	// & = address of operator - same symbol as referace, but have no relations - AT ALL!!
	// int"*" is decalring a varible
	int* ptr_code = &code;
	cout << "\nThe address of your launch code is " << ptr_code << endl;
	// dereferaning operator "*" will show the value rather than the address
	cout << "\nI say again, the launch code is " << *ptr_code << " at the address of " << ptr_code << endl;
	//pause for user
	system("pause");
	objectCommander.Talk("Roger CAPCOM I copy launch code");
	objectCAPCOM.Talk("Roger sir, you'll need to enter that code in order to initiate the final launch sequence");
	cout << "Herm, are you about ready to conduct the final preop check on the thrusters?\n";
	objectPilot.Talk("Gimme 5 minutes CAPCOM, and I'll be ready to go");
	//pause for user
	system("pause");
	objectPilot.Talk("Apologies sir, been a busy day and we're not even to the fun part yet.");
	cout << "I'm Herman, but you can call me Herm. I guess you met the rest of the crew. They take some getting used to\n";
	cout << "especially Hook and Charles. Don't sit in a room alone with those two you'll regret it.\n";
	cout << "Ha. I'm only kidding they're good people and the absolute best in thier fields same with Potter best mech I know.\n";
	cout << "Anyways, you ready to kick this thing up a notch cause I am\n";
	cout << "CAPCOM we're go for thrusters";
	objectCAPCOM.Talk("Acknowledge, go for thrusters");
	//enter launch code
	string enterLaunchCode;
	getline(cin, enterLaunchCode);
}
