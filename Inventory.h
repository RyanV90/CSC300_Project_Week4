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
	InventoryItem inventoryItems[10];

private:
	
};

#endif // !INVENTORY_H