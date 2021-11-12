#include <iostream>
using namespace std;

int passByValue(int x)
{
    return x + 5;
}

void passByAddress(int* x)
{
    *x = 10;
}

void passByReference(int& x)
{
    x = 5;
}

int main()
{
    //pass by value
    int num;
    num = passByValue(0);
    cout << "Passing by value  " << num << endl;

    //pass by address
    passByAddress(&num);
    cout << "Passing by address  " << num << endl;

    //pass by refernce
    passByReference(num);
    cout << "Passing by reference  " << num <<endl;
}

