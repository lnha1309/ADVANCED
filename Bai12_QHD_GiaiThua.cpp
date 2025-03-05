#include <bits/stdc++.h>
//!Giai thừa chia dư
using namespace std;
long long F[1000005];
int mod=1e9+7;
int main()
{
    F[0]=1;
    F[1]=1;
    for(int i=2;i<1000000;i++)
    {
        F[i]=i*F[i-1];
        F[i]%=mod;
    }
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<F[n];
    }
    system("pause");
    return 0;
}