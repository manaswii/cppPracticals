#include <iostream>

using namespace std;

class Student
{
private:
    int rollNum;
    string name;

public:
    void getInfo()
    {
        cout << "Enter the roll number: ";
        cin >> rollNum;
        cout << "Enter the name: ";
        cin >> name;
    }
};

class Marks : public virtual Student
{
private:
    int marks1, marks2;

public:
    void getMarks()
    {
        cout << "Enter the marks 1 : ";
        cin >> marks1;
        cout << "Enter the marks 2 : ";
        cin >> marks2;
    }

    int getMarks1() { return marks1; }
    int getMarks2() { return marks2; }
};

class Report : public Marks, virtual public Student
{
public:
    Report()
    {
        getInfo();
        getMarks();
    }

    int getTotalMarks()
    {
        int marksA = getMarks1();
        int marksB = getMarks2();
        return marksA + marksB;
    }
};

int main()
{
    Report obj;
    int totalMarks = obj.getTotalMarks();
    cout << "\nTotal marks are: " << totalMarks << endl;
}