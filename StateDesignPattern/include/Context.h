#pragma once
#include<iostream>
#include<memory>
#include "State.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

using namespace std;

class Context{
    std::unique_ptr<State> _state;
public:
    int x =2;
    Context();
    ~Context();
    void setState(std::unique_ptr<State> _state);
    void stateA_request();
    void stateB_request();
    void handleRequest();
};