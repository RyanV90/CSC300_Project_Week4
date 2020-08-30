#include "Cart.h"

Cart::Cart()
{
	numberOfItems = 0;
	subTotal = 0.0;
	isOperational = true;
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
	cout << "\nCurrent Items in Your Cart:" << endl;
	for (int i = 0; i < numberOfItems; i++)
	{
		cout << listOfItems[i] << endl;
	}
}

void Cart::addItemToCart()
{
	string itemName;
	
	while (itemName != "q" && numberOfItems < 10)
	{
		cout << "\nEnter name of item to add (Type q to quit): ";
		cin >> itemName;

		if (itemName != "q")
		{
			listOfItems[numberOfItems] = itemName;
			numberOfItems++;
			cout << "\nYou have successfully added " << itemName << " to your cart." << endl;
		}
	}
}

/*
remove item from cart
*/

void Cart::removeItemFromCart()
{
	
	string itemName;

	while (itemName != "q" && numberOfItems < 10)
	{
		cout << "\nEnter name of item to remove (Type q to quit): ";
		cin >> itemName;

		int itemToRemove = 0;

		if (itemName != "q")
		{

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

			cout << "\nYou have successfully remmoved " << itemName << " from your cart." << endl;
		}
	}
}