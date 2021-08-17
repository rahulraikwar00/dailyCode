#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                x = i + 1;
        }
        int y = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i == x)
                cout << n + 1 << " ";
            else
            {
                cout << y + 1 << " ";
                y++;
            }
        }
        cout << endl;
    }
    return 0;
}