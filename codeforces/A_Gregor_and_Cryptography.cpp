#include <iostream>
using namespace std;

int main()
{
    int t, a, v;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> a;
        string s1, s2;
        cin >> s1 >> s2;
        s1 = "0" + s1 + "0";
        s2 = "0" + s2 + "0";
        for (int i = 1; i < (s1.length() - 1); i++)
        {
            if (s2[i] != 0)
            {
                if (s1[i] == 0)
                {
                    if (s1[i - 1] == 1)
                    {
                        s1[i - 1] = 0;
                    }
                }
                else
                {

                }
            }
        }
    }
}