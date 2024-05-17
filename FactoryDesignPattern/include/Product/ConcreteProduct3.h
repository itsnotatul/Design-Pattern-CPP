#pragma once
#include "Iproduct.h"

class ConcreteProduct3 : public Iproduct{
public:
    ConcreteProduct3();
    ~ConcreteProduct3();
    string operation() override;
};