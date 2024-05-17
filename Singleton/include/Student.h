#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int age;
    int rollNo;
    string name;
    Student();
    static Student* instancePtr;
public:
    Student(const Student& _student) = delete;
    ~Student();
    static Student* getInstance();
    void setAge(int x){age =x;}
    void setRollNo(int x){rollNo =x;}
    void setName(string x){name =x;}
    void display(){cout<<age<<" "<<rollNo<<" "<<name<<endl;}
    static void deleteInstance();
};


