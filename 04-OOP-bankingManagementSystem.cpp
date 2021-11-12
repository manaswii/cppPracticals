#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class account
{
    private:
    string accountNum;
    string name;
    unsigned long long int balance;
    
    public:
    void takeInput();
    void printInfo();
    void deposit();
    void withdraw();
    string getAccountNumber();
};


void account :: takeInput()
{
    cout << "\n Enter details for a new account! \n";
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the account number: ";
    cin >> accountNum;
    cout << "Opening balance: ";
    cin >> balance;
}

void account :: printInfo()
{
    cout << "printing info: " << endl;
    cout << "name: " << name << endl;
    cout << "account number: " << accountNum << endl;
    cout << "balance: " << balance << endl;
}

void account :: deposit()
{
    int x;
    cout << "Enter the amount to be deposited: ";
    cin >> x;
    balance += x;
    cout << "deposited" << endl;
    cout << "new balance is :" << balance << endl;;
}

void account :: withdraw()
{
    int x;
    cout << "current balance is: " << balance << endl;
    do
    {
        cout << "enter the amount to withdraw: ";
        cin >> x;
    }
    while (x > balance);

    balance -= x;
    cout << "withdrawn" << endl;
    cout << "new balance is :" << balance << endl;
}

string account :: getAccountNumber()
{
    return accountNum;
}

void separator()
{
    for (int i = 0; i < 20; ++i)
    {
        cout << "-";
    }
    cout << '\n';
}

void searchAccNum(account &acc1, account &acc2, account &acc3)
{
    cout << "Enter the account number to search: ";
    string search;
    cin >> search;

    string acc1Num;
    acc1Num = acc1.getAccountNumber();
    string acc2Num;
    acc2Num = acc2.getAccountNumber();
    string acc3Num;
    acc3Num = acc3.getAccountNumber();

    separator();
    if (acc1Num == search)
    {
        separator();
        cout << "acc1 is the account being searched for, now printing info" << endl;
        acc1.printInfo();
        separator();
    } 
    else if (acc2Num == search)
    {
        cout << "acc2 is the account being searched for, now printing info" << endl;
        acc2.printInfo();
    }  
    else if (acc3Num == search)
    {
        cout << "acc3 is the account being searched for," << endl;
        acc3.printInfo();
    }
    else
    {
        cout << "not found" << endl;
    }
}

int main()
{
    account acc1, acc2, acc3;

    acc1.takeInput();
    separator();

    //acc1.printInfo();
    //separator();

    acc1.withdraw();
    separator();

    acc1.deposit();

    acc2.takeInput();
    separator();
    
    acc3.takeInput();
    separator();

    searchAccNum(acc1, acc2, acc3);
}
