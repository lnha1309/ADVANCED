#include <bits/stdc++.h>
using namespace std;
long long F[1000005];
int mod=1e9+7;
int main()
{
    F[0]=0;
    F[1]=0;
    F[2]=1;
    for(int i=3;i<100000;i++)
    {
        F[i]=F[i-1]+F[i-2]+F[i-3];
        F[i]%=mod;
    }
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<F[n]<<endl;
    }
    system("pause");
    return 0;
}