#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[2][a + 1];
        int count = 0;
        int temp = 0;
        if (a == 1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int j = 1; j < a + 1; j++)
        {
            cin >> temp;
            count += temp;
            arr[0][j] = count;
            temp = 0;
        }
        count = 0;
        for (int j = 1; j < a + 1; j++)
        {
            cin >> temp;
            count += temp;
            arr[1][j] = count;
            temp = 0;
        }

        arr[0][0] = 0;
        arr[1][0] = 0;
        int ans = 1e9;
        for (int i = 1; i < a + 1; i++)
        {

            ans = min(ans, max(arr[1][i - 1], arr[0][a] - arr[0][i]));
        }

        cout << ans << endl;
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// int t;int n,a[100010],b[100010];
// int main(){
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		for(int i=1;i<=n;i++){
// 			cin>>a[i];
// 			a[i]+=a[i-1];
// 		}
// 		for(int i=1;i<=n;i++){
// 			cin>>b[i];
// 			b[i]+=b[i-1];
// 		}
// 		int ans=0x7fffffff;
// 		for(int i=1;i<=n;i++){
// 			ans=min(ans,max(a[n]-a[i],b[i-1]));
// 		}
// 		cout<<ans<<endl;
// 	}
// }