#include "menu.h"
#include "MenuItem/menuItem.h"
#include <vector>
#include <Windows.h>
#include <string>

Menu::Menu(std::string title, std::string greeting, std::string exitMessage) {
	this->title = title;
	this->greeting = greeting;
	this->exitMessage = exitMessage;
}

Menu::~Menu() {

}

std::vector<Menu::T> Menu::getMenuItems() {
	return menuItems;
};

void Menu::setMenuItems(std::vector<T> listOfItems) {
	menuItems = listOfItems;
};

void Menu::addMenuItem(bool toggle, std::string toggleDisplay, char itemKeypress, std::vector<std::string> otherDisplayItems) {
	T item(toggle, toggleDisplay, itemKeypress, otherDisplayItems);
	menuItems.push_back(item);
};

void Menu::removeMenuItem(int index) {
	menuItems.erase(menuItems.begin() + index);
};

Menu::T Menu::getMenuItemFromIndex(int index) {
	return menuItems.at(index);
}

void Menu::updateMenuItemToggle(int index, bool newToggle) {
	menuItems.at(index).setItemToggle(newToggle);
}

void Menu::updateMenuItemToggleDisplay(int index, std::string newToggleDisplay) {
	menuItems.at(index).setItemToggleDisplay(newToggleDisplay);
}

void Menu::display() {
	//resize window - SetConsoleWindowInfo
	//restrict window resize by user
	//calculate window width %
	//calculate number of "=" minus the title

		system("cls");

		std::cout << "========== " << title << " ==========" << std::endl;
		std::cout << std::endl;
		std::cout << greeting << std::endl;
		std::cout << std::endl;

		std::vector<std::string> stringOutputs;	//initialise a vector of string outputs
		for (int i = 0; i < menuItems.size(); i++) {
			//build an output string
			std::string output;
			output = "< " + menuItems.at(i).getItemToggleDisplay() + " > \t";
			output += menuItems.at(i).getItemKeypress();
			output += " - ";
			for (int j = 0; j < menuItems.at(i).getOtherDisplayItems().size(); j++) {
				output += menuItems.at(i).getOtherDisplayItems().at(j) + "\t";
			}
			//display the menu item
			std::cout << output << std::endl;
		}

}