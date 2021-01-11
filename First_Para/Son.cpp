#include "Son.h"

string Son::getNameSon() const
{
    return nameSon;
}

void Son::Sleep()
{
    cout << "Son:\t" << getNameSon() << "is sleeping!" << endl;
}

void Son::Walk()
{
    cout << "Son:\t" << getNameSon() << "is walked!" << endl;
}

void Son::Play()
{
    cout << "Son:\t" << getNameSon() << "played!" << endl;
}
