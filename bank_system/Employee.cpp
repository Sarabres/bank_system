#include "Employee.h"

Employee::Employee():Person()
{
	this->salary = 0.0;
}

Employee::Employee(int id, string name, string password, double salary):Person(id,name,password)
{
	this->salary = salary;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

double Employee::getSalary()
{
	return salary;
}

void Employee::display()
{
	Person::display();
	cout << "Balance is " << salary << endl;
}


