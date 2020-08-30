#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "InventoryItem.h"

using namespace std;

class Inventory {

public:
	Inventory();
	void createInventory();
	void displayInventory();

private:
	InventoryItem inventoryItems[10];
};

#endif // !INVENTORY_H