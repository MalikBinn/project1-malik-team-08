#pragma once

#include "PriceList.h"

class GroceryBill {
public:
	GroceryBill(const PriceList *priceList, double taxRate);
	void scanItem(string scanCode, double quantity); // add item and quantity to bill; throw exception if item's code is not found in the pricelist
	void scanItemsFromFile(string filename); // Scan multiple codes and quantities from the given text file
	double getTotal(); // return the total cost of all items scanned
	void printBill(); // Print the bill to cout. Each line contains the name of an item, total price, and the letter "T" if tax was addded.

private:
	// any private member variables and methods go here
	double total;
	const PriceList *priceList;
	double taxRate;
	string codes[100];
	double quantities[100];
	int count = 0;
	// TO BE COMPLETED

};
