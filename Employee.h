#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;

class Employee {

public:
	Employee();
	void setName(string);
	void setEmployeeID(string);
	void setPosition(string);
	void setAddress(string);
	void setPhone(string);
	void setEmail(string);
	void toString();

private:
	string name;
	sting employeeID;
  string position;
  string address;
  string phone;
  string email;
};

#endif // !EMPLOYEE_H
