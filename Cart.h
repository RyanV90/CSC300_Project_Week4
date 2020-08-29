#ifndef CART_H
#define CART_H

#include "BarCodeScanner.h"
#include <iostream>

using namespace std;

class Cart {

public:
	Cart();
	int getNumberOfItems() const;
	void setNumberOfItems(int numberOfItems);
	double getSubtotal() const;
	void setSubtotal(double subtotal);
	bool getIsOperational() const;
	void setIsOperational(bool isOperational);
	void getListOfItems();
	void addItemToCart(string itemName);
	void removeItemFromCart(string itemName);

private:
	int numberOfItems;
	double subtotal;
	bool isOperational;
	string* listOfItems = new string();
	BarCodeScanner barCodeScanner;
};

#endif // !CART_H