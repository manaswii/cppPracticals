#include <iostream>
#include <string.h>

using namespace std;

class Marks
{
private:
    int rollNum;
    float percentage;

public:
    void readMarks(void)
    {
        cout << "Enter roll number: ";
        cin >> rollNum;
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void printMarks(void)
    {
        cout << "Roll No.: " << rollNum << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Student
{
private:
    Marks obj1;
    string name;

public:
    void readStudent(void)
    {
        cout << "Enter name: ";
        cin >> name;

        obj1.readMarks();
    }

    void printStudent(void)
    {
        cout << "Name: " << name << endl;

        obj1.printMarks();
    }
};

int main()
{
    Student std;
    std.readStudent();
    std.printStudent();
}
