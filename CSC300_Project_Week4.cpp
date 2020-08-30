/* CSC300_Project_Week4.cpp

Tests funtionality of customer adding/removing items from cart.
Then customer completes purchases and gets a receipt.
*/

//#include <iostream>
#include "Inventory.h"
#include "Cart.h"
#include "Balance.h"
#include "Receipt.h"

//using namespace std;

int main()
{
    Inventory inventory;
    Cart cart;
    Balance balance;
    Receipt receipt;

    //View the inventory
    inventory.displayInventory();
    
    //Add item to cart
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
    cart.calculateSubTotal(inventory);
    balance.calculateTotal(cart);
    cout << "\nYour final balance is: $" << balance.getTotal() << endl;
    
    //Print Recipt
    receipt.printReceipt(cart, balance);
}