#include "../include/DogHandler.h"


DogHandler::DogHandler(/* args */)
{
    cout<<"DogHandler object Created"<<endl;
}

DogHandler::~DogHandler()
{
    cout<<"DogHandler object DESTROYED"<<endl;
}

string DogHandler::handle(string str)
{
    if(str == "bone"){
        return "I'll eat the " + str+ " .\n";
    }
    else return AbstractHandler::handle(str);
}
