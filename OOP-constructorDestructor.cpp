#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class person
{
    private:
    string name;
    int age;
    int rollno;
    string course;
    int year;

    public:	
	person()
	{
		name = " ";
		course = "";
		age = 0;
		rollno = 0;
		year = 0;
	}
	person(int x)
	{
		year = x;		
	}
	person(const person &a)
	{
		year = a.year;
	}
	void setdata()
	{
		cout << "Enter name of the student" << endl;
		cin >> name;
		cout << "Enter course" << endl;
		cin >> course;
		cout << "Enter age of the student" << endl;
		cin >> age;
		cout << "Enter the roll number" << endl;
		cin >> rollno;
		
	}
	void printdata()
	{
		cout << "Name:     " << name << endl;
		cout << "Course:    " << course << endl;
		cout << "Age:    " << age << endl;
		cout << "Roll number:    " << rollno << endl;
		cout << "Year:    " << year << endl;
	}
	~person()
	{
		cout << "Objects deleted ";
	}
};

int main()
{
	cout << "Enter the year of the student which will be passed using a parameterized constructor " << endl;
	int y;
	cin >> y;
    cout << "\nusing parameterized constructor to send this year for a new object \n";
	person b(y);
    cout << "\nprinting data of new object created using parameterized constructor : \n";
    b.printdata();

    cout << "\nUsing copy constructor to create a new object\n";
	person a = b;
    cout << "\n printing data of the new object created using copy constructor\n" ;
	a.printdata();

    person c;
    cout << "now using manual inserting of data using setdata() for a completely new object\n" ;
	c.setdata();

    cout << "\nprinting data of the newly manually assigned object\n";
	c.printdata();

}