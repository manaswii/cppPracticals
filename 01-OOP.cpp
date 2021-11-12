// Program to illustrate the working of
// public and private in C++ Class
 
#include <iostream>
using namespace std;
 
class Box 
{
   private:                 //datamenbers: 3 l,b,h
    double length;
    double breadth;
    double height;
 
   public:                  
 

    void initData(double len, double brth, double hgt) 
    {
        length = len; 
        breadth = brth; 
        height = hgt; 
    }
 
    double calculateArea()
    {
        double temp;
        temp = length * breadth;
        return temp;
    }
 
    double calculateVolume()
    {
        return length * breadth * height; //42.5*30.8*19.2
    }
};
 
int main() 
{
 

    Box Box1, b1, b2;
    double area;


    Box1.initData(3, 7, 1);
    b1.initData(3, 1, 6);
    b2.initData(6, 2, 2);


    cout << "Area of Box =  " << Box1.calculateArea() << endl;
    cout << "Volume of Box =  " << Box1.calculateVolume() << endl;

    cout << "Area of b1 =  " << b1.calculateArea() << endl;
    cout << "Volume of b1 =  " << b1.calculateVolume() << endl;
 
    cout << "Area of b2 =  " << b2.calculateArea() << endl;
    cout << "Volume of b2 =  " << b2.calculateVolume() << endl;
 

    return 0;
}