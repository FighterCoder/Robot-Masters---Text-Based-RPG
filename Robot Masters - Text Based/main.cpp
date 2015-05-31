#include "Stdafx.h"
#include "Basic.h"

int main()
{
	Basic basic;
	Player player;
	Shop shop;

	basic.Welcome(player);
	basic.FunctionCaller(shop, player, basic);
	basic.ExitProgram(player);

	cout << "" << endl; // Testing only
	cin.get(); // Testing only

	return 0;
}