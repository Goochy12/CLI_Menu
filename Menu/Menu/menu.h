#pragma once
#include <iostream>
#include "../MenuItem/menuItem.h"
#include <vector>

class Menu
{

private:
	std::string* title;
	std::string* greeting;
	std::string* exitMessage;

	std::vector<MenuItem*> menuItems;


public:
	Menu(std::string title, std::string greeting, std::string exitMessage);
	~Menu();

	std::vector<MenuItem*> getMenuItems();
	void setMenuItems(std::vector<MenuItem*> listOfItems);
	void addMenuItem(std::string itemName, std::string itemKeypressDispay, bool itemToggle, std::string itemStatus, char itemKeypress);
	void removeMenuItem(int index);

	MenuItem getMenuItemFromIndex(int index);

	std::string getMenuItemDisplayName(int index);
};

