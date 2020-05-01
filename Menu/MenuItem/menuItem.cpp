#include "menuItem.h"

MenuItem::MenuItem(std::string itemName) {
	this->itemName = &itemName;
}

MenuItem::~MenuItem() {

}

std::string MenuItem::getItemName() {
	return *itemName;
}
void MenuItem::setItemName(std::string newItemName) {
	itemName = &newItemName;
}

bool MenuItem::getOptionToggle() {
	return optionToggle;
}
void MenuItem::setOptionToggle(bool newToggle) {
	optionToggle = newToggle;
}

std::string MenuItem::getItemStatus() {
	return itemStatus;
}
void MenuItem::setItemStatus(std::string newItemStatus) {
	itemStatus = newItemStatus;
}


char MenuItem::getItemKeypress() {
	return *keypress;
}
void MenuItem::setItemKeypress(char newKeypress) {
	keypress = &newKeypress;
}

std::string MenuItem::getKeypressDisplay() {
	return *keypressDisplay;
}
void MenuItem::setKeypressDisplay(std::string newKeypressDisplay) {
	keypressDisplay = &newKeypressDisplay;
}