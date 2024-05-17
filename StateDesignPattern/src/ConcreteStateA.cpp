#include "../include/ConcreteStateA.h"



ConcreteStateA::ConcreteStateA(/* args */)
{
    cout<<"ConcreteStateA Object Created"<<endl;
}

ConcreteStateA::~ConcreteStateA()
{
    cout<<"ConcreteStateA Object DESTROYED"<<endl;
}

void ConcreteStateA::handleRequest(Context& context){
        cout<<"Handling request as per state A"<<endl;
        cout<<context.x<<endl;
    }

