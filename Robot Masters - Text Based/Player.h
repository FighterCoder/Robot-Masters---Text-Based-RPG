#pragma once

class Player
{
public:
	int GetStartBalance(); // Gets the start balance
	int SetBalance(int newbalance); // Sets the balance 
	void AutoSave(); // Saves

	Player();
	~Player();

private:
	int balance = 100;
	Inventory inventory;
	int level;
};