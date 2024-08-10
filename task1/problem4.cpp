#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;

    //Getting tne tne num of rows and columns from user

    cout << "enter tne num of rows, columns: ";
    cin >> rows >> columns;

    int pl_justice_league[rows][columns];

    //Getting the power levels of the Justice League from user

    cout << "enter the power levels of the Justice League: " << endl;

    //loop to input power levels of the Justice League

    for(int i = 0; i < rows; i++ )
    {
        cout << "row (" << i + 1 << "): ";
        for(int j = 0; j < columns; j++)
        {
            
            cin >> pl_justice_league[i][j];
        }
    }


    int pl_villains[rows][columns];

    //Getting the power levels of the villains from user

    cout << "enter the power levels of the villains: " << endl;

    //loop to input power levels of the villains

    for(int i = 0; i < rows; i++ )
    {
        cout << "row (" << i + 1 << "): ";
        for(int j = 0; j < columns; j++)
        {
            
            cin >> pl_villains[i][j];
        }
    }

    int justice_league_points = 0;
    int villains_points = 0;

    //comparing the power

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if (pl_justice_league[i][j] > pl_villains[i][j])
            {
                justice_league_points++;
            }
            else if (pl_justice_league[i][j] < pl_villains[i][j])
            {
                villains_points++;
            }
            else 
            {
                justice_league_points++;
                villains_points++;

            }
        }
        
    }

    //determine the winner basid on points or tie

    if(justice_league_points > villains_points)
    {
        cout << "the winner is Justice League " <<endl;
    }
    else if(justice_league_points < villains_points)
    {
        cout << "the winner is villains " <<endl;
    }
    else
    {
        cout << " Tie" <<endl;
    }

    return 0;
}