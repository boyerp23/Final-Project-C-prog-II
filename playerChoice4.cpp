#include "playerChoice4.h"
#include "ClassgoForLaunch.h"
#include <iostream>
#include <string>

using namespace std;

void playerChoice4()
{

	bool tryagain = true;
	string playerChoice4;

	cout << "\nWould you like to continue? (Y/N): ";
	cin >> playerChoice4;
	if (playerChoice4 == "Y" or playerChoice4 == "y")
	{
		cout << "Great news! Let's get started.\n";

	}
	else if (playerChoice4 == "N" or playerChoice4 == "n")
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
					cin >> playerChoice4;
					if (playerChoice4 == "Y" or playerChoice4 == "y")
					{
						cout << "Great news! I'll get started.\n";
						return goForLaunch();
					}
					else if (playerChoice4 == "N" or playerChoice4 == "n")
					{
						cout << "Thanks for playing we hope to see you again soon \n";
						exit(0);
					}
				}
			}
		} while (tryagain = false);
}