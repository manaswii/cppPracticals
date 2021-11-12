#include <iostream>
#include <limits>
using namespace std;

const int SIZE = 2;
class Person
{
    private:
    char name[64];
    unsigned int age;
    char address[64];
    float salary;

    public:
    int getAge(){
        return age;
    }
    void printSalary(){
        cout << "name is :" << name << endl;
        cout << "Salary is : " << salary << endl;
    }
    void takeInput(int index)
    {
        cout << "Enter details for person at position :" << index + 1 << endl;

        cout << "enter the name: ";
        cin.getline (name, 64);

        cout << "enter the age: ";
        cin >> age;
        cin.ignore();

        cout << "enter the salary: ";
        cin >> salary;
        cin.ignore();

        cout << "enter the address: ";
        cin.getline (address, 64);
    }
};

inline int older(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    return num2;
}

inline int younger(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    return num2;
}

void getYoungestAndOldest(Person array[])
{
    int youngest = numeric_limits<int>::max();;
    int oldest = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        oldest = older(oldest, array[i].getAge());
        youngest = younger(youngest, array[i].getAge());
    }
    cout << "youngest = " << youngest << endl;
    cout << "oldest = " << oldest << endl;
}

int main()
{
    Person array[SIZE];
    for (int i = 0; i < SIZE; ++i)
    {
        array[i].takeInput(i);
    }
    getYoungestAndOldest(array);
    cout << endl;

    while(1)
    {
        cout << "Enter person's position to print their salary enter a number greater than 10 to exit : ";
        int position;
        cin >> position;
        if (position < 0 || position > 10 )
        {
            cout << "exiting " << endl;
            break;
        }
        array[position - 1].printSalary();
    }
}