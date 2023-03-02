#include "Admin.h"

Admin::Admin():Person()
{
	this->salary = 0.0;
}

Admin::Admin(int id, string name, string password, double salary):Person(id,name,password)
{
	this->salary = salary;
}

void Admin::setSalary(double salary)
{
	this->salary = salary;
}

double Admin::getSalary()
{
	return salary;
}


void Admin::display()
{
	Person::display();
	cout << "Balance: " << salary << endl;
}