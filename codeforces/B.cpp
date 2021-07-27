#include <iostream>
using namespace std;

int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        bool flg = true;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << (i + j ? "B" : "W");
            }
            cout << endl;
        }
    }
}