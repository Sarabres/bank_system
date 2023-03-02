#pragma once
#include "Person.h"
class Admin : public Person
{
	double salary;
public:
	Admin();
	Admin(int id, string name, string password,double salary);
	void setSalary(double salary);
	double getSalary();
	void display();
};

