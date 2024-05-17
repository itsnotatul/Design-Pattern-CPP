#include "MonkeyHandler.h"


MonkeyHandler::MonkeyHandler(/* args */)
{
    cout<<"MonkeyHandler object Created"<<endl;
}

MonkeyHandler::~MonkeyHandler()
{
    cout<<"MonkeyHandler object DESTROYED"<<endl;
}

string MonkeyHandler::handle(string str)
{
    if(str == "banana"){
        return "Monkey: I'll eat the " + str + ".\n";
    }
    else return AbstractHandler::handle(str);
}
