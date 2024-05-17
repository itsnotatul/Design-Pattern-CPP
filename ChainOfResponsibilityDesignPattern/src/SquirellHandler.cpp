#include "../include/SquirellHandler.h"


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
    if(str == "nuts"){
        return "I'll eat the " + str+ " .\n";
    }
    else return AbstractHandler::handle(str);
}
