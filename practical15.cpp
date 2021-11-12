#include <iostream>
#include <fstream>

using namespace std;

void calculateLength(bool calculateOccurence)
{
    string fileName, myText, wordToCount = "";
    if(calculateOccurence)
    {
        cout << "Enter the word to count occurences of: ";
        cin >> wordToCount;
    }
    cout << "Enter the file name to scan (include the extension): ";
    cin >> fileName;
    ifstream myFile;
    myFile.open(fileName);
    if (!myFile.is_open())
    {
        cout << "\nFile failed to open.\n";
        exit(1);
    }
    int totalLen = 0, counter = 0;
    while (myFile >> myText)
    {
        if (myText == wordToCount && calculateOccurence == true)
        {
            ++counter;
        }
        ++totalLen;
    }
    cout << "\nTotal length of the file in words is : " << totalLen << endl;
    if(calculateOccurence)
    {
        cout << "The entered word occurs : " << counter << " times." << endl;
    }
}

int main()
{
    char input;
    bool countOccurence;
    cout << "Do you want to count word occuernce? (y/n): ";
    cin >> input;
    if (input == 'y')
        countOccurence = true;
    else
        countOccurence = false;

    calculateLength(countOccurence);
}