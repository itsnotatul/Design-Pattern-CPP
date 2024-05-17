#pragma once
#include "AbstractHandler.h"

class DogHandler: public AbstractHandler{
public:
    DogHandler();
    ~DogHandler();
    string handle(string str) override;
};