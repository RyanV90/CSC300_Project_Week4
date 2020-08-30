#include "Cart.h"

Cart::Cart()
{
	numberOfItems = 0;
	subTotal = 0.0;
	isOperational = true;
	listOfItems = {};
}

int Cart::getNumberOfItems() const
{
	return numberOfItems;
}

void Cart::setNumberOfItems(int numberOfItems)
{
	this->numberOfItems = numberOfItems;
}

double Cart::getSubTotal() const
{
	return subTotal;
}

void Cart::setSubTotal(double subtotal)
{
	this->subTotal = subtotal;
}

bool Cart::getIsOperational() const
{
	return isOperational;
}

void Cart::setIsOperational(bool isOperational)
{
	this->isOperational = isOperational;
}

void Cart::getListOfItems()
{
	for (int i = 0; i < numberOfItems; i++)
	{
		cout << &listOfItems[i];
	}
}

void Cart::addItemToCart(string itemName)
{
	listOfItems[numberOfItems] = itemName;
	numberOfItems++;
}

/*
remove item from cart
*/

void Cart::removeItemFromCart(string itemName)
{
	int itemToRemove = 0;

	for (int i = 0; i < numberOfItems; i++)
	{
		if (listOfItems[i] == itemName)
		{
			itemToRemove = i;
		}
	}

	for (int j = itemToRemove; j < numberOfItems; j++)
	{
		listOfItems[j] = listOfItems[j + 1];
	}
	numberOfItems--;
}