#pragma once
#include <iostream>
using namespace std;
class Person
{
protected:
	int id;
	string name;
	string password;
public:
	Person();
	Person(int id, string name, string password);
	void setID(int id);
	void setName(string name);
	void setPassword(string password);
	int getID();
	string getName();
	string getPassword();
	void display();
};
 
