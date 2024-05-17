#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student
{
private:
    int rollNumber;
    int age;
    vector<string> subjects;
public:
    Student();
    ~Student();
    void display();
    void setAge(int x) { age = x ;}
    void setRollNo(int x) {rollNumber = x;}
    void setSubjects(vector<string>& _subjects);
};






