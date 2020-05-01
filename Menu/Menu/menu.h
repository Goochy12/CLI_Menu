#pragma once
#include <iostream>
#include "../MenuItem/menuItem.h"
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
	void addMenuItem(std::string itemName, std::string itemKeypressDispay, bool itemToggle, std::string itemStatus, char itemKeypress);
	void removeMenuItem(int index);

	T getMenuItemFromIndex(int index);

	std::string getMenuItemDisplayName(int index);

	void display();
};

