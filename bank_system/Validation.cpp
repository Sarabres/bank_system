#include "Validation.h"

bool Validation::validateName(string name)
{
	for (int i = 0; i < name.size(); i++) {
		if (!isalpha(name[i]) || name.size() < 5 || name.size() > 20) {
			return false;
		}
		return true;
	}
}

bool Validation::validatePassword(string password)
{
	for (int i = 0; i < password.size(); i++) {
		if (password.size() < 8 || password.size() > 20) {
			return false;
		}
	}
	return true;
}
