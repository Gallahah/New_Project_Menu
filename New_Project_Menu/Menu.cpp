#include <iostream>
//#include "Balance.h"
#include "Menu.h"

using namespace std;

void app_menu::execute()
{
	menu();
}

void displayMenu()
{
	cout << "\tMAIN MENU\t" << endl << endl;
	cout << "1. New account" << endl;
	cout << "2. Existing account" << endl;
	cout << "3. Trading options" << endl;
	cout << "4. Exit" << endl << endl;
}

void addAccount(int accounts)
{
	cout << "Account name: " << endl;
	cin >> accounts;

}

void selectAccount()
{
	cout << "Select an account: " << endl;

}

void tradingOptions()
{
	cout << "Would you like to Buy or Sell? " << endl;
}

void app_menu::menu()
{
	displayMenu();
	int choice;
	string repeat;

	do
	{
		cout << "Select an option from the menu: ";
		cin >> choice;

		switch(choice)
		{
		case 1: // Main menu add account
			int accounts;
			addAccount(accounts);
			break;

		case 2: // Main menu select an existing account
			selectAccount();
			break;

		case 3: // Main menu choose buy or sell option
			tradingOptions();
			break;
			 
		case 4: // exit
			exit(0);

		case 5: // Account sub-menu Balance

		default:
			cout << "Invalid selection" << endl;
			exit(0);
		}
		cout << "Would you like to return to the main menu? " << endl;
		cin >> repeat;
		system("CLS");
	} while (repeat == "yes" || repeat == "YES");
	system("CLS");
	cout << "The program will now exit";
}