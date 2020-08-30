//
//  Receipt.h
//  GroceryStore
//
//  Created by OE Family on 8/29/20.
//  Copyright © 2020 OE Family. All rights reserved.
//

#ifndef Receipt_h
#define Receipt_h
#include<iostream>
using namespace std;
#include <stdio.h>
#include "Cart.h"
#include "Balance.h"

class Receipt{
private:
    unsigned long receiptNumber;
public:
    Receipt();
    void printReceipt(Cart,Balance);
    void nextReceiptNumber();
};
#endif /* Receipt_h */