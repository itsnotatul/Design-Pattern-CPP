#pragma once
#include<iostream>
#include<memory>
#include "State.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

using namespace std;

class Context{
    State* _state;
public:
    int x =2;
    Context();
    ~Context();
    void setState(State* _state);
    void Request1();
    void Request2();
};