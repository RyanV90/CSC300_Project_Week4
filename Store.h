#ifndef STORE_H
#define STORE_H

#include <iostream>

using namespace std;

class Store {

public:
	Store();
	void setName(string);
  void setLocation(string);
  void setHours(string);
  void setPhone(string);
  void toString();

private:
	string name;
  string location;
  string hours;
  string phone;
};

#endif // !STORE_H
