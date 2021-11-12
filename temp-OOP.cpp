#include <iostream>
#include <string>

using namespace std;

class Address
{
private:
    string address;

public:
    void getAddress()
    {
        cout << "Enter Address ";
        getline(cin, address);
    }

    void printAddress()
    {
        cout << "Address: ";
        cout << address;
    }
};

class Name
{
private:
    Address tmp;
    string name;

public:
    void readName(void)
    {
        cout << "Enter name: ";
        getline(cin, name);
        tmp.getAddress();
    }

    void printInfo(void)
    {
        cout << "Name: " << name << endl;
        tmp.printAddress();
    }
};

int main()
{
    Name obj;
    obj.readName();
    obj.printInfo();
}
