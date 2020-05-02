#pragma once
#include <iostream>
#include "MenuItem/menuItem.h"
#include <vector>

class Menu
{
	typedef MenuItem T;

private:
	std::string title;
	std::string greeting;
	std::string exitMessage;

	std::vector<T> menuItems;

public:
	Menu(std::string title, std::string greeting, std::string exitMessage);
	~Menu();

	std::vector<T> getMenuItems();
	void setMenuItems(std::vector<T> listOfItems);
	void addMenuItem(bool toggle, std::string toggleDisplay, char itemKeypress, std::vector<std::string> otherDisplayItems);
	void removeMenuItem(int index);

	T getMenuItemFromIndex(int index);

	void updateMenuItemToggle(int index, bool newToggle);
	void updateMenuItemToggleDisplay(int index, std::string newToggleDisplay);

	void display();
};

