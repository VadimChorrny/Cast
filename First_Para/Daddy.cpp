#include "Daddy.h"

void Daddy::Sleep()
{
	cout << "Daddy " << getNameDaddy() << " is sleep!" << endl;
}

void Daddy::Walk()
{
	cout << "Daddy " << getNameDaddy() << " walked!" << endl;
}

string Daddy::getNameDaddy()
{
	return nameDaddy;
}
