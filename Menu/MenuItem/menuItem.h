#pragma once
#include <iostream>
#include <vector>

typedef int T;

class MenuItem
{
private:

	char keypress;

	std::vector<std::string> otherDisplayItems;

public:
	MenuItem(char itemKeypress, std::vector<std::string> otherDisplayItems);
	~MenuItem();


	char getItemKeypress();
	void setItemKeypress(char newKeypress);

	std::vector<std::string> getOtherDisplayItems();
	void setOtherDisplayItems(std::vector<std::string> otherDisplayItems);
};

