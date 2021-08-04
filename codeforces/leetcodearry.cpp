#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int i, j;

        long count;
        int 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (i = 0; i < n; i++)
        {

            for (j = i + 1; j < n; j++)
            {

                if (A[i] > A[j])
                    count++;

                if (count > 1000000000)
                    break; // exit loop
            }

            if (count > 1000000000)
                break; // exit loop
        }

        if (count > 1000000000)
            return -1;

        else
            return count;
        // int arr[n + 1][n + 1];
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cin >> arr[i][j];
        //     }
        // }
        // int cnt = 0, c = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         c++;
        //         if (arr[i][j] > c)
        //         {
        //             cnt++;
        //             cout << arr[i][j] << " " << c << endl;
        //         }
        //     }
        // }
        // cout << cnt << endl;
    }
}
