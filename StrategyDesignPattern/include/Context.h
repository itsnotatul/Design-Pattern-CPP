#pragma once
#include "Strategy.h"
#include "ConcreteStrategy1.h"
#include "ConcreteStrategy2.h"
#include<iostream>
using namespace std;

class Context
{
private:
   Strategy* _strategy;
public:
    Context(Strategy* strategy): _strategy(strategy){cout<<"Context Object CREATED"<<endl;}
    ~Context();
    void setStrategy(Strategy* strategy) { _strategy = strategy;}
    void doSomething(string x);
};

