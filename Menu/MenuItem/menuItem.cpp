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

}
void MenuItem::setOptionToggle(bool newToggle) {

}

std::string MenuItem::getItemStatus() {

}
void MenuItem::setItemStatus(std::string newStatus) {

}