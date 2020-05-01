#pragma once
#include <iostream>
#include <vector>

typedef int T;

class MenuItem
{
private:
	std::string *itemName;
	bool optionToggle;
	std::string itemStatus;

public:
	MenuItem(std::string itemName);
	~MenuItem();

	std::string getItemName();
	void setItemName(std::string newItemName);

	bool getOptionToggle();
	void setOptionToggle(bool newToggle);
	
	std::string getItemStatus();
	void setItemStatus(std::string newItemStatus);
};

