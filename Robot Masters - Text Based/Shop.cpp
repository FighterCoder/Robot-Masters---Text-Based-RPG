#include "Stdafx.h"
#include "Basic.h"
#include "Player.h"
#include "Item.h"
#include "Shop.h"

Shop::Shop()
{
}

Shop::~Shop()
{
}

void Shop::DisplayShop(Basic& basic, Player& player)
{
	string buyOrSell;
	bool check = true;
	cout << "Welcome to the Robot Part Shop!" << endl << "Would you like to buy or sell an item?" << endl;
	cin >> buyOrSell;

	while (check == true)
	{
		if (buyOrSell == "buy" || "Buy")
		{
			BuyItem();
			check = false;
		}
		else if (buyOrSell == "sell" || "Sell")
		{
			SellItem();
			check = false;
		}
		else if (buyOrSell == "exit" || "Exit")
		{
			basic.ExitProgram(player);
			check = false;
		}
		else
		{
			cout << "I'm sorry, I don't understand, please enter either 'buy' or 'sell'" << endl;
			cin >> buyOrSell;
			check = true;
		}
	}
}

void Shop::BuyItem()
{
	//TODO
}

void Shop::SellItem()
{
	//TODO
}