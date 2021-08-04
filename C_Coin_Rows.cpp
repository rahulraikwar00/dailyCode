#include <iostream>
using namespace std;
int solve(int count, int &arr, int i, int j)
{
    if (arr[i][j] == 0)
    {
        return count;
    }
    count = solve(count, arr, i, j + 1) + solve(count, arr, i, j + 1);
    return count;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;anf("%lld", &arr[i][j]);

                // arr[ii][i] += ps[ii][i - 1];
            }
        int arr[3][n + 1];
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cin >> arr[i][j];
                if (i == 0 | j == 0)
                {
                    arr[i][j] = 0;
                }

                // scanf("%lld", &arr[i][j]);

                // arr[ii][i] += ps[ii][i - 1];
            }
        }
        cout << solve(0, arr, 0, 0);
    }