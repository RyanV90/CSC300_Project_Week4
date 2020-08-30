#include <iostream>
#include "Inventory.h"
#include "Cart.h"
#include "Balance.h"
#include "Receipt.h"

using namespace std;

int main()
{
    //View the inventory
    Inventory inventory;
    inventory.displayInventory();
    
    //Add item to cart
    Cart cart;
    cart.addItemToCart();
    
    //Display cart
    cout << "\nCurrent Items in Your Cart:" << endl;
    cart.getListOfItems();
    
    //remove item from cart
    cart.removeItemFromCart();
    
    //Display cart
    cout << "\nCurrent Items in Your Cart:" << endl;
    cart.getListOfItems();
    
    //Complete purchase
    Balance balance;
    cart.calculateSubTotal(inventory);
    balance.calculateTotal(cart);
    cout << "\nYour final balance is: $" << balance.getTotal() << endl;
    
    //Print Recipt
    Receipt receipt;
    receipt.printReceipt(cart, balance);
}