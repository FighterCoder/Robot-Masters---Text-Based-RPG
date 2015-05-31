#pragma once
#include "Player.h"
#include "Shop.h"

class Basic
{
public:
	void Welcome(Player& player); // Gives welcome message
	void FunctionCaller(Shop& shop, Player& player, Basic& basic); // Calls the functions
	void ExitProgram(Player& player); // Exits program

	Basic();
	~Basic();
private:
	void Help(Shop& shop, Player& player, Basic& basic); // Lists avalible functions from a file
};