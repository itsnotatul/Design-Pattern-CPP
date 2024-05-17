#include <iostream>
#include<string>
#include "Context.h"
#include "Strategy.h"
#include "ConcreteStrategy1.h"
#include "ConcreteStrategy2.h"

using namespace std;

int main(){
    Strategy* _strategy = new ConcreteStrategy1();
    Context* _context = new Context(_strategy);
    string x = "hello";
    _context->doSomething(x);

    delete _strategy;

    _strategy = new ConcreteStrategy2();
    _context->setStrategy(_strategy);
    x = "yeah";
    _context->doSomething(x);

    delete _strategy;
    delete _context;
    return 0;
}