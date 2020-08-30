//
//  Receipt.hpp
//  GroceryStore
//
//  Created by OE Family on 8/29/20.
//  Copyright © 2020 OE Family. All rights reserved.
//

#ifndef Receipt_hpp
#define Receipt_hpp
#include<iostream>
using namespace std;
#include <stdio.h>
#include "Cart.h"
#include "Balance.hpp"

class Receipt{
private:
    unsigned long receiptNumber;
public:
    Receipt();
    void printReceipt(Cart,Balance);
    void nextReceiptNumber();
};
#endif /* Receipt_hpp */
