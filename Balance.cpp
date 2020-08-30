//
//  Balance.cpp
//  GroceryStore
//
//  Created by OE Family on 8/29/20.
//  Copyright © 2020 OE Family. All rights reserved.
//
#include<iostream>
#include "Balance.h"
#include "Cart.h"

Balance:: Balance(){
    taxRate = .085;
}

double Balance::calculateTotal(Cart c){
    total = (c.getSubTotal()* taxRate)+c.getSubTotal();
}
double Balance::getTotal(){return total;}
