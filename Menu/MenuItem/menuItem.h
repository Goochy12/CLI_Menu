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

public:
	MenuItem(std::string itemName, std::string itemKeypressDispay, bool itemToggle, std::string itemStatus, char itemKeypress);
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
};

