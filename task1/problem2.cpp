#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_digits;

    //Getting the number of digits from user

    cout << "enter the number of the digits: ";
    cin >> num_digits;

    int digits[num_digits];

    //Getting the digits from user

    cout <<"enter the digits: ";
    for (int i = 0; i < num_digits; i++)
    {
        cin >> digits[i];
    }

    int disired_digit;

    //Getting the disired digit from user

    cout << "enter the disired number: ";
    cin >> disired_digit;

    //print the the position of the digit, if not found print -1

    bool found = false;

    for (int i = 0; i < num_digits; i++)
    {
        if (digits[i] == disired_digit )
        {
            cout << "the position is: " << i <<endl;
            found = true;
        }

    }
    if (!found)
    {
        cout << "-1" <<endl;
    }

return 0;

}