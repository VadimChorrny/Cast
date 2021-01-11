#pragma once
#include <string>
#include <iostream>
using namespace std;
class Grandpa
{
public:
	Grandpa(const string& name) : name(name){}
	virtual void Sleep();
	string getName() const;
private:
	string name;
};

