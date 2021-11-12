/*
Program 8
Design three classes: Student, Exam and Result. The student class has data 
members such as roll no, name etc. Create a class Exam by inherit-ing the 
student class. The Exam class adds data members representing the marks 
scored in six subjects. Derive the Result from class Exam and it has its own 
members such as total marks. Write an interactive program to model this 
relationship.*/

#include <iostream>
using namespace std;

class Student
{
private:
    string firstName, course;
    int rollNum;

public:
    void setPersonalInfo()
    {
        cout << "enter name:" << endl;
        cin >> firstName;
        cout << "enter roll number: ";
        cin >> rollNum;
        cout << "enter course:";
        cin >> course;
    }
};

class Exam : public Student
{
public:
    int marks[6];
    void setMarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "enter marks in sub " << i + 1 << endl;
            cin >> marks[i];
        }
    }
};

class Result : public Exam
{
public:
    int total = 0;
    void printResult()
    {
        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }
        cout << "total marks: " << total << endl;
    }
};

int main()
{
    cout << "enter number of students: \n";
    int SIZE;
    cin >> SIZE;
    Result students[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        students[i].setPersonalInfo();
        students[i].setMarks();
        students[i].printResult();
    }
}