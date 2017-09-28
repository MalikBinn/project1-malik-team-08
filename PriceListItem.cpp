#include "PriceListItem.h"
#include <cstring>

PriceListItem::PriceListItem(const string &itemName, const string &code, double price, bool taxable) {
	// TO BE COMPLETED

	this->itemName = itemName;
	this->code= code;
	this->price = price;
	this->taxable = taxable;
}

PriceListItem::PriceListItem() {
	// TO BE COMPLETED
	this->itemName = "";
	this->code = "";
	this->price = 0.0;
	this->taxable = false;

}

string PriceListItem::getItemName() {
	// TO BE COMPLETED
	return itemName;
}

string PriceListItem::getCode() const {
	// TO BE COMPLETED
	return code;
}

double PriceListItem::getPrice() {
	// TO BE COMPLETED
	return price;
}

bool PriceListItem::isTaxable() {
	// TO BE COMPLETED
	return taxable;
}

