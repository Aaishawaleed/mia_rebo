#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    //Getting the number of rows from user
    cin >> n;
    
    //Making a tringle from *

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
   
}