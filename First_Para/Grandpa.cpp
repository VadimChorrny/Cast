#include "Grandpa.h"

void Grandpa::Sleep()
{
	cout << "Grandpa " << getName() << " is sleeping!" << endl;
}



string Grandpa::getName() const
{
	return name;
}
