#pragma once

class Item
{
public:
	Item();
	~Item();

private:
	Part::part type;
	int itemID;
	int quantity;
};