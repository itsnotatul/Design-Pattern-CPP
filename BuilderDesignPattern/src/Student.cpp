#include "Student.h"

Student::Student()
{
    cout<<"Student Object CREATED"<<endl;
}


Student::~Student()
{
    cout<<"Student Object DESTROYED"<<endl;
}


void Student::setSubjects(vector<string>& _subjects)
{
    for(auto ele:_subjects){
        this->subjects.push_back(ele);
    }
}

void Student::display()
{
    cout<<age<<" "<<rollNumber<<" "<<endl;
    for(auto ele: subjects) cout<<ele<<" ";
    cout<<endl;
}