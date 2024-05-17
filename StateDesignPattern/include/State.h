#pragma once
#include <iostream>
using namespace std;


class Context;

class State{
public:
    virtual void handleRequest(Context& context)=0;
    virtual ~State()= default;
};