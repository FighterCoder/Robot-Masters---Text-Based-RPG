#pragma once

class Shop
{
public:
	Shop();
	~Shop();
	void DisplayShop(Basic& basic, Player& player); // Displays shop
private:
	vector<Item> stock;
	void BuyItem(); // Lets the user buy an item
	void SellItem(); // Lets the user sell an item
};