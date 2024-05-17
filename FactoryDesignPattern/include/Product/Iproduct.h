#pragma once
#include <iostream>
#include <string>
#include "../common.h"
using namespace std;

class Iproduct{
public:
    virtual ~Iproduct(){}
    virtual string operation() =0; 
};