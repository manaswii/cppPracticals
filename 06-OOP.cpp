/*
Write the program to perform following operation on matrix using inline function, functions and switch case
a) Addition
b) Subtraction
c) Multiplication
d)Transpose
*/

#include <iostream>
using namespace std;

class matrix
{   
    public:
    int rows;
    int cols;
    int matrix[10][10];
    void takeInput();
    void printMatrix();
};

inline int subtract(int num1, int num2)
{
    return num1 - num2;
}

inline int add(int num1, int num2)
{
    return num1 + num2;
}

inline int multiply(int num1, int num2)
{
    return num1 * num2;
}

void subtractMatrices(matrix& a, matrix& b)
{
    cout << "subtracting matrices \n";
    matrix answer;
    
    if (a.rows != b.rows || a.rows != b.rows)
    {
        cout << "matrices incompatible to be subtracted" << endl;
        return;
    }
    else
    {
        answer.rows = a.rows;
        answer.cols = a.cols;
    }
    for (int i = 0; i < a.rows; ++i)
    {
        for (int j = 0; j < a.rows; ++j)
        {
            answer.matrix[i][j] = subtract(a.matrix[i][j], b.matrix[i][j]);
        }
    }
    answer.printMatrix();
}

void addMatrices(matrix& a, matrix& b)
{
    cout << "adding matrices \n";
    matrix answer;
    
    if (a.rows != b.rows || a.rows != b.rows)
    {
        cout << "matrices incompatible to be added" << endl;
        return;
    }
    else
    {
        answer.rows = a.rows;
        answer.cols = a.cols;
    }


    for (int i = 0; i < a.rows; ++i)
    {
        for (int j = 0; j < a.rows; ++j)
        {
            answer.matrix[i][j] = add(a.matrix[i][j], b.matrix[i][j]);
        }
    }
    answer.printMatrix();
}

void calculateTranspose(matrix& a)
{
    cout << "transpose is : \n";
    matrix answer;
    answer.rows = a.cols;
    answer.cols = a.rows;

    for (int i = 0; i < answer.rows; ++i)
    {
        for (int j = 0; j < answer.cols; ++j)
        {
            answer.matrix[i][j] = a.matrix[j][i];
        }
    }
    answer.printMatrix();
}

void multiplyMatrices(matrix& a, matrix& b)
{
    cout << "multiplying matrices \n"; 
    matrix answer;
    if (a.rows != b.cols || a.cols != b.rows)
    {
        cout << "incompatible matrices "<< endl;
        return;
    }
    else
    {
        answer.rows = a.rows;
        answer.cols = b.cols;
    }

    for (int i = 0; i < answer.rows; ++i)
    {
        for (int j = 0; j < answer.cols; ++j)
        {
            int tmp = 0;
            for (int k = 0; k < answer.rows; ++k)
            {
                tmp = add(tmp, multiply(a.matrix[i][k], b.matrix[k][j]));
            }
            answer.matrix[i][j] = tmp;
        }
    }
    answer.printMatrix();
}

void matrix :: printMatrix()
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << '[' << matrix[i][j] << "] ";
        }
        cout << endl;
    }
}

void matrix :: takeInput()
{
    cout << "enter the number of rows: ";
    cin >> rows;
    cout << "enter the number of cols: ";
    cin >> cols;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "enter the " << j + 1 << " element of the " << i + 1 << " row: ";
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    matrix a, b;
    cout << "enter details of first matrix "<< endl;
    a.takeInput();
    cout << "enter details of second matrix" << endl;
    b.takeInput();


    int flag;
    do
    {
        cout << "\nenter 1 to add\nenter 2 to multiply a . b\nenter 3 to subtract b from a\nenter 4 to calculate transpose of a\nenter 5 to calculate transpose of b\nenter 6 to exit\n";
        cin >> flag;

        switch(flag)
        {
            case 1:
            addMatrices(a, b);
            break;

            case 2:
            multiplyMatrices(a, b);
            break;
 
            case 3:
            subtractMatrices(a, b);
            break;

            case 4:
            calculateTranspose(a);
            break;

            case 5:
            calculateTranspose(b);
            break;

            case 6:
            break;

            default:
            cout << "invalid input" << endl;
            break;
        }
    }while(flag != 6);

}

