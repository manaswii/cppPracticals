#include <iostream>
#include <string>

using namespace std;

int ACCOUNT_NUM_TRACKER = 1000;

string accountNum()
{
    string tmp = "BA" + to_string(++ACCOUNT_NUM_TRACKER);
    return tmp;
}

class BankAccount
{
private:
    string m_name;
    string m_address;
    string m_accountNumber;
    unsigned long long int m_balance;
    int m_numTransaction;

public:
    BankAccount()
    {
        m_numTransaction = 0;
        m_accountNumber = accountNum();
        m_balance = 10000;
        cout << "\nNew account has been created, your bank account number is: " << m_accountNumber << "\n Please enter the rest of your details: \n";
        getData();
    }

    void getData()
    {
        cout << "\nEnter the name: ";
        cin >> m_name;
        cout << "\nEnter an address: ";
        cin >> m_address;
    }

    void printData()
    {
        cout << "\nYour account info : \n";
        cout << "Name: " << m_name << '\n'
             << "Address: " << m_address << '\n'
             << "account number: " << m_accountNumber << '\n'
             << "balance: " << m_balance << '\n'
             << "Number of transactions :" << m_numTransaction << '\n';
    }

    void deposit()
    {
        int x;
        cout << "Enter the amount to be deposited: ";
        cin >> x;
        m_balance += x;
        cout << "deposited" << endl;
        cout << "\nNew balance is :" << m_balance << endl;
        ++m_numTransaction;
    }

    void withdraw()
    {
        int x;
        cout << "current balance is: " << m_balance << endl;
        do
        {
            cout << "enter the amount to withdraw: ";
            cin >> x;
        } while (x > m_balance);

        m_balance -= x;
        cout << "withdrawn" << endl;
        cout << "new balance is :" << m_balance << endl;
        ++m_numTransaction;
    }

};

int main()
{
    BankAccount obj, obj1;
    obj.deposit();
    obj.withdraw();
    obj.printData();

    obj1.printData();
}