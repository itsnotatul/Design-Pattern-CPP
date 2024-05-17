#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

ConcreteStateA::ConcreteStateA()
{
    cout<<"ConcreteStateA Object Created"<<endl;
}

ConcreteStateA::~ConcreteStateA()
{
    cout<<"ConcreteStateA Object DESTROYED"<<endl;
}


void ConcreteStateA::handleRequest1()
{
    cout<<"I am currently at state A and I only handle request 1, so lucky day for you"<<endl;
    cout<<"Request Handled"<<endl;
}

void ConcreteStateA::handleRequest2()
{
    cout<<"I am currently at state A and I only handle request 1, so unlucky day for you, i am transferring state from stateA to state B"<<endl;
    cout<<"Request not Handled, transfered"<<endl;
    _context->setState(new ConcreteStateB());
}