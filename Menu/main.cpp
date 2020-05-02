#include <iostream>
#include "Menu/menu.h"
#include "MenuItem/menuItem.h"

int main() {

	Menu menu("Example Title", "Welcome to my Menu!", "Goodbye!");
	menu.addMenuItem(false, "OFF", '1', {"Test 1"});
	menu.addMenuItem(false, "OFF", '2', {"Test 2"});

	menu.display();

	return 0;
}