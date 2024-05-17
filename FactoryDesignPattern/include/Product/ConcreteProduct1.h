#pragma once
#include "Iproduct.h"

class ConcreteProduct1 : public Iproduct{
public:
    ConcreteProduct1();
    ~ConcreteProduct1();
    string operation() override;
};