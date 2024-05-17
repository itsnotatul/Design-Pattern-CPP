#include "Director.h"
#include<iostream>
using namespace std;

Director::Director()
{
    cout<<"Director object CREATED"<<endl;
    _student_builder = nullptr;
}

Director::~Director()
{
    cout<<"Director object DESTROYED"<<endl;    
}

void Director::Build()
{
    _student_builder->buildAge();
    _student_builder->buildRollNo();
    _student_builder->buildSubjects();
}