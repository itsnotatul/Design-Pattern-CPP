#include "../include/Product/Iproduct.h"
#include "../include/Product/ConcreteProduct2.h"

ConcreteProduct2::ConcreteProduct2()
{
    cout<<"ConcreteProduct1 object CREATED"<<endl;
}

ConcreteProduct2::~ConcreteProduct2()
{
    cout<<"ConcreteProduct1 object DESTROYED"<<endl;
}

string ConcreteProduct2::operation(){
    return "I am a ConcreteProduct2 and this is my operation";
}