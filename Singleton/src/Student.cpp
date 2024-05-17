#include "Student.h"

Student::Student()
{
    cout<<"Student object CREATED"<<endl;
}

Student::~Student()
{
    cout<<"Student object DESTROYED"<<endl;
    // ###### cant put delete here 
    // The destructor is an instance method, meaning it operates on a specific object instance. 
    // The instancePtr is a static member, meaning it belongs to the class itself rather than any 
    // particular instance. Therefore, the destructor does not have direct control over the static 
    // member.
    // delete instancePtr;
}

Student* Student::getInstance()
{
    if(instancePtr == nullptr){
        instancePtr = new Student();
        return instancePtr;
    }   
    else{
        cout<<"Student object already created. Don't be smart"<<endl;
        return instancePtr;
    }
}

Student* Student::instancePtr = nullptr;
void Student::deleteInstance(){
    delete instancePtr;
    instancePtr = nullptr;
}