#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_heights;

    //Getting the number of height measurements

    cout << "enter the number of height measurements: ";
    cin >> num_heights;

    int heights[num_heights];

    //Getting the heights from user

    cout <<"enter the heights: ";
    for (int i = 0; i < num_heights; i++)
    {
        cin >> heights[i];
    }

    int max_height = heights[0];

    // find the max height

    for (int i = 1; i < num_heights; i++)
    {

        if (max_height < heights[i])

        {
            max_height= heights[i];
        }

    }

    //print the max height

    cout << "the max height is: " << max_height <<endl;

    return 0;

}