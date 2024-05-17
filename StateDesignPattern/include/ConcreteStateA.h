
#pragma once
#include "State.h"
#include "Context.h"

class ConcreteStateA : public State{
public:
    ConcreteStateA();
    ~ConcreteStateA();
    void handleRequest(Context& context)override;
};