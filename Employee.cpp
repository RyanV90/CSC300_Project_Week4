
#include "Employee.h"

Employee::Employee()
{
	name = {};
	employeeID = {};
	position = {};
  address = {};
  phone = {};
	email = {};
}

void Employee::setName()
{
	this->name = name;
}

void Employee::setEmployeeID()
{
	this->employeeID = employeeID;
}

void Employee::setPosition()
{
	this->position = position;
}

void Employee::setAddress()
{
	this->address = address;
}

void Employee::setPhone()
{
	this->phone = phone;
}

void Employee::setEmail()
{
	this->email = email;
}

void Employee::toString()
{
	stringstream employee;
	employee << "Verified";
	return employee.str();
}
