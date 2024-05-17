#include "MbaStudentBuilder.h"

MbaStudentBuilder::MbaStudentBuilder()
{
    cout<< "MbaStudentBuilder object CREATED"<<endl;
    _student = new Student();
}

MbaStudentBuilder::~MbaStudentBuilder()
{
    cout<< "MbaStudentBuilder object DESTROYED"<<endl;
    delete _student;
}

void MbaStudentBuilder::buildAge()
{
    _student->setAge(25);  
}

void MbaStudentBuilder::buildRollNo()
{
    _student->setRollNo(42);   
}

void MbaStudentBuilder::buildSubjects()
{
    vector<string> _subjects ={"FINANCE","MARKETING", "HR"};
    _student->setSubjects(_subjects);
}