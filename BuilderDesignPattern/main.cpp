#include <iostream>
#include "StudentBuilder.h"
#include "MbaStudentBuilder.h"
#include "EngineeringStudentBuilder.h"
#include "Director.h"
using namespace std;


int main(){
    Director* _director = new Director;

    StudentBuilder* _builder = new MbaStudentBuilder();
    _director->setBuilder(_builder);
    _director->Build();
    auto _student = _builder->getStudent();
    _student->display();

    delete _builder; 
    _builder = nullptr;

    _builder = new EngineeringStudentBuilder();
    _director->setBuilder(_builder);
     _director->Build();
    _student = _builder->getStudent();
    _student->display();

    delete _director;
    delete _builder;

}