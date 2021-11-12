#include <iostream>

using namespace std;

class ComplexNum
{
private:
    int m_real;
    int m_imaginary;

public:
    void getValue() {

        cout << "Enter the real part: ";
        cin >> m_real;
        cout << "Enter the imaginary part: ";
        cin >> m_imaginary;
    }

    void printNum()
    {
        cout << "\n" <<m_real << " + " << m_imaginary << " i " << endl;
    }

    ComplexNum operator+(ComplexNum ob)
    {
        ComplexNum tmp;
        tmp.m_imaginary = m_imaginary + ob.m_imaginary;
        tmp.m_real = m_real + ob.m_real;
        return tmp;
    }

    ComplexNum operator-(ComplexNum ob)
    {
        ComplexNum tmp;
        tmp.m_imaginary = m_imaginary - ob.m_imaginary;
        tmp.m_real = m_real - ob.m_real;
        return tmp;
    }
};

int main()
{
    ComplexNum num1, num2, additionResult, subtractionResult;
    cout << "Enter details for first number :" << endl;
    num1.getValue();
    cout << "Enter details for second number: " << endl;
    num2.getValue();
    cout << "Their sum is : ";
    (num1 + num2).printNum();
    cout << "Their subtraction is : "; 
    (num1 - num2).printNum();
}