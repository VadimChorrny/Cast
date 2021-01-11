#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
public:
	Person(const string& name) : name(name)
	{}
	void print() const;
private:
	string name;
};

