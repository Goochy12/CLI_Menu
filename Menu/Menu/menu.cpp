#include "menu.h"
#include <vector>

Menu::Menu(std::vector<T> menuItems) {
	system("cls");

	this->menuItems = &menuItems;

}

Menu::~Menu() {

}

std::vector<T> Menu::getMenuItems() { 
	return *menuItems;
};
void setMenuItems(std::vector<T>) {};
void addMenuItem(T) {};
void removeMenuItem() {};

T getMenuItemFromIndex(int index);

std::string getMenuItemDisplayName(int index);