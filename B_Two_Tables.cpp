// #include <iostream>
// using namespace std;

// int main()
// {
//     float t, wr, hr, x1, y1, x2, y2, wt2, ht2;
//     cin >> t;
//     while (t--)
//     {
//         cin >> wr >> hr >> x1 >> y1 >> x2 >> y2 >> wt2 >> ht2;
//         // int hight1 =
//         // int width1 =
//         int avh = wt2 + y2 - y1;
//         int avw = ht2 + x2 - x1;
//         cout << avw << avh << wt2 << ht2;
//         if (avh > hr && avw > wr)
//         {
//             cout << -1 << endl;
//             cout << setprecision(2) << 1.2;
//         }
//         else if (avh <= hr && avw <= wr)
//         {

//         }
//         else{

//         }
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int t, W, H, x1, y1, x2, y2, w, h, a;
    for (cin >> t; t--;)
    {
        a = INT_MAX;
        cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
        if (x2 - x1 + w <= W)
            a = min(a, max(0, min(w - x1, w - W + x2)));
        if (y2 - y1 + h <= H)
            a = min(a, max(0, min(h - y1, h - H + y2)));
        if (a != INT_MAX)
            cout << a << endl;
        else
            puts("-1");
    }
}