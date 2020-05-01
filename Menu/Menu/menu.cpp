#include "menu.h"
#include "../MenuItem/menuItem.h"
#include <vector>

Menu::Menu(std::string title, std::string greeting, std::string exitMessage) {
	this->title = &title;
	this->greeting = &greeting;
	this->exitMessage = &exitMessage;
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