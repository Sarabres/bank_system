
#include <iostream>
using namespace std;
#include"Client.h"
#include"Validation.h"

int main()
{
	Client c1(001,"Sarah","sfsgdgdgsdb",1000.00);
	c1.display();
	c1.deposit(2000);
	c1.checkBalance();
	Client c2;
	c1.transferTo(1000, c2);
	c1.checkBalance();
	c2.checkBalance();
}

