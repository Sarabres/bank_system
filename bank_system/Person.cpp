#include "Person.h"
#include "Validation.h"


Person::Person()
{
	this->id = 0;
	this->name = " ";
	this->password = " ";
}

Person::Person(int id, string name, string password)
{
	this->id = id;
	setName(name);
	setPassword(password);
}

void Person::setID(int id)
{
	this->id = id;
}

void Person::setName(string name)
{
	if (Validation::validateName(name)) {
		this->name = name;
	}
	else {
		cout << "Error" <<endl <<"Please Enter a Valid Name" << endl;
	}
}

void Person::setPassword(string password)
{
	if (Validation::validatePassword(password)) {
		this->password = password;
	}
	else {
		cout << "Error"<<endl<<"Please Enter a Valid Password" << endl;
	}
}

int Person::getID()
{
	return id;
}

string Person::getName()
{
	return name;
}

string Person::getPassword()
{
	return password;
}

void Person::display()
{
	cout << "ID : " << id << endl;
	cout << "Name : " << name << endl;
	cout << "Password : " << password << endl;
}
