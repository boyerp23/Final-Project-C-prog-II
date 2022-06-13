#include <iostream>
#include <string>
#include "PlayerChoice.h"
#include "CrewBrief.h"

using namespace std;

void playerChoice()
{
	
	bool tryagain = true;
		string playerChoice;

		cout << "\nWould you like to continue? (Y/N): ";
		cin >> playerChoice;
		if (playerChoice == "Y" or playerChoice == "y")
		{
			cout << "Great news! I'll get started.\n";
			
		}
		else if (playerChoice == "N" or playerChoice == "n")
		{
			cout << "Thanks for playing we hope to see you again soon \n";
			exit(0);
		}
		else
		do {
			for (int i = 0; i < 100; i++)
			{

				{
					cout << "You're not making a clear choice. Please try again.";
					cout << "\nWould you like to continue? (Y/N): ";
					cin >> playerChoice;
					if (playerChoice == "Y" or playerChoice == "y")
					{
						cout << "Great news! I'll get started.\n";
						return crewBrief();
					}
					else if (playerChoice == "N" or playerChoice == "n")
					{
						cout << "Thanks for playing we hope to see you again soon \n";
						exit(0);
					}
				}
			}
	} while (tryagain = false);
}