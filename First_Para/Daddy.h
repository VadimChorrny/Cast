#pragma once
#include "Grandpa.h"
class Daddy :
    public Grandpa
{
public:
    Daddy(const string& nameGrandpa , const string& name) : Grandpa(nameGrandpa), nameDaddy(name){}
    void Sleep() override;
    virtual void Walk();
    string getNameDaddy();
private:
    string nameDaddy;
};

