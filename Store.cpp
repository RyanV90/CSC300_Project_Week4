#include "Store.h"

Store::Store()
{
	name = {};
	location = {};
	hours = {};
  phone = {};
}

void Store::setName()
{
	this->name = name;
}

void Store::setLocation()
{
	this->employeeID = employeeID;
}

void Store::setHours()
{
	this->position = position;
}

void Store::toString()
{
	stringstream store;
	store << "Store";
	return store.str();
}
