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

std::vector<T*> Menu::getMenuItems() {
	return menuItems;
};

void Menu::setMenuItems(std::vector<T*> listOfItems) {
	menuItems = listOfItems;
};

void Menu::addMenuItem(std::string itemName, std::string itemKeypressDispay, bool itemToggle, std::string itemStatus, char itemKeypress) {
	MenuItem* item = new MenuItem(itemName, itemKeypressDispay, itemToggle, itemStatus, itemKeypress);
	menuItems.push_back(item);
};

void Menu::removeMenuItem(int index) {
	menuItems.erase(menuItems.begin() + index);
};

T Menu::getMenuItemFromIndex(int index) {
	return *menuItems.at(index);
}

std::string Menu::getMenuItemDisplayName(int index) {
	T item = *menuItems.at(index);
	return item.getItemName();
}