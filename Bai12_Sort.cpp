#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
//!sort(a,a+n)
//!sort(a+x,a+y+1) [x,y]

//comparison function: Hàm so sánh cho hàm sort
//true: Nếu muốn x đứng trước y sau khi xếp
//false: Nếu muốn x đứng sau y sau khi xếp
//B1: XÁC định thứ tự mà bạn muốn sắp xếp
//B2: Tìm điều kiện để x đứng trước y sau khi xếp, nếu điều kiện đúng ==> true, false

//!Sắp xếp theo nhiều tiêu chí 

bool cmp(int x, int y)
{
    //! Muốn sắp xếp theo cái nào điều chỉnh theo điều kiện đó
    // if(x<y)
    //     return true;
    // else
    //     return false;
    // if(tong(x)!=tong(y))
    //     return tong(x)<tong(y);
    // else
    //     return x<y
    
}
int main()
{
    //?sắp xếp tăng dần
    // int a[]={6,7,1,3,4,2,5};
    // int n=7;
    //sort(a,a+n); //O(nlogn)
    // sort(a+2,a+7);
    // for(int x:a)
    //     cout<<x<<" ";
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // int dem=1;
    //? Đếm phần tử khác nhau trong mảng
    // for(int i=1;i<n;i++)
    // {
    //     if(a[i]!=a[i-1])
    //         dem++;
    // }
    // cout<<dem;
    //? Tìm độ chênh lệch nhỏ nhất giữa 2 phần tử bất kỳ
    // int res=INT_MAX;
    // for(int i=1;i<n;i++)
    // {
    //     res=min(res,a[i]-a[i-1]);

    // }
    // cout<<res<<endl;
    // int cnt=0;
    // for(int i=1;i<n;i++)
    //     if(res==a[i]-a[i-1])
    //         ++cnt;
    
    // cout<<cnt<<endl;
    //?Sắp xếp giảm dần
    // int a[]={6,7,1,3,4,2,5};
    // int n=7;
    // sort(a,a+n,greater<int>());
    // for(int x:a)
    //     cout<<x;
    //? Sort vector
    //! sort(v.begin(),v.end())
    //? Dùng hàm 
    int a[]={6,7,1,3,4,2,5};
    int n=7;
    sort(a,a+n,cmp);
    for(int x:a)
        cout<<x<<" ";

    system("pause");

    return 0;
}