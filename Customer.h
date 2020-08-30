#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

using namespace std;

class Customer {

public:
	Customer();
	void toString();

private:
  string name;
  int age;
  string address;
  string phone;
  string email;
};

#endif // !CUSTOMER_H