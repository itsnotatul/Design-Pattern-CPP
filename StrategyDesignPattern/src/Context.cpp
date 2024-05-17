#include "Context.h"

Context::~Context()
{
    cout<< "Context object DESTRPYED"<<endl;
}

void Context::doSomething(string x)
{
    if(_strategy){
        _strategy->algorithm(x);
    }
    else{
        cout<<"Strategy not set "<<endl;
    }
}
