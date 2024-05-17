#include "ConcreteStateB.h"
#include "ConcreteStateA.h"

ConcreteStateB::ConcreteStateB(/* args */)
{
    cout<<"ConcreteStateB Object Created"<<endl;
}

ConcreteStateB::~ConcreteStateB()
{
    cout<<"ConcreteStateB Object DESTROYED"<<endl;
}

void ConcreteStateB::handleRequest1()
{
    cout<<"I am currently at state B and I only handle request 2, so unlucky day for you, i am transferring state from stateB to state A"<<endl;
    cout<<"Request not Handled, transfered"<<endl;
    _context->setState(new ConcreteStateA());
}

void ConcreteStateB::handleRequest2()
{
    cout<<"I am currently at state B and I only handle request 2, so lucky day for you"<<endl;
    cout<<"Request Handled"<<endl;
}