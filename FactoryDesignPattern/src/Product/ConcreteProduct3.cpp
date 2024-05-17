#include "Product/Iproduct.h"
#include "ConcreteProduct3.h"

ConcreteProduct3::ConcreteProduct3()
{
    cout<<"ConcreteProduct3 object CREATED"<<endl;
}

ConcreteProduct3::~ConcreteProduct3()
{
    cout<<"ConcreteProduct3 object DESTROYED"<<endl;
}

string ConcreteProduct3::operation(){
    return "I am a ConcreteProduct3 and this is my operation";
}