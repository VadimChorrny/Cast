#include <iostream>
#include <string>
#include <vector>
#include "Grandpa.h"
#include "Daddy.h"
#include "Son.h"
using namespace std;

int main()
{
	//vector<Grandpa*> people{ new Grandpa("Igon"), new Daddy("Igor", "Alex"), new Son("Igor", "Alex", "Ivan") };
	Grandpa a("Anton");
	a.Sleep();
	Daddy* p = &a;
	//reinterpret_cast<Aspirant *>(p)->learn();

	/*static_cast<Aspirant*>(p)->learn();
	static_cast<Aspirant*>(p)->writeDyplom();*/
}