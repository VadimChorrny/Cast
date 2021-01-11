#pragma once
#include "Daddy.h"
class Son :
    public Daddy
{
public:
	Son(const string& nameGrandpa, const string& name,const string& nameSon) : Daddy(nameGrandpa,name),nameSon(nameSon){}
	string getNameSon() const;
	void Sleep() override;
	void Walk() override;
	virtual void Play(); 
private:
    string nameSon;
};

