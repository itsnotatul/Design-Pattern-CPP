#include "SquirellHandler.h"


SquirellHandler::SquirellHandler(/* args */)
{
    cout<<"SquirellHandler object Created"<<endl;
}

SquirellHandler::~SquirellHandler()
{
    cout<<"SquirellHandler object DESTROYED"<<endl;
}

string SquirellHandler::handle(string str)
{
    if(str == "nut"){
        string ret = "Squirrel: I'll eat the " + str;
        return ret;
    }
    else return AbstractHandler::handle(str);
}
