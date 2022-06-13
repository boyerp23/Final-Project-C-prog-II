#include <iostream>
#include <string>
#include "wakeUp.h"
#include "ClassFlightCrew.h"
#include "ClassShipAI.h"

using namespace std;
//Global variables
// This is a a varible that will hold the players health
// It strats at 100 %.
int playerHealth = 75;
int medicHealth = 100;
int potterHealth = 90;
int charlesHealth = 100;
int hermanHealth = 100;
// Declare / Prototype functions I will use
// the pattern for each function is the same!
//return type : Name of functions : (O or more parameters)
// { Curly Braces as your scope operators }
void DisplayPlayerHealth();
void displayMedicHealth();
void displayCrewHealth();
void playerHealthInput();

void wakeUpSequence()
{
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;
	ClassFlightCrew objectFlightCrew;
	//New class added for Ship AI to speak 
	ClassshipAI objectShipAI;

	objectEngineer.Name = "Potter";
	objectMedic.Name = "Hook";
	objectNavigator.Name = "Charles";
	objectPilot.Name = "Herman";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "You";
	//Name for Ship Added from new class
	objectShipAI.Name ="Cayde";
	// AI conducts check prior to wake up crew protocal
	objectShipAI.Talk("\t\t\t **** Initializing Onboard AI ****\n"
		"Initialization Complete: Onboard AI - CAYDE active\n"
		"Diagnostic Complete:\n" "Life support: 100%\n" "Oxygen: Full Capacity\n" "Crew member status: Cyrosleep\n"
		"flight control: Autopilot\n" "Time to Target: 3 days 23hrs 59min" "All systems check: GO\n\n");
	system("pause");
	//AI initiates wake up protocal after systems diagnostic checks
	objectShipAI.Talk("\t\t\t *** Initiate Wake Up Protocal ***\n");
	cout << "\t\t\t*** Wake Up Protocol In progress ***\n";
	cout << "\t\t\tPriority wake up: Commander & Medic\n";
	//AI greet Crew
	objectShipAI.Talk("Greetings Commander, I am your onboard AI - Cayde.\n"
	"I have completed an assessment of your physical status - currently you have no physical ailments.\n"
	"However, you may feel slight discomfort for several hours. Your medic is available should you need aid.");
	//Displays the health that was set in the global variables
	DisplayPlayerHealth();
	//Commander speak
	playerHealthInput();
	objectCommander.Talk("Thanks Cayde. I'm a little stiff, but fine.");
	system("pause");
	objectCommander.Talk("Hook, how you holding up my friend?");
	//Crew member move and respond 
	objectMedic.Move("grab a barf bag");
	objectMedic.Talk("Better now sir.. musta been something I ate..");
	//Display medic health set in the global variables
	displayMedicHealth();
	objectCommander.Talk("Good news, continue to run the wake up protocol for the rest of the crew.\n"
		"I'm headed up to the bridge.");
	objectMedic.Talk("Yes Sir!");
	//Commander moves to the bridge
	objectCommander.Move("To bridge");
	system("pause");
	cout << "\t\t\t*** Wake Up Protocol Continue ***\n";
	cout << "Flight crew have been brought out of cryosleep.\n";
	displayCrewHealth();
	objectMedic.Talk("Hey, Potter you feeling alright? Getting some wierd readings from your vitals.");
	objectEngineer.Talk("If i'm being totally honest I dont feel right everythings spinning and I think I might pass out.");
	objectMedic.Talk("Got it, a bit of food and some dramamine should fix you up. Everyone else your vitals check out.\n"
		"Unless you need medical attention you're dismissed to meet the commander on the bridge.");
	objectNavigator.Talk("Sounds like a plan.");
	objectPilot.Talk("Agreed.. not sure how much more autopilot I can stand.");
	objectNavigator.Move("bridge");
	objectPilot.Move("bridge");
}
//body of functions below main
void DisplayPlayerHealth()
{
	cout << "\n Your Current Player Health is " << playerHealth << endl;
}
void displayMedicHealth()
{
	cout << "Medic health at " << medicHealth << endl;
}
void displayCrewHealth()
{
	cout << "Potter Health " << potterHealth << endl;
	cout << "Charles Health " << charlesHealth << endl;
	cout << "Herman Health " << hermanHealth << endl;
}
void playerHealthInput()
{
	//Local varible
	int playerHealth = 100;
	cout << "How do you feel?\n";
	string playerAnswer;	
	getline(cin, playerAnswer);
	cout << "Vitals show green current health reading: " << playerHealth  << endl;
}