#pragma once
#include "State.h"
#include "Context.h"
class ConcreteStateB : public State{
public:
    ConcreteStateB();
    ~ConcreteStateB();
    void handleRequest1()override;
    void handleRequest2() override;
};