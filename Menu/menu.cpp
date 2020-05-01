#include "menu.h"
#include <vector>

Menu::Menu(std::vector<T> menuItems) {
	system("cls");

	this->menuItems = &menuItems;

}

Menu::~Menu() {

}