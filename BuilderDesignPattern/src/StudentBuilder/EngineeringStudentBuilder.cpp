#include "EngineeringStudentBuilder.h"

EngineeringStudentBuilder::EngineeringStudentBuilder()
{
    cout<< "EngineeringStudentBuilder object CREATED"<<endl;
    _student = new Student();
}

EngineeringStudentBuilder::~EngineeringStudentBuilder()
{
    cout<< "EngineeringStudentBuilder object DESTROYED"<<endl;
    delete _student;
}

void EngineeringStudentBuilder::buildAge()
{
    _student->setAge(18);  
}

void EngineeringStudentBuilder::buildRollNo()
{
    _student->setRollNo(40);   
}

void EngineeringStudentBuilder::buildSubjects()
{
    vector<string> _subjects ={"OS","CS", "ED"};
    _student->setSubjects(_subjects);
}