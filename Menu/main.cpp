#include <iostream>
#include "Menu/menu.h"
#include "MenuItem/menuItem.h"

int main() {

	Menu menu("Example Title", "Welcome to my Menu!", "Goodbye!");

	menu.addMenuItem("Menu Item 1", "Numpad 1", false, "OFF", 1);
	menu.addMenuItem("Longer menu Item Menu Item 2", "Numpad 1", false, "OFF", 1);

	menu.display();

	return 0;
}