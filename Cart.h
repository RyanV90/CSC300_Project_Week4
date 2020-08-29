#ifndef CART_H
#define CART_H

#include "BarCodeScanner.h"
#include <iostream>

using namespace std;

class Cart {

public:
	Cart();
	int getNumberOfItems() const;
	void setNumberOfItems(int);
	bool getIsOperational() const;
	void setIsOperational(bool);
	void getListOfItems(int);
	void addItemToCart(string);
	void removeItemFromCart(string);

private:
	int numberOfItems;
	bool isOperational;
	string* listOfItems = new string();
	BarCodeScanner barCodeScanner;
};

#endif // !CART_H