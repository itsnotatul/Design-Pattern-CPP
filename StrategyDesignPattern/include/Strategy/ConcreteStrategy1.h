#pragma once
#include "Strategy.h"

class ConcreteStrategy1 : public Strategy
{
public:
    ConcreteStrategy1();
    ~ConcreteStrategy1();
    void algorithm(string& str) override;
};



