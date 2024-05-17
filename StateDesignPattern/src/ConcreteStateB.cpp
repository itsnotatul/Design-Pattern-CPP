#include "../include/ConcreteStateB.h"



ConcreteStateB::ConcreteStateB(/* args */)
{
    cout<<"ConcreteStateB Object Created"<<endl;
}

ConcreteStateB::~ConcreteStateB()
{
    cout<<"ConcreteStateB Object DESTROYED"<<endl;
}

void ConcreteStateB::handleRequest(Context& context){
        cout<<"Handling request as per state B"<<endl;
        cout<<context.x<<endl;
}

