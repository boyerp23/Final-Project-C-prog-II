#include <iostream>
#include <string>
#include "ClassFlightCrew.h"
#include "CrewBrief.h"
#include "ClassBriefAudience.h"
#include "PlayerChoice.h"

void crewBrief()
{
	//creates objects from classes
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;
	ClassFlightCrew objectFlightCrew;
	ClassBriefAudience objectNPC1;
	ClassBriefAudience objectNPC2;
	ClassBriefAudience objectNPC3;
	ClassBriefAudience objectNPC4;
	//set object names
	objectEngineer.Name = "Engineer";
	objectMedic.Name = "Medic";
	objectNavigator.Name = "Navigator";
	objectPilot.Name = "Pilot";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "Commander";
	objectFlightCrew.Name = "Flight Crew";
	objectNPC1.Name = "Bill";
	objectNPC2.Name = "Julie";
	objectNPC3.Name = "Sandra";
	objectNPC4.Name = "Willie";
	//CAPCOM begind the final crew brief the night before takeoff
	objectCAPCOM.Talk("Lets begin..");
	objectCAPCOM.Talk("Welcome ladies and gentleman to Project Deadman's Trove.");
	objectCAPCOM.Talk("During this brief we will cover the basic concept of our operation.");
	objectCAPCOM.Talk("First and foremost I will introduce the crew.");
	objectFlightCrew.Move("Stand up");
	objectCAPCOM.Talk("Our mission Commander");
	std:: cout << "Our pilot for the mission\n";
	std:: cout << "The missions Navigator\n";
	std:: cout << "Our Crew Medic\n";
	std:: cout << "And out Flight Engineer\n";
	//pause for user
	system("pause");
	//cont briefing allow the player character to say a few words
	objectCAPCOM.Talk("Sir, floor is yours for opening comments.");
	objectCommander.Move("takes the podium to address the audience");
	objectCommander.Talk("Thank you CAPCOM. I will be as brief as I can be. We all know why we're here.");
	std::cout << "\n It is truly an honor and privilege to take command of this intersteller voyage.\n";
	std::cout << "I look forward to getting our mission underway. To the crew you all know your assignments\n";
	std::cout << "and though we've had a limited amount of time together I will do everything within my limits and power\n";
	std::cout << "to get you back home safely. Unless there are any opening questions for me. CAPCOM.\n";
	//pause for user
	system("pause");
	//ask NPC's for questions
	objectCAPCOM.Talk("Are there any opening questions for the Commander at this time?");
	objectNPC1.Talk("No questions");
	objectNPC2.Talk("No");
	objectNPC3.Talk("No questions at this time");
	objectNPC4.Talk("Nothing from me");
	objectCAPCOM.Talk("Great news, we'll get through this quickly.");
	//pause for user
	system("pause");
	//give mission brief
	std::cout << " Folks, our mission is simple, we're sending our flight crew to the dwarf planet known only as Deadman's trove \n";
	std::cout << "We do not know what they will encounter upon arrival so there is inherent risk in that you will not have weapons.\n";
	std::cout << "All your life support equipment is on board should you need medical, your medic can take care of most all injuries.. \n";
	std::cout << "But there is a limit to supplies. Since we don't know what or who we'll find the first few days in space our crew \n";
	std::cout << "will be conducting reconnaissance of the area and gathering as much intel as they can prior to landing. \n";
	std::cout << "Once the commander determines that it's clear to land they will initiate the landing sequence. \n";
	std::cout << "Should there be life on the planet it is imperative that we make a good first impression. \n";
	std::cout << "Goal #1 is to make sure we get our crew back home safely\n";
	std::cout << "Goal #2 is to confirm or deny intelligent life on the planet. \n";
	std::cout << "Goes without saying, but #3 be as safe as you can and gather as much information as you can\n";
	//pause for user
	system("pause");
	//ask NPC for questions
	std::cout << "Now audience what are your questions? \n";
	objectNPC4.Talk("No questions, good luck crew come back safe.");
	objectNPC2.Talk("Same, this is a milestone in human history and I can't believe I get to be a part of it!");
	objectNPC1.Talk("What is the go/no go criteria for landing?");
	objectNPC3.Talk("Sir, whats the name of the ship?");
	objectCAPCOM.Talk(" Great questions. Commander..");
	//Answer questions asked by NPCs
	std::string playerAnswer;
	std::getline(std::cin, playerAnswer);
	std::string shipName;
	std::getline(std::cin, shipName);
}
