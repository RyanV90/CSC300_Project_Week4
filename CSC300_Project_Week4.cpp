#include <iostream>
#include "Inventory.h"
#include "Cart.h"
#include "Balance.h"

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
    cart.getListOfItems();
    //remove item from cart
    //cart.removeItemFromCart();
    //Display cart
    //cart.getListOfItems();
    //Complete purchase
    Balance balance;
    cart.calculateSubTotal(inventory);
    balance.calculateTotal(cart);
    cout << "\nYour final balance is: $" << balance.getTotal() << endl;
    //Print Recipt
}