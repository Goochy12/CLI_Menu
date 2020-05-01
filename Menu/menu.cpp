#include "menu.h"
#include <vector>

Menu::Menu(std::vector<T> menuItems) {
	system("cls");

	this->menuItems = &menuItems;

}

Menu::~Menu() {

}

std::vector<T> getMenuItems() {};
void setMenuItems(std::vector<T>) {};
void addMenuItem(T) {};
void removeMenuItem() {};