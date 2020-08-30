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
	double getSubTotal() const;
	void setSubTotal(double subtotal);
	bool getIsOperational() const;
	void setIsOperational(bool isOperational);
	void getListOfItems();
	void addItemToCart();
	void removeItemFromCart();

private:
	int numberOfItems;
	double subTotal;
	bool isOperational;
	string listOfItems[10];
	BarCodeScanner barCodeScanner;
};

#endif // !CART_H