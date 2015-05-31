#include "Stdafx.h"
#include "Basic.h"
#include <Windows.h>

Basic::Basic()
{
}

Basic::~Basic()
{
}

void Basic::Welcome(Player& player)
{
	int tempBalance = player.GetStartBalance(); // Makes the balance the functions return
	cout << "Welcome to Robot Masters" << endl;
	cout << "Balance: $" << tempBalance << endl << endl;
}

void Basic::FunctionCaller(Shop& shop, Player& player, Basic& basic)
{
	string call;
	string function = "What function do you want to call?";
	string help = "Hint: type 'help' for a list of avalible functions";
	bool check = true;

	cout << function << endl << help << endl;
	cin >> call;
	cout << "" << endl;

	while (check == true) // Checks what function to call
	{
		if (call == "help")
		{
			Help(shop, player, basic);
			check = false;
		}
		else if (call == "shop")
		{
			shop.DisplayShop(basic, player);
			check = false;
		}
		else if (call == "home")
		{
			cout << "You are already at the menu" << endl;
			cout << function << endl << help << endl;
			cin >> call;
			cout << "" << endl;

			check = true;
		}
		else if (call == "exit")
		{
			ExitProgram(player);

			check = false;
		}
		else
		{
			cout << function << endl << help << endl;
			cin >> call;
			cout << "" << endl;

			check = true;
		}
	}
}

void Basic::Help(Shop& shop, Player& player, Basic& basic)
{
	ifstream HelpFile("help.txt");
	string line;

	while (getline(HelpFile, line)) // Reads the text file each line at a time
	{
		cout << line << endl; // Displays the line
	}

	cout << "" << endl;
	FunctionCaller(shop, player, basic);
}

void Basic::ExitProgram(Player& player)
{
	player.AutoSave();

	exit(0);
}