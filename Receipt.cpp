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

/* printReceipt()

Prints a reciept with receipt number, cart contents, and a total.
*/

void Receipt:: printReceipt(Cart c, Balance b){
    cout << "\nReceipt number: " << receiptNumber << endl;
    c.getListOfItems();
    cout << "Total: $" << b.getTotal() << endl;
}

/* nextReceiptNumber()

Generates consecutive receipt numbers.
*/

void Receipt:: nextReceiptNumber(){
    receiptNumber++;
}

