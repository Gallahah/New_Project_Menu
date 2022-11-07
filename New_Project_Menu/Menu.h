#pragma once
#include <string>

using namespace std;

class app_menu
{
public:
	void execute(); //execute the menu

private:
	void menu();
	string Accounts[20];
	bool Trade = true;
};