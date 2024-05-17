#pragma once
#include "Student.h"
#include "StudentBuilder.h"

class EngineeringStudentBuilder : public StudentBuilder
{
private:
   Student* _student;
public:
    EngineeringStudentBuilder();
    ~EngineeringStudentBuilder();
    void buildAge() override;
    void buildRollNo() override;
    void buildSubjects() override;
    Student* getStudent() override{ return _student;}
};




