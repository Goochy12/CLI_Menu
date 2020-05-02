#include "menuItem.h"

MenuItem::MenuItem(std::string itemName, std::string itemKeypressDispay, char itemKeypress, std::vector<std::string> otherDisplayItems) {
	this->itemName = itemName;
	this->keypressDisplay = itemKeypressDispay;
	this->keypress = itemKeypress;
	this->otherDisplayItems = otherDisplayItems;
}

MenuItem::~MenuItem() {

}

std::string MenuItem::getItemName() {
	return itemName;
}
void MenuItem::setItemName(std::string newItemName) {
	this->itemName = newItemName;
}

bool MenuItem::getOptionToggle() {
	return optionToggle;
}
void MenuItem::setOptionToggle(bool newToggle) {
	this->optionToggle = newToggle;
}

std::string MenuItem::getItemStatus() {
	return itemStatus;
}
void MenuItem::setItemStatus(std::string newItemStatus) {
	this->itemStatus = newItemStatus;
}


char MenuItem::getItemKeypress() {
	return keypress;
}
void MenuItem::setItemKeypress(char newKeypress) {
	this->keypress = newKeypress;
}

std::string MenuItem::getKeypressDisplay() {
	return keypressDisplay;
}
void MenuItem::setKeypressDisplay(std::string newKeypressDisplay) {
	this->keypressDisplay = newKeypressDisplay;
}

std::vector<std::string> MenuItem::getOtherDisplayItems() {
	return otherDisplayItems;
}
void MenuItem::setOtherDisplayItems(std::vector<std::string> newOtherDisplayItems) {
	this->otherDisplayItems = newOtherDisplayItems;
}