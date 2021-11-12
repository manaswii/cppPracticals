#include <iostream>

using namespace std;

bool checkPalindrome(string s);

int main()
{
    string s;
    cout << "Enter the input to check if it's a palindrome: ";
    cin >> s;
    if (checkPalindrome(s))
        cout << "\nIt is a palindrome.\n";
    else 
        cout << "\nIt is not a palindrome.\n";
}

bool checkPalindrome(string s)
{
    for(int i = 0; i < s.length() / 2; ++i)
    {
        if (s[i] != s[s.length() - 1 - i])
            return false;
    }
    return true;
}