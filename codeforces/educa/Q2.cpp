#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int mx = 0, mi = 0;
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        mx = a + b + c - 3;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        mi = arr[2] - arr[1] - arr[0] - 1;
        if (m >= mi && m <= mx)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}