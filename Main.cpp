#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include <mutex>
#include <cstdlib>
#include "DisplayIntroduction.h"
#include "CAPCOMIntro.h"
#include "ClassFlightCrew.h"
#include "MeetTheCrew.h"
#include "EnterBrief.h"
#include "CrewBrief.h"
#include "PlayerChoice.h"
#include "ClassBriefAudience.h"
#include "playerChoice2.h"
#include "LaunchSequence.h"
#include "FinalLaunchSequence.h"
#include "playerChoice3.h"
#include "ClassgoForLaunch.h"
#include "playerChoice4.h"
#include "wakeUp.h"
#include "missionBrief.h"
#include "outro.h"
//used so that I don't have to type std:: every line
using namespace std;

//prototype functions
void playerAnswer();
void shipName();
void enterLaunchCode();
void blastOff();
int radioOrLandScenario();
void DisplayHealth();
int sendEnvoyScenario();
int contactScenario();

//global variables
int commandersHealth = 100;
int flightCrewHealth = 100;
int shipHealth = 100;

//where the program begins
int main()
{
	//Title and program introduction. 
	displayIntro();
	//Meet CAPCOM and introduce yourself.
	capcomIntro();
	//Allow crew to introduce themselves to you.
	meetCrew();
	//enter the briefing room
	enterBrief();
	//Conduct crew mission brief
	crewBrief();
	//calling the player answer and ship name functions
	playerAnswer();
	shipName();
	//Ask user if they wish to continue.
	playerChoice2();
	//Initate launch sequence and launch.
	launchSequence();
	//calling the enter launch code function
	enterLaunchCode();
	//initiate the final launch sequence
	finalLaunchSequence();
	//pause for user
	system("pause");
	//enter final launch sequence code
	enterLaunchCode();
	//ask user if they wish to continue.
	playerChoice3();
	//commence launch of ship and crew  
	goForLaunch();
	//ask player if they wish to continue 
	playerChoice4();
	//perform 10 second countdown 
	blastOff();
	//ask player if they wish to continue 
	system("pause");
	cout << "\t\t\t\t\t**** NOTE FOR USER **** \n";
	cout << "\tAs our travelers are now crusing through space and entering cyro sleep.\n";
	cout << "\tI will fast forward the time to jsut before you & the flight crew wake up\n";
	cout << "\tand begin your recon of the Dwarf Planet.\n";
	cout << "\t\t\t\t\t  **** END NOTE **** \n";
	wakeUpSequence();
	//pause for user
	system("pause");
	//conduct mission brief 24 hours before Operation: Deadman's Landing
	missionBrief();
		/*add a commanders decision for:
		landing or attempt to make radio contact
		 if commander attempts to land prior to making radio contact he is fired upon.
		send envoy to planet or land
		if commander chooses to not send an envoy he is fired upon*/
		// Start the radio first or land Scenario
	int localResultScore = radioOrLandScenario();
	commandersHealth = commandersHealth + localResultScore;
	flightCrewHealth = flightCrewHealth + localResultScore;
	shipHealth = shipHealth + localResultScore;
	//Display health after scenario
	DisplayHealth();
	system("pause");
	// Start send envoy to planet Scenario
	localResultScore = sendEnvoyScenario();
	commandersHealth = commandersHealth + localResultScore;
	flightCrewHealth = flightCrewHealth + localResultScore;
	shipHealth = shipHealth + localResultScore;
	DisplayHealth();
	system("pause");
	// Start the first contact Scenario
	localResultScore = contactScenario();
	commandersHealth = commandersHealth + localResultScore;
	flightCrewHealth = flightCrewHealth + localResultScore;
	shipHealth = shipHealth + localResultScore;
	DisplayHealth();
	outro();
	//where the program ends
	return 0;
}
// body of functions below main
//return type : Name of functions : (O or more parameters)

//answer NPC question about what you go no go criteria is for mission
void playerAnswer()
{
	string playerAnswer;
	cout << "what is your go/no criteria?\n";
	getline(cin, playerAnswer);
	cout << "The go/ no go criteria is " + playerAnswer + " for landing.\n";
}
//answer NPC question and give your ship a name
void shipName()
{
	string playerShipName;
	cout << "What do you want to call the ship?  \n";
	getline(std::cin, playerShipName);
	cout << "The ship is known as " + playerShipName;
}
//have user enter launch code
void enterLaunchCode()
{
	string enterLaunchCode;
	cout << "Please enter launch code: \n";
	getline(cin, enterLaunchCode);
	cout << "Launch code " + enterLaunchCode + " accepted, you may proceed\n";
}
//countdown clock for takeoff
mutex m;
void blastOff()
{
	//Seed the random number generator
	time_t now;
	time(&now);
	srand(now);
	//cout << rand() % 100 << endl;
	
	//print out countdown clock
	m.lock();
	//display for initial countdown from 10 seconds
	for (int i = 10; i >= 10; i--)
	{
		printf("Commence Rocket Launch in 10 seconds from Main Base on thread ID: %d\n"), this_thread::get_id;
		printf("countdown: %d\n", i);
	}
	//1  second delay before next number
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
		for (int i = 9; i >= 9; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 8; i >= 8; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 7; i >= 7; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 6; i >= 6; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 5; i >= 5; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 4; i >= 4; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 3; i >= 3; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
	for (int i = 2; i >= 2; i--)
	{
		printf("%d\n", i);
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();

	m.lock();
		for (int i = 1; i >= 1; i--)
	{
		printf("%d\nblastoff from thread ID %d\n", i), this_thread::get_id;
	}
	this_thread::sleep_for(chrono::seconds(1));
	m.unlock();
}

//Make radio contact or land scenario requires player to make the correct choice to prevent an unwanted attack.
int radioOrLandScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\nYou are entering unknown territory after completing your recon of the Dwarf Planet";
	cout << "\nYou are unsure whether to just attempt to land and risk an unwanted attack to your ship and crew \n";
	cout << "or to attempt radio contact first.\n\n";
	cout << "\nAs the commander, you have to choose - 'n' means you will not make radio contact and attenmpt to land\n";
	cout << "'y' means you will attempt radio contact prior to landing\n";
	cout << "\nWould you like to make radio contact first? (Y or N) ";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "N" or localPlayerChoice == "n")
	{
		cout << "\nYou have chosen poorly and endangered you crew and mission.\n";
		cout <<"The penelty for your bad descision making is - 55 points to your health.\n";
		pointsResults = -55;
		;
		// return -15, -10, & -25
	}
	else if (localPlayerChoice == "Y" or localPlayerChoice == "y")
	{
		cout << "\nYou have chosen wisely, but no response has been recieved from planet surface.\n";
		pointsResults = 0;
		// return 0
	}
	else
	{
		cout << "\nYou are not making clear choices and are wasting percious rescources. The penalty is -33 points to your health.\n";
		pointsResults = -33;
		// return -33
	}
	return pointsResults;
	;
}
//Find food scenario requires player to make the correct choice to find a food source to survive on the red planet
int sendEnvoyScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou have not been able to hail another party and have exhuasted all means of communications";
	cout << "\nYou can either choose to send an envoy to the planet surface or continue to attempt radio contact.\n\n";
	cout << "\nThere is a risk to either, but you have to choose one. Choosing to send an envoy may reslt in catostrophic loss.\n";
	cout << "However, continuing to make radio contact will exhaust more supplies\n";
	cout << "\nWould you like to send an envoy to the Planet surface? (Y or N) ";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "N" or localPlayerChoice == "n")
	{
		cout << "\nYou have chosen poorly and because you exhusted your supplies you lose 20 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "Y" or localPlayerChoice == "y")
	{
		cout << "\nYou have chosen wisely but the cost in supplies for the envoy results in a loss of 10 health points.\n";
		pointsResults = -10;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are wasting percious rescources. The penalty is -33 points to your health.\n";
		pointsResults = -33;
		// return -33;
	}
	return pointsResults;
}
//Find intelligent life scenario requires player to fulfill his duties and find intelligent life.
int contactScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "You are now inbound to make first contact with the planet inhabitants\n";
	cout << "But you must choose whether you arrive armed or unarmed.\n";
	cout << "\nArriving armed will enable you to protect yourself, but may present yourself as a threat.\n";
	cout << "Arrving unarmed will not make it possible to protect yourself, but will ensure that you come in peace and mean no harm.\n";
	cout << "\nYou must choose commander: Do you want to travel armed (Y) or unarmed (N)? (Y or N)\n";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "Y" or localPlayerChoice == "y")
	{
		cout << "\nYou have choosen poorly and have been assumed a threat.\n";
		cout << "Hostile forces have now gatheredand begin launching rockets at youand your ship\n";
		pointsResults = -20;
		cout << "You and your crew have perished and the mission is a failure.\n";
			// return -20; total health is zero if all N was selected.
			exit(0);
	}
	else if (localPlayerChoice == "N" or localPlayerChoice == "n")
	{
		cout << "\nYou have chosen to travel unarmed and are greeted as freinds by the local populations officials.\n";
		cout << "You gain 10 points health and mission is an overall success. Contact CAPCOM for further instruction.\n";
		pointsResults = 10;
		// return 10; total health should be a 100 if all choices were correct.
	}
	else
	{
		cout << "\nYou are not making clear choices and have exhausted the remaining rescources.\n";
		cout << "You and the crew are unable to survive and die\n"; 
		cout <<" the result is mission failure.\n";
		pointsResults = -34;
		// return -10; total health is zero if no clear choices were selected.
		exit(0);
	}
	return pointsResults;
}
void DisplayHealth()
{
	cout << "\n Your Current Player Health is " << commandersHealth << endl;
	cout << "\n Flgiht Crew Health is " << flightCrewHealth << endl;
	cout << "\n Ship Health is " << shipHealth << endl;
}