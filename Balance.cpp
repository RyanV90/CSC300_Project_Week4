//
//  Balance.cpp
//  GroceryStore
//
//  Created by OE Family on 8/29/20.
//  Copyright © 2020 OE Family. All rights reserved.
//
#include "Balance.h"
#include "Cart.h"

Balance:: Balance(){
    taxRate = .085;
    total = 0;
}

/* calculateTotal()

Calculates the total balance by taking the subtotal and applying a tax.
*/

void Balance::calculateTotal(Cart c){
    total = (c.getSubTotal()* taxRate)+c.getSubTotal();
}
double Balance::getTotal(){return total;}