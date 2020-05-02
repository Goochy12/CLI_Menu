#include "menuItem.h"

MenuItem::MenuItem(char itemKeypress, std::vector<std::string> otherDisplayItems) {
	this->keypress = itemKeypress;
	this->otherDisplayItems = otherDisplayItems;
}

MenuItem::~MenuItem() {

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