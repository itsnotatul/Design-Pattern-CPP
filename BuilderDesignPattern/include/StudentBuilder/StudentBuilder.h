#pragma once
#include "Student.h"
class StudentBuilder
{
public:
    virtual ~StudentBuilder(){};
    virtual void buildAge() = 0;
    virtual void buildRollNo() = 0;
    virtual void buildSubjects() = 0;
    virtual Student* getStudent() =0 ;
};