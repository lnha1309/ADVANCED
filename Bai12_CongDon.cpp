#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long F[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
            F[i]=a[i];
        else
            F[i]=a[i]+F[i-1];
    }
    int q;cin>>q;
    while(q--)
    {
        int l,r ; cin>>l>>r;
        --l,--r;
        if(l==0) cout<<F[r]<<endl;
        else cout<<F[r]-F[l-1]<<endl;   
    }
    system("pause");
    return 0;
}