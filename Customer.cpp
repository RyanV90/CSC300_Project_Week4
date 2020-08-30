#include "Customer.h"

Customer::Customer()
{
	age = 0;
	address = {};
	phone = {};
  email = {}
}

string Customer::toString()
{
	stringstream customer;
	customer << "Verified";
	return customer.str();
}
