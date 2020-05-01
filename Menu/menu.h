#pragma once
#include <iostream>
#include <vector>

typedef T;

class Menu
{
private:
	std::vector<T>* menuItems;

public:
	Menu(std::vector<T> menuItems);
	~Menu();

	std::vector<T> getMenuItems();
	void setMenuItems(std::vector<T>);
	void addMenuItem(T);
	void removeMenuItem();
};

