#include "menu.h"
#include "../MenuItem/menuItem.h"
#include <vector>

Menu::Menu() {
	system("cls");

}

Menu::~Menu() {

}

std::vector<T> Menu::getMenuItems() { 
	return *menuItems;
};
void setMenuItems(std::vector<T>) {};
void addMenuItem(T) {};
void removeMenuItem() {};

//T Menu::getMenuItemFromIndex(int index) {
//	return menuItems->at(index);
//}
//
//std::string Menu::getMenuItemDisplayName(int index) {
//	MenuItem item = menuItems->at(index);
//	return item.getItemName();
//}