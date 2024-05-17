#pragma once
#include "Student.h"
#include "StudentBuilder.h"

class MbaStudentBuilder : public StudentBuilder
{
private:
   Student* _student;
public:
    MbaStudentBuilder();
    ~MbaStudentBuilder();
    void buildAge() override;
    void buildRollNo() override;
    void buildSubjects() override;
    Student* getStudent() override{ return _student;}
};




