#pragma once
#include "State.h"
#include "Context.h"
class ConcreteStateB : public State{
public:
    ConcreteStateB();
    ~ConcreteStateB();
    void handleRequest(Context& context)override;
};