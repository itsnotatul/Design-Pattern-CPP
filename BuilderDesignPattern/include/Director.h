#pragma once
#include "StudentBuilder.h"

class Director
{
private:
    StudentBuilder* _student_builder;
public:
    Director();
    ~Director();
    void setBuilder(StudentBuilder* _student_builder){ this->_student_builder = _student_builder;}
    void Build();
};




