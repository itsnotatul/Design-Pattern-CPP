#pragma once
#include<string>
#include<iostream>
using namespace std;

class Handler{
public:
    virtual Handler* setNext(Handler* handler) = 0;
    virtual string handle(string str) = 0;
};