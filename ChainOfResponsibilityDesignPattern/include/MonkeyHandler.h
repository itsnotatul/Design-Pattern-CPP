#pragma once
#include "AbstractHandler.h"

class MonkeyHandler: public AbstractHandler{
public:
    MonkeyHandler();
    ~MonkeyHandler();
    string handle(string str) override;
};