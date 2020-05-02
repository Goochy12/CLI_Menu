#pragma once
#include <iostream>
#include <vector>

typedef int T;

class MenuItem
{
private:

	bool toggle;
	std::string toggleDisplay;

	char keypress;

	std::vector<std::string> otherDisplayItems;

public:
	MenuItem(bool toggle, std::string toggleDisplay, char itemKeypress, std::vector<std::string> otherDisplayItems);
	~MenuItem();

	bool getItemToggle();
	void setItemToggle(bool newToggle);

	std::string getItemToggleDisplay();
	void setItemToggleDisplay(std::string newToggleDisplay);

	char getItemKeypress();
	void setItemKeypress(char newKeypress);

	std::vector<std::string> getOtherDisplayItems();
	void setOtherDisplayItems(std::vector<std::string> otherDisplayItems);

};

