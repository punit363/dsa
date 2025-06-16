#include <iostream>
using namespace std;

int main()
{

    // Printing patterns

    /*
     * 1. * * * *
     *    * * * *
     *    * * * *
     *    * * * *
     */

    // int n, i = 0;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    /*
    2. 1
       2 3
       3 4 5
       4 5 6 7
    */

    // int n, i = 1;
    // cout << "Enter the number of rows: ";
    // cin >> n;

    // while (i <= n)
    // {
    //     int j = 0;
    //     while (j < i)
    //     {
    //         cout << i + j << " ";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    /*
    3.        *
            * *
          * * *
        * * * *
    */

    ////---------> better to use two different sub loops, considering two traingles
    // int n, row = 0;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // while (row < n)
    // {
    //     int col = 0;
    //     while (col < n)
    //     {
    //         if (col <= n - row - 2)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //         col++;
    //     }
    //     cout << "\n";
    //     row++;
    // }

    /*
     4.       1
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
     */

    int n, row = 0;
    cout << "Enter the number of rows: ";
    cin >> n;

    while (row < n)
    {
        int j = 0;
        while (j < n - row)
        {
            cout << "  ";
            j++;
        }

        int k = 0;
        while (k <= row)
        {
            cout << " " << k + 1;
            k++;
        }

        int l = 0;
        while (l < row)
        {
            cout << " " << row - l;
            l++;
        }
        cout << endl;
        row++;
    }
    return 0;
}