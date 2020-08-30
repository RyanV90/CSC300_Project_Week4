#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "InventoryItem.h"
#include <iomanip>

using namespace std;

class Inventory {

public:
	Inventory();
	void displayInventory();

private:
	InventoryItem inventoryItems[10];
};

#endif // !INVENTORY_H