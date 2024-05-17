#include "ConcreteStrategy2.h"

ConcreteStrategy2::ConcreteStrategy2()
{
    cout<<"ConcreteStrategy2 object CREATED"<<endl;   
}


ConcreteStrategy2::~ConcreteStrategy2()
{
    cout<<"ConcreteStrategy1 object DESTROYED"<<endl;
}

void ConcreteStrategy2::algorithm(string& str)
{
    cout<<"I am an algorithm of ConcreteStrategy2 "<<str<<endl;    
}