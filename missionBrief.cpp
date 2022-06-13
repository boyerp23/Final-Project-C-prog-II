#include <iostream>
#include <String>
#include "missionBrief.h"
#include "ClassFlightCrew.h"
#include "ClassShipAI.h"

using namespace std;

// Conduct mission brief 24 hours prior to mission execution with CAPCOM and crew.
void missionBrief()
{
	cout << "\t\t\t\t **** 24 HOURS PRIOR TO MISSION ****\n";
	cout << "\tCommander had been prepping for mission brief over the past two days.\n";
	cout << "\tThe crew has conducted thier recon of the planet from orbit amd gathered as much intel as they could\n";
	ClassFlightCrew objectEngineer;
	ClassFlightCrew objectMedic;
	ClassFlightCrew objectNavigator;
	ClassFlightCrew objectPilot;
	ClassFlightCrew objectCAPCOM;
	ClassFlightCrew objectCommander;
	ClassFlightCrew objectFlightCrew;
	ClassshipAI objectShipAI;

	objectEngineer.Name = "Potter";
	objectMedic.Name = "Hook";
	objectNavigator.Name = "Charles";
	objectPilot.Name = "Herman";
	objectCAPCOM.Name = "CAPCOM";
	objectCommander.Name = "You";
	objectShipAI.Name = "Cayde";

	objectCommander.Talk("Cayde conduct roll call please, and get CAPCOM online for us to begin breif.\n");
	objectShipAI.Talk("As you wish sir. CAPCOM coming online.");
	system("pause");
	objectShipAI.Talk("Roll Call in seqence:" "CAPCOM");
	objectCAPCOM.Talk("CAPCOM Online read loud and clear");
	objectShipAI.Talk("MEDIC");
	objectMedic.Talk("ONLINE");
	objectShipAI.Talk("ENGINEER");
	objectEngineer.Talk("ONLINE");
	objectShipAI.Talk("NAVIGATOR");
	objectNavigator.Talk("ONLINE");
	objectShipAI.Talk("PILOT");
	objectPilot.Talk("ONLINE");
	objectShipAI.Talk("Commander, all parties present and prepared for brief\n\n");
	system("pause");
	objectCommander.Talk("Thank you. Lets begin.\n" "CAPCOM as you well know we have conducted recon of Deadmans Trove over the past 48 hours.\n"
	"Based on our observations we have determined that there is in fact intelligent life on the planet.\n"
	"However, it is unclear to us if they're hostile or friendly. Which is in fact go/no-go criteria for landing.\n"
	"At this point in time I will defer to my crew to brief their findings and present a solution for our course of action.\n");
	objectCAPCOM.Talk("Acknowledge all Commander, and we've got our top analysts looking over the initail reports\n"
	"sent from your crew. We're curious to know what the outcome will be so you may proceed\n");
	system("pause");
	objectMedic.Talk("Sir, currently the crew is at full health, we had minor illness that has been treated\n"
		"with meds and proper rest.\n"
		"Based on inital observation of the planet and it's inhabitants their infrastructure suggests they do have\n" 
		"medical facilities\n"
		"and possess the means to treat illness. Upon futher investigation we would be able to determine their advances in\n" 
		"medicine compared to our own.\n\n"
		"Pending any questions that concludes my brief.\n");
	objectCommander.Talk("No questions. Engineer.\n");
	system("pause");
	objectEngineer.Talk("Sir, currently ammunition and ordinance stores are at 100% \n"
		"After 48 hours of recon and observation, we can reasonably assume that the planet does have a military force.\n"
		"We have at this time not been able to hail them on any freqency yet. Recommendation is to proceed with caution,\n"
		"until sufficient comms can be established. Although we do not know what their dialect is and may be unable to\n"
		"communicate regardless.\n\n"
		"Pending any questions this concludes my brief\n");
	objectCommander.Talk("Is it still unclear if these are hostile forces or friendly? Additionally what is the risk with no comms?\n\n");
	objectEngineer.Talk("It is still unclear if they're hostile forces or not. We can confirm they possess the means to launch\n"
		"Surface to Air Munitions.\n"
		"With that in mind the risk of landing prior to good two way comms is high. Especially if we attempt to land with\n"
		"munitions of our own.\n\n");
	objectCommander.Talk("Duely noted. Thanks Potter. Herm, would you recommend sending an envoy?\n");
	system("pause");
	objectPilot.Talk("Sir, currently all flight systems are green and go. The Nauteloid envoy ship is fully intact.\n"
		"Based on Potters brief and no comms the risk is high, but it is my belief that if we choose to send an envoy\n"
		"it should be unarmmed.\n"
		"This doesn't decrease the risk that much, but may show that we come in peace and mean no harm.\n"
		"Based on our fuel burn we will have to determine what our course of action is soon otherwise\n"
		"we will run out of resources.\n\n"
		"Pending any questions this concludes my brief\n\n");
	objectCommander.Talk("So it seems we have some choices to make. Good assessment I'll mull it over. Navigator.\n");
	system("pause");
	objectNavigator.Talk("Sir, all radars and nav systems online, green and go. Except in the Nauteloid the nav system is faulty.\n"
		"But thats what i'm here for so if an envoy is needed I would have to come along.\n"
		"It's been my expirence that if you come in low and slow you're likely to be precieved as a threat.\n"
		"Too fast and too hard you're a threat.\n"
		"So care must be taken when entering foreign airspace, but I've tracked several landing docks with minimal\n"
		"traffic in and out.\n"
		"This suggests that they're regional and used for resupply so charting a course to one of those is much safer\n"
		"but the trek is longer.\n\n"
		"Pending any questions this concludes my brief.\n\n");
	system("pause");
	objectCommander.Talk("Alright thanks everyone. So heres what I think I know:\n"
		"We are unable to establish comms, but the risk is high however the gain outweighs the risk. Careful consideration needs\n"
		"to be how we conduct ourselves should we enter their airspace.\n"
		"It is unclear still if they're hostile or not, but if performed correctly we may be\n"
		"able to land safely on the surface and conduct our mission.\n\n");
	objectCommander.Talk("CAPCOM, I see no reason to have wasted two years in space. Mission is a go!\n\n");
	objectCAPCOM.Talk("CAPCM acknowldges, mission is a go, good luck Commander. Out.\n\n\n");
	cout << "\t\t\t\t **** 22 HOURS PRIOR TO MISSION ****\n";
	cout << "\t\t\t\t\tMission brief Complete\n";
	cout << "\t\t\t\tOperation: Deadman's Landing is a go.\n";

}
