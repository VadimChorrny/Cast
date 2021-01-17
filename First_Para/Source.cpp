#include <iostream>
#include <string>
#include <vector>
#include "Grandpa.h"
#include "Daddy.h"
#include "Son.h"
using namespace std;
void castFamily (vector<Grandpa* > tmp) 
{
	Daddy* daddy;
	Son* son;
	for (auto& i : tmp)
	{
		//i->print()
		if (typeid(*i) == typeid(Grandpa)) 
		{
			i->Sleep();
		}
		else if (typeid(*i) == typeid(Daddy))
		{
			daddy = static_cast<Daddy*>(i);
			daddy->Walk();
			daddy->Sleep();
		}
		else if (typeid(*i) == typeid(Son))
		{
			son = static_cast<Son*>(i);
			son->Walk();
			son->Play();
			son->Sleep();
		}
	}

}
int main()
{
	cout << "\n---------------People---------------\n";
	vector<Grandpa* >list{ new Grandpa("Ivan"),new Daddy("Ivan","Alex"),new Son("Ivanovich","Alexandrovich","Vadim") };

	Grandpa grandpa("Ivan");
	Daddy daddy("Ivan", "Ales");
	Son son("Ivan", "Alex", "Vadim");

	castFamily(list);
}