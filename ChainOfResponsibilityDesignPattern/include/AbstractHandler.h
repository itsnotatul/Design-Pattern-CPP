#pragma once
#include "Handler.h"
class AbstractHandler: public Handler{
    Handler* next_handler;
public:
    AbstractHandler();
    ~AbstractHandler();
    Handler* setNext(Handler* handler) override;
    string handle(string str) override;
};