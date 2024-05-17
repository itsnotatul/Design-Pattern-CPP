#include "Student.h"

int main(){
    auto _student1 = Student::getInstance();
    _student1->setAge(10);
    _student1->setRollNo(40);
    _student1->setName("shiva");

    _student1->display();
    cout<<"address of _student1 "<< &_student1<<endl;

     auto _student2 = Student::getInstance();
    _student2->setAge(20);
    _student2->setRollNo(50);
    _student2->setName("atul");

     _student2->display();
    cout<<"address of _student1 "<< &_student2<<endl;

    Student::deleteInstance();
}