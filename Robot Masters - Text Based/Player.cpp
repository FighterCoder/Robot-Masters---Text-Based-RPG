#include "Stdafx.h"
#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

int Player::GetStartBalance()
{
	ifstream save("Save.txt");
	int newBalance;
	int startBalance = 100;

	if (!save)
	{
		newBalance = startBalance; // If there is no save, reset to default
	}
	else
	{
		save >> newBalance; // Reads the file and puts the balance into int
	}

	if (balance == 100)
	{
		balance = newBalance;
	}

	return balance; // Returns balance
}

int Player::SetBalance(int newbalance)
{
	if (newbalance < 0)
	{
		newbalance = 0;
	}

	balance = newbalance;

	return balance;
}

void Player::AutoSave()
{
		ofstream save("Save.txt");
		save << balance << endl; // re-writes the file to have the latest balance
}