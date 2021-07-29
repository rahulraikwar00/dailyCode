#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 5 || n > 9)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = pow(8, n);
        cout << (ans % 10) << endl;
    }
}