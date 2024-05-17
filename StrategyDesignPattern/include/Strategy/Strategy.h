#pragma once
#include <iostream>
#include <string>
using namespace std;

class Strategy
{
public:
    virtual ~Strategy() = default;
    virtual void algorithm(string& str) = 0;
};



