#include "Person.h"



void Person::print() const
{
	(*const_cast<string*>(&name))[0] = toupper(name[0]);

	cout << "Name:\t" << name << endl;
}
