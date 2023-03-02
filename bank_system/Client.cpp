#include "Client.h"

Client::Client()
{
	this->balance = 0.0;
}

Client::Client(int id, string name, string password, double balance) :Person(id, name, password)
{
	this->balance = balance;
}

void Client::setBalance(double balance)
{
	this->balance = balance;
}

double Client::getBalance()
{
	return balance;
}

void Client::deposit(double amount)
{
	this->balance += amount;
}

void Client::withdraw(double amount)
{
	this->balance -= amount;
}

void Client::transferTo(double amount, Client& recipient)
{
	this->balance -= amount;
	recipient.balance += amount;
}

void Client::checkBalance()
{
	cout << "Your Balance is " << this->balance << endl;
}

void Client::display()
{
	Person::display();
	cout << "Balance: " << balance << endl;
}
