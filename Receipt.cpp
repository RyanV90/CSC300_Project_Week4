//
//  Receipt.cpp
//  GroceryStore
//
//  Created by OE Family on 8/29/20.
//  Copyright © 2020 OE Family. All rights reserved.
//

#include "Receipt.h"
Receipt:: Receipt(){
    receiptNumber = 0;
}
void Receipt:: printReceipt(Cart c, Balance b){
    cout << "Receipt number: " << receiptNumber << endl;
    c.getListOfItems(c.getNumberOfItems());
    cout << "Total: " << b.getTotal() << endl;
}
void Receipt:: nextReceiptNumber(){
    receiptNumber++;
}

