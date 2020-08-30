#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <iostream>
#include <string>

using namespace std;

class InventoryItem {

public:
	InventoryItem();
	InventoryItem(string itemName, string itemType, string brand, double price, bool hasPicture);
	string getItemName() const;
	void setItemName(string itemName);
	string getItemType() const;
	void setItemType(string itemType);
	string getItemBrand() const;
	void setItemBrand(string itemBrand);
	double getPrice() const;
	void setPrice(double price);
	bool getHasPicture() const;
	void setHasPicture(bool hasPicture);
	string toString();

private:
	string itemName;
	string itemType;
	string brand;
	double price;
	bool hasPicture;
};

#endif // !INVENTORYITEM_H