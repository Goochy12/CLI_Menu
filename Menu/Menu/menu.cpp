#include "menu.h"
#include "../MenuItem/menuItem.h"
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

void Menu::addMenuItem(std::string itemName, std::string itemKeypressDispay, bool itemToggle, std::string itemStatus, char itemKeypress) {
	T item(itemName, itemKeypressDispay, itemToggle, itemStatus, itemKeypress);
	menuItems.push_back(item);
};

void Menu::removeMenuItem(int index) {
	menuItems.erase(menuItems.begin() + index);
};

Menu::T Menu::getMenuItemFromIndex(int index) {
	return menuItems.at(index);
}

std::string Menu::getMenuItemDisplayName(int index) {
	T item = menuItems.at(index);
	return item.getItemName();
}

void Menu::display() {
	//resize window - SetConsoleWindowInfo
	//restrict window resize by user
	//calculate window width %
	//calculate number of "=" minus the title

	char keyPressed = '1';

	while (keyPressed != '0') {
		system("cls");

		std::cout << "========== " << title << " ==========" << std::endl;
		std::cout << std::endl;
		std::cout << greeting << std::endl;
		std::cout << std::endl;


		for (int i = 0; i < menuItems.size(); i++) {
			//display the menu item
			std::cout << "< " << menuItems.at(i).getItemStatus() << " >" << "\t" << menuItems.at(i).getKeypressDisplay() << " - " << menuItems.at(i).getItemName();
			std::cout << std::endl;
		}

		std::cin >> keyPressed;
		for (int i = 0; i < menuItems.size(); i++) {
			if (keyPressed == menuItems.at(i).getItemKeypress()) {
				//execute some function
				menuItems.at(i).setOptionToggle(!menuItems.at(i).getOptionToggle());
				if (menuItems.at(i).getOptionToggle()) {
					menuItems.at(i).setItemStatus("ON");
				}
				else {
					menuItems.at(i).setItemStatus("OFF");
				}
			}
		}
	}
}