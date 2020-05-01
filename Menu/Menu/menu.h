#pragma once
#include <iostream>
#include "../MenuItem/menuItem.h"
#include <vector>

typedef MenuItem T;

class Menu
{
private:
	std::string *title;
	std::string *greeting;
	std::string *exitMessage;

	std::vector<T>* menuItems;


public:
	Menu(std::string title, std::string greeting, std::string exitMessage);
	~Menu();

	std::vector<T> getMenuItems();
	void setMenuItems(std::vector<T>);
	void addMenuItem(T);
	void removeMenuItem();

	T getMenuItemFromIndex(int index);

	std::string getMenuItemDisplayName(int index);
};

