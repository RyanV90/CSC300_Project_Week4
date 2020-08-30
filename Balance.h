//
//  Balance.h
//  GroceryStore
//
//  Created by OE Family on 8/29/20.
//  Copyright © 2020 OE Family. All rights reserved.
//

#ifndef Balance_h
#define Balance_h
#include<iostream>
#include "Cart.h"
using namespace std;
#include <stdio.h>
class Balance{
private:
    double taxRate;
    double total;
public:
    Balance();
    double calculateTotal(Cart);
    double getTotal();
};
#endif /* Balance_h */
