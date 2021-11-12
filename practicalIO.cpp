#include <fstream>
#include <iostream>
using namespace std;

void addEntry(std::ostream& outfile)
{
    char data[100]; // open a file in write mode.
    int marks[3];
    char grade;
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100); // write inputted data into the file.
    outfile << "name: " <<data << endl;
    cout << "Enter your roll numer: ";
    cin >> data;
    cin.ignore();            // again write inputted data into the file.
    outfile << "Roll num: "<< data << endl << "marks in subject: "; // close the opened file.

    int counter = 0, total = 0;
    for(int i = 0; i < 3; ++i)
    {
        cout << "Enter the marks for " << counter << " subject: ";
        cin >> marks[i];
        total += marks[i];
        outfile << marks[i] << " ";
        ++counter;
    }
    float percentage = (float)total / 300 * 100;
    if( percentage >90)
        grade = 'A';
    else if (percentage > 80)
        grade = 'B';
    else if (percentage > 70)
        grade = 'C';
    else if (percentage > 60)
        grade = 'D';
    else
        grade = 'F';
    outfile << "\n" << "total: " << total << "\n" << "percentage: " << percentage << endl << "grade: " << grade << endl;     
}

int main()
{   
    // open a file in read mode.
    ofstream outfile;
    outfile.open("afile.dat");
    for(int i = 0;i < 5; ++i)
    {
        addEntry(outfile);
        cin.ignore();
    }
    string myText;
    ifstream infile;
    infile.open("afile.dat");
    while(!infile.eof())
    {
        getline (infile, myText);
        cout << myText << endl;
    }
    infile.close();
    return 0;
}