#include "Inventory.h"

Inventory::Inventory()
{
	inventoryItems[0] = InventoryItem("Broccoli", "Produce", "Broc Co.", 13.00, true);
	inventoryItems[1] = InventoryItem("Carrot", "Produce", "Carrots R' Us", 3.35, true);
	inventoryItems[2] = InventoryItem("Squash", "Produce", "Squash It", 8.75, true);
	inventoryItems[3] = InventoryItem("Green Beans", "Produce", "Beany", 12.66, true);
	inventoryItems[4] = InventoryItem("Celery", "Produce", "Cer-er-ee LLC", 10.13, true);
	inventoryItems[5] = InventoryItem("Newport", "Tobacco", "Newport", 9.00, true);
	inventoryItems[6] = InventoryItem("Marlboro Red", "Tobacco", "Marlboro", 8.95, true);
	inventoryItems[7] = InventoryItem("Whiskey", "Alcohol", "Whiskey Iz Cool", 26.00, true);
	inventoryItems[8] = InventoryItem("Wine", "Alcohol", "Vineyards of Atlantis", 13.50, true);
	inventoryItems[9] = InventoryItem("Beer", "Alcohol", "We Bare Beer", 8.75, true);
}

void Inventory::displayInventory()
{
	cout << "Make your selections from our inventory!" << endl << endl;
	
	for (int i = 0; i < 10; i++)
	{
		inventoryItems[i].toString();
	}
}
