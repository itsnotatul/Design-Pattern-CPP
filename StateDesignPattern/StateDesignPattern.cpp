#include<iostream>
#include<memory>
#include "include/Context.h"
#include "include/ConcreteStateA.h"
#include "include/ConcreteStateB.h"
#include "include/State.h"
using namespace std;



int main(){
    Context obj;
    obj.handleRequest();
    obj.stateA_request();
    obj.handleRequest();
    obj.stateB_request();
    obj.handleRequest();
    return 0;
}