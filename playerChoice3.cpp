#include <iostream>
#include <string>
#include "PlayerChoice3.h"
#include "FinalLaunchSequence.h"

using namespace std;

void playerChoice3()
{

	bool tryagain = true;
	string playerChoice3;

	cout << "\nWould you like to continue? (Y/N): ";
	cin >> playerChoice3;
	if (playerChoice3 == "Y" or playerChoice3 == "y")
	{
		cout << "Great news! Let's get started.\n";

	}
	else if (playerChoice3 == "N" or playerChoice3 == "n")
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
					cin >> playerChoice3;
					if (playerChoice3 == "Y" or playerChoice3 == "y")
					{
						cout << "Great news! I'll get started.\n";
						return finalLaunchSequence();
					}
					else if (playerChoice3 == "N" or playerChoice3 == "n")
					{
						cout << "Thanks for playing we hope to see you again soon \n";
						exit(0);
					}
				}
			}
		} while (tryagain = false);
}