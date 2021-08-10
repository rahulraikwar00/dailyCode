#include <iostream>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n <= 6)
        {
            cout << 15 << endl;
        }
        else if (n % 2 != 0)
        {
            cout << ((n + 1) * 5) / 2 << endl;
        }
        else
        {
            cout << n * 5 / 2 << endl;
        }
    }
}