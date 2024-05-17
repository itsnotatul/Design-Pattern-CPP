#include "../include/Product/Iproduct.h"
#include "../include/Product/ConcreteProduct1.h"

ConcreteProduct1::ConcreteProduct1()
{
    cout<<"ConcreteProduct1 object CREATED"<<endl;
}

ConcreteProduct1::~ConcreteProduct1()
{
    cout<<"ConcreteProduct1 object DESTROYED"<<endl;
}

string ConcreteProduct1::operation(){
    return "I am a ConcreteProduct1 and this is my operation";
}