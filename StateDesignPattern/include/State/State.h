#pragma once
#include <iostream>
using namespace std;


class Context;

class State{
protected:
    Context* _context;    
public:
    virtual void handleRequest1()=0;
    virtual void handleRequest2()=0;
    void setContext(Context* _context){this->_context = _context;}
    virtual ~State()= default;
};