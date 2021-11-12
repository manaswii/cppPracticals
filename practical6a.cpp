/*
Program 6
Create a class called Complex for performing following operations:
(a) Overload increment and decrement operators for increasing and 
decreasing complex number values (Unary operator overload).
(b) Overload ‘+’ op and ‘-‘op for complex numbers (Binary operator 
overloading)*/

#include <iostream>

using namespace std;

class complex {
    int a, b;
public:

    void getvalue() {
        cout << "enter the real part: ";
        cin >> a;
        cout << "Enter the imaginary part: ";
        cin >> b;
    }

    void operator++() {
        ++a;
        ++b;
    }

    void operator--() {
        --a;
        --b;
    }

    void display() {
        cout << a << "+\t" << b << "i" << endl;
    }
};

int main() {
    int input;
    complex obj;
    obj.getvalue();
    
    do
    {
        cout << "Enter 1 to increment\nEnter 2 to decrement\nEnter -1 to exit: ";
        cin >> input;
        switch(input)
        {
            case 1:
                ++obj;
                obj.display();
                break;
            case 2:
                --obj;
                obj.display();
                break;
            case -1:
                cout << "\nexiting!\n";
                break;
            default:
                cout << "invalid input";
                break;
        }
    }while(input != -1);
    return 0;
}