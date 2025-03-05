#include <bits/stdc++.h>
using namespace std;
int main()
{
    //! Tim kiem nhi phan
    //! Dieu kien la mang da sap xep
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //test
    sort(a,a+n);
    // int l=0,r=n-1;
    // while(l<=r)
    // {
    //     int mid=(l+r)/2;
    //     if(a[mid]<k)
    //     {
    //         l=mid+1;
    //     }
    //     else if(a[mid]>k)
    //     {
    //         r=mid-1;
    //     }
    //     else 
    //     {
    //         cout<<"Da tim thay";
    //         break;
    //     }    
    // }
    //! Hàm binary_search()
    cout<<binary_search(a,a+n,k);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    system("pause");
    //??? 45:41
    return 0;
}