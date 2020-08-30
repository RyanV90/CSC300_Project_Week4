#include "InventoryItem.h"

InventoryItem::InventoryItem()
{
	itemName = " ";
	itemType = " ";
	brand = " ";
	price = 0.0;
	hasPicture = false;
}

InventoryItem::InventoryItem(string itemName, string itemType, string brand, double price, bool hasPicture)
{
	this->itemName = itemName;
	this->itemType = itemType;
	this->brand = brand;
	this->price = price;
	this->hasPicture = hasPicture;
}

string InventoryItem::getItemName() const
{
	return itemName;
}

void InventoryItem::setItemName(string itemName)
{
	this->itemName = itemName;
}

string InventoryItem::getItemType() const
{
	return itemType;
}

void InventoryItem::setItemType(string itemType)
{
	this->itemType = itemType;
}

string InventoryItem::getItemBrand() const
{
	return brand;
}

void InventoryItem::setItemBrand(string itemBrand)
{
	this->brand = brand;
}

double InventoryItem::getPrice() const
{
	return price;
}

void InventoryItem::setPrice(double price)
{
	this->price = price;
}

bool InventoryItem::getHasPicture() const
{
	return hasPicture;
}

void InventoryItem::setHasPicture(bool hasPicture)
{
	this->hasPicture = hasPicture;
}

void InventoryItem::toString()
{
	cout << "Name: " << itemName << " Type: " << itemType << " Brand: " << brand << " Price: $" << fixed << setprecision(2) << price << endl;
}