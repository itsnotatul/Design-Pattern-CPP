#include "../include/Context.h"



Context::Context():_state(std::make_unique<ConcreteStateA>()){
        cout<<"Context Object Created"<<endl;
}

Context::~Context()
{
    cout<<"Context Object DESTROYED"<<endl;
}

void Context::setState(std::unique_ptr<State> _state){
        this->_state = std::move(_state);
    }

void Context::stateA_request(){
    setState(make_unique<ConcreteStateA>());
}

void Context::stateB_request(){
    setState(make_unique<ConcreteStateB>());
}

void Context::handleRequest(){
    _state->handleRequest(*this);
    x++;
}

