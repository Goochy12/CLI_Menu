#pragma once
#include <iostream>
#include <vector>

typedef int T;

class MenuItem
{
private:
	std::string itemName;
	bool optionToggle;
	std::string itemStatus;

	char keypress;
	std::string keypressDisplay;

	std::vector<std::string> otherDisplayItems;

public:
	MenuItem(std::string itemName, std::string itemKeypressDispay, char itemKeypress, std::vector<std::string> otherDisplayItems);
	~MenuItem();

	std::string getItemName();
	void setItemName(std::string newItemName);

	bool getOptionToggle();
	void setOptionToggle(bool newToggle);
	
	std::string getItemStatus();
	void setItemStatus(std::string newItemStatus);


	char getItemKeypress();
	void setItemKeypress(char newKeypress);

	std::string getKeypressDisplay();
	void setKeypressDisplay(std::string newKeypressDisplay);

	std::vector<std::string> getOtherDisplayItems();
	void setOtherDisplayItems(std::vector<std::string> otherDisplayItems);
};

