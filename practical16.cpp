#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char calculateGrade(float percentage);
void addRecord();
void printHeading();
void displayRecords();

int main()
{
    while (true)
    {
        int input;
        cout << "Enter 1 to append a new record,\n"
             << "Enter 2 to display all records\n"
             << "Enter -1 to exit\n"
             << "input: ";
        cin >> input;
        switch (input)
        {
        case 1:
            addRecord();
            break;
        case 2:
            displayRecords();
            break;
        case -1:
            return 0;
        }
    }
}

void displayRecords()
{
    string myText;
    ifstream infile;
    infile.open("data.csv");
    while(!infile.eof())
    {
        getline(infile, myText);
        cout << myText << endl;
    }
    infile.close();
}

// it prints the headings if the file is empty.
void printHeading()
{
    ifstream infile;
    string myText = "";
    infile.open("data.csv");
    getline(infile, myText);
    //returns true if the file is empty.
    if (myText.length() == 0)
    {
        infile.close();
        ofstream output;
        output.open("data.csv");
        output << "Roll no, "
               << "Name, "
               << "sub1, "
               << "sub2, "
               << "sub3, "
               << "percentage, "
               << "grade" << endl;
    }
}

void addRecord()
{
    printHeading();
    int rollNum, marks[3], totalMarks = 0;
    string name;
    char grade;
    float percentage;

    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the roll number: ";
    cin >> rollNum;
    cout << "Enter the marks of 3 subjects respectively: ";
    for (int i = 0; i < 3; ++i)
    {
        cin >> marks[i];
        totalMarks += marks[i];
    }
    percentage = (float)totalMarks / 300 * 100;
    //cout << percentage;
    grade = calculateGrade(percentage);

    ofstream output;
    output.open("data.csv", ios::app);
    output << rollNum << ", " << name << ", ";
    for (int i = 0; i < 3; ++i)
    {
        output << marks[i] << ", ";
    }
    output << percentage << ", " << grade << endl;
}

char calculateGrade(float percentage)
{
    if (percentage > 90)
        return 'A';
    else if (percentage > 80)
        return 'B';
    else if (percentage > 70)
        return 'C';
    else if (percentage > 60)
        return 'D';
    else if (percentage > 50)
        return 'E';
    else
        return 'F';
}