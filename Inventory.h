/* Inventory.h

Creates and displays the inventory.
*/

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
};

#endif // !INVENTORY_H