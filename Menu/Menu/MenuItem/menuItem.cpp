#include "menuItem.h"

MenuItem::MenuItem(bool toggle, std::string toggleDisplay, char itemKeypress, std::vector<std::string> otherDisplayItems) {
	this->toggle = toggle;
	this->toggleDisplay = toggleDisplay;
	this->keypress = itemKeypress;
	this->otherDisplayItems = otherDisplayItems;
}

MenuItem::~MenuItem() {

}

bool MenuItem::getItemToggle() {
	return this->toggle;
}
void MenuItem::setItemToggle(bool newToggle) {
	this->toggle = newToggle;
}

std::string MenuItem::getItemToggleDisplay() {
	return this->toggleDisplay;
}
void MenuItem::setItemToggleDisplay(std::string newToggleDisplay) {
	this->toggleDisplay = newToggleDisplay;
}

char MenuItem::getItemKeypress() {
	return keypress;
}
void MenuItem::setItemKeypress(char newKeypress) {
	this->keypress = newKeypress;
}

std::vector<std::string> MenuItem::getOtherDisplayItems() {
	return otherDisplayItems;
}
void MenuItem::setOtherDisplayItems(std::vector<std::string> newOtherDisplayItems) {
	this->otherDisplayItems = newOtherDisplayItems;
}