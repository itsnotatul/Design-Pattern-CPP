#pragma once
#include "Iproduct.h"

class ConcreteProduct2 : public Iproduct{
public:
    ConcreteProduct2();
    ~ConcreteProduct2();
    string operation() override;
};