#include <iostream>
#include <string>
#include "PlayerChoice2.h"
#include "LaunchSequence.h"

using namespace std;

void playerChoice2()
{

	bool tryagain = true;
	string playerChoice2;

	cout << "\nWould you like to continue? (Y/N): ";
	cin >> playerChoice2;
	if (playerChoice2 == "Y" or playerChoice2 == "y")
	{
		cout << "Great news! Let's get started.\n";

	}
	else if (playerChoice2 == "N" or playerChoice2 == "n")
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
					cin >> playerChoice2;
					if (playerChoice2 == "Y" or playerChoice2 == "y")
					{
						cout << "Great news! I'll get started.\n";
						return launchSequence();
					}
					else if (playerChoice2 == "N" or playerChoice2 == "n")
					{
						cout << "Thanks for playing we hope to see you again soon \n";
						exit(0);
					}
				}
			}
		} while (tryagain = false);
}