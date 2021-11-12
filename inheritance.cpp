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

    string getName() {return firstName;}
    int getRollNum() {return rollNum;}
};

class Exam : public Student
{
public:
    int marks[6];
    int totalMarks = 0;
    void setMarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "enter marks in sub " << i + 1 << endl;
            cin >> marks[i];
        }
    }
};

class Grade : public Exam
{
    private:
    int m_totalMarks = 0;
    string m_name;
    int m_rollNum;
    public:
    Grade(int totalMarks, string name, int rollNum) 
        :m_totalMarks {totalMarks}, m_name {name}, m_rollNum {rollNum}
    {
    }
    void calcAndPrintGrade()
    {
        // calculating percentage
        float perc = (m_totalMarks / 600.0) * 100;
        char grade;
        if (perc > 90){grade = 'O';}
        else if (perc > 80.0) {grade = 'A';}
        else if (perc > 70.0) {grade = 'B';}
        else if (perc > 60.0) {grade = 'C';}
        else if (perc > 50.0) {grade = 'D';}
        else {grade = 'F';}
        cout << "Grade is : " << grade;
    }
};

class Result : public Exam
{
public:
    int totalMarks = 0;
    void printResult()
    {
        int total = 0;
        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }
        totalMarks = total;
        cout << "total marks: " << total << endl;
    }
    void setInfo()
    {
        this->setPersonalInfo();
        this->setMarks();
    }
    void calcAndPrintGrade()
    {
        Grade tmp(totalMarks, getName(), getRollNum());
        tmp.calcAndPrintGrade();
    }
};

int main()
{
    cout << "enter number of students: \n";
    int num;
    cin >> num;
    const int SIZE = num;
    Result *students = new Result[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        students[i].setInfo();
        students[i].printResult();
    }

    for (int i = 0; i < SIZE; ++i)
    {   
        students[i].calcAndPrintGrade();
    }
}