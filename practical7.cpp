/*
Write a program to find the area (function name AREA) of circle, rectangle and triangle by Function overloading concept.*/

#include <iostream>
using namespace std;

const float pi = 3.14;

class shapes
{
private:
    float b, h, r;
    int len, breadth;
    float result;

public:
    void getInput()
    {
        cout << "\nEnter the base of the triangle:";
        cin >> b;
        cout << "\n Enter the height of the triangle: ";
        cin >> h;
        result = area(b, h);
        cout << "\nArea of triangle is : " << result << endl;

        cout << "\nEnter radius of circle : \n";
        cin >> r;
        result = area(r);
        cout << "\nArea of circle is : " << result << endl;

        cout << "\nEnter the length of rectangle : ";
        cin >> len;
        cout << "\nEnter the bredth of rectangle : ";
        cin >> breadth;
        result = area(len, breadth);
        cout << "\nArea of Rectangle is :" << result;
    }

    float area(float b, float h)
    {
        float ar;
        ar = 0.5 * b * h;
        return ar;
    }
    float area(float r)
    {
        float ar;
        ar = pi * r * r;
        return ar;
    }
    float area(int l, int b)
    {
        float ar;
        ar = l * b;
        return ar;
    }
};
int main()
{
    shapes s;
    s.getInput();
    
    return 0;
}