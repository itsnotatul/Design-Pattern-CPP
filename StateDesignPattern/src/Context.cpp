#include "Context.h"

Context::Context():_state(nullptr){ 
    cout<<"Context Object Created"<<endl;
    setState(new ConcreteStateA()); // ###### default state ######
}

Context::~Context()
{
    cout<<"Context Object DESTROYED"<<endl;
    delete _state;
}

void Context::setState(State* state)
{
    cout<<"Setting state"<<endl;
    if(_state !=nullptr) delete _state;
    _state = state;
    _state->setContext(this);
}

void Context::Request1()
{
    _state->handleRequest1();
}

void Context::Request2()
{
    _state->handleRequest2();
}

