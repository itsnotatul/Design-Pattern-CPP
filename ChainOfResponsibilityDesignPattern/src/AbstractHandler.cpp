#include "AbstractHandler.h"

AbstractHandler::AbstractHandler(/* args */)
{
    cout<<"Abstract Handler object created"<<endl;
    next_handler = nullptr;
}

AbstractHandler::~AbstractHandler()
{
    cout<<"Abstract Handler object destroyed"<<endl;
}


Handler* AbstractHandler::setNext(Handler* handler)
{
    next_handler = handler;
    return handler;
}
string AbstractHandler::handle(string str) {
    if(next_handler != nullptr)
    {
        cout<<"sending request to next handler"<<endl;
        return next_handler->handle(str);
    }
    else
    {
        cout<<"No handler left to handle the given request"<<endl;
        return {};
    }
    return {};
}