#include <iostream>
using namespace std;

class student
{
	private:
		string name;
		int   rollNo;
		string address;
	
    
    public:		
		void inputInfo(void){
	        cout << "Enter name: " ;
	        cin >> name;
	        cout << "Enter roll number: ";
	        cin >> rollNo;
	        cout << "Enter address: ";
            cin >> address;
        }
		
		void printInfo(void){
	        cout << "Student details:\n";
            cout << "Name:"<< name << ",Roll Number:" << rollNo << ", address:" << address;
        }

};


int main()
{
	student std;	
	
	std.inputInfo();
	std.printInfo();
	
	return 0;
}