//Binary Operator Overloading Example complex number Program
#include <iostream>
 
using namespace std;
 
class complex 
{
    int a, b;//a = real, b = img
public:
    void getvalue() //normal member function
    {
        cout << "Enter the value of Complex Numbers a,b:";
        cin >> a>>b;
    }
    complex operator+(complex ob) //ob.a=2, ob.b=2;  operator overloading function for +  
    //syntax: class_name(data type or return_type) operator_keyword op (class_name(datatype) object_name)
    //result = obj1 + obj2 => result= temp; obj1 = operator+; obj2= ob
    {
        complex temp; //temp=> temp.a;temp.b
        temp.a = a + ob.a; //real 4+2 = 6 //1st complex no a=4 b=3 (4+3i)
        temp.b = b + ob.b; //imag 3+2 = 5//2nd complex no a=2 b=2 (2+2i)
        return (temp); //6+5i
    }
    complex operator-(complex ob) //operator overloading function for -
    {
        complex t;
        t.a = a - ob.a; //4-2 = 2
        t.b = b - ob.b; //3-2 = 1
        return (t); //2+1i 
    }
    complex operator/(complex ob)
    {
        complex t;
        t.a = ((a * ob.a) + (b * ob.b)) / (ob.a * ob.a + ob.b * ob.b);
        t.b = ((b * ob.a) - (a * ob.b)) / (ob.a * ob.a + ob.b * ob.b);
        return t;
    }
    complex operator*(complex ob)
    {//7 + 8i         5 + 4i    =       3 + 68i
        complex tmp;
        tmp.b = (a * ob.b) + (b * ob.a);//(b * ob.a) + (b * ob.b)
        tmp.a = (a * ob.a) - (b * ob.b);//(a * ob.a) + (a * ob.b)
        return tmp;
    }
    void display() 
    {
        cout << endl<< a << "+" << b << "i" << "\n";
    }
};
int main() 
{
    complex obj1, obj2, result, result1, result2, result3;

    obj1.getvalue(); //1st complex no a=4 b=3 (4+3i)
    obj2.getvalue(); //2nd complex no obj2.a=2 obj2.b=2 (2+2i)

    result = obj1 + obj2;// call to binary oprator overloading function => result=obj1(obj2)
    result1 = obj2 - obj1;
    result2 = obj1 * obj2;
    result3 = obj1 / obj2;
    cout << "Input Values:\n";
    obj1.display();
    obj2.display();

    cout << "Result:";
    result.display();
    result1.display();
    result2.display();
    result3.display();
    return 0;
}