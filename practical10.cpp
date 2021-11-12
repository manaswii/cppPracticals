/*
10		Consider an example of book shop which sells books and video tapes. These two classes are inherited from base class called media. The media class has command data members such as title and publication. The book class has data members for storing number of pages in a book and tape class has playing time in a tape. Each class will have member functions such as read () and show (). In the base class, these members must be defined as virtual functions. Write a program to models the class hierarchy for book shop and processes objects of these classes using pointers to base class. Write the rules of virtual functions.	*/

#include<iostream>
using namespace std;

class media
{
    public:
    string title, publication;
    virtual void read()
    {
       cout<<endl<<"Enter title" ;
       cin>>title;
       cout<<endl<<"Enter publication: ";
       cin>>publication;
    }
    virtual void show()
    {
       cout<<endl<<"Name: "<<title<<"\n";
       cout<<endl<<"Name of publication:"<<publication<<"\n";
    }
};
class books: public media
{
    int pgno;
    void read()
    {
       cout<<endl<<"Enter name of book title: ";
       cin>>title;
       cout<<endl<<"Enter name of publication: ";
       cin>>publication;
       cout<<endl<<"Enter number of pages: ";
       cin>>pgno;
    }
    virtual void show()
    {
       cout<<endl<<"Name of the book:"<<title<<"\n";
       cout<<endl<<"Name of publication:"<<publication<<"\n";
       cout<<endl<<"Pages in book: "<<pgno;
    }
};
class video : public media
{
   float tme;
   void read()
   {
       cout<<endl<<"Enter name of video title: ";
       cin>>title;
       cout<<endl<<"Enter name of publication: ";
       cin>>publication;
       cout<<endl<<"Enter running time: ";
       cin>>tme;
    }
    virtual void show()
   {
       cout<<endl<<"Name of video:"<<title<<"\n";
       cout<<endl<<"Name of publication: "<<publication<<"\n";
       cout<<endl<<"Running time: "<<tme<<endl<<"=================="<<endl;
    }
};

int main()
{
   media* p1;
   video v1;
   books b1;
   p1=&v1;
   p1 ->read();
   p1 ->show();
   p1=&b1;
   p1->read();
   p1 ->show();

   return 0;
}