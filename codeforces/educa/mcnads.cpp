#include <iostream>
using namespace std;

void opn(int n)
{

    for (int i = 1; i <= (n * 2); i++)
    {
        if (i <= n)
        {
            cout << "(";
        }
        else
        {
            cout << ")";
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            opn(i);
            opn(n - i);
            cout << endl;
        }
    }
}