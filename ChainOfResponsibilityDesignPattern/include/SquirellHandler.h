#pragma once
#include "AbstractHandler.h"

class SquirellHandler: public AbstractHandler{
public:
    SquirellHandler();
    ~SquirellHandler();
    string handle(string str) override;
};