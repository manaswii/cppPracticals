#include<iostream>
using namespace std;
 
class A //external class
{
    int num;
   public:
    void getdata() //mf1
    {
      cout << "get data called\n";
    }
    void putdata() //mf2
    {
      cout<<"The number is \n" << endl;
    }
   class B //internal class
   {
      private:
      int num; //dm num
      public:
      void getdata(int n) //mf1
      {
         num = n;
      }
      void putdata() //mf2
      {
         cout<<"The number is "<<num;
      }
   };
};
int main() 
{
   cout<<"Nested classes in C++"<< endl;
   //A :: B obj;// external classname scope resolution internal class name obj name
   //A x;
   //x.getdata();
   //x.putdata();
   //obj.getdata(9);
   //obj.putdata();
   B x;
   x.getdata(9);
   x.putdata();
   return 0;
}
