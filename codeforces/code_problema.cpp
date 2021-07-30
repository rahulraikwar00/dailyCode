#include <iostream>

using namespace std;

int main()
{
    int t, n, newv;
    int c1, c2;
    // cout << "Enter :";
    cin >> t;
    while(t--)
    {//----------------//
    
        cin >> n;

        if (n % 3 == 0)
        {
            c1 = n / 3;
            c2 = (n / 3);
        }
        else
        {
            newv = n % 3;
            if(newv%2==0){
            c1 = n / 3 ;
            c2 = (n / 3)+ newv/2;
            }
            else{
                c1 = n/3 + newv;
                c2 = n/3;
            }
        }

        cout << c1 << " " << c2 << endl;
    }
    return 0;
}

// 4%3==1
//
// 32/3
//12  10 = 2
// 10 11 =1
// 
// 4,5
