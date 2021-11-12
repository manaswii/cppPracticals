/*
Write a program to swap two numbers (create two classes) by using Friend function.*/
#include <iostream>
using namespace std;

class Num2;

class Num1
{
private:
    int m_num;
public:
    friend void swapNums(Num1& num1, Num2& num2);
    void takeInput()
    {
        cout << "Enter first number: ";
        cin >> m_num;
    }

    void printValue()
    {
        cout << "\nFirst number is: " << m_num << endl;
    }
};

class Num2
{
private:
    int m_num;
public:
    friend void swapNums(Num1& num1, Num2& num2);

    void takeInput()
    {
        cout << "Enter second number: ";
        cin >> m_num;
    }

    void printValue()
    {
        cout << "\nSecond number is: " << m_num << endl;
    }
};

void swapNums(Num1& num1, Num2& num2)
{
    int tmp;
    tmp = num1.m_num;
    num1.m_num = num2.m_num;
    num2.m_num = tmp;
}

int main()
{
    Num1 num1;
    Num2 num2;
    num1.takeInput();
    num2.takeInput();

    cout << "\nswapping the numbers.\n";
    swapNums(num1, num2);
    
    num1.printValue();
    num2.printValue();
}