#pragma once
#include "Strategy.h"

class ConcreteStrategy2 : public Strategy
{
public:
    ConcreteStrategy2();
    ~ConcreteStrategy2();
    void algorithm(string& str) override;
};



