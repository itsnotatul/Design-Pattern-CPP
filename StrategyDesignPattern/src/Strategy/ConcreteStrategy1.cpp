#include "ConcreteStrategy1.h"

ConcreteStrategy1::ConcreteStrategy1()
{
    cout<<"ConcreteStrategy1 object CREATED"<<endl;   
}

ConcreteStrategy1::~ConcreteStrategy1()
{
    cout<<"ConcreteStrategy1 object DESTROYED"<<endl;
}

void ConcreteStrategy1::algorithm(string& str)
{
    cout<<"I am an algorithm of ConcreteStrategy1 "<<str<<endl;
}