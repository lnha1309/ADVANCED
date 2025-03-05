#include <bits/stdc++.h>
using namespace std;
//!Kiểm tra số tăng
bool so_tang(int n)
{
    while(n>=10)
    {
        int sau=n%10;
        int truoc=(n/10)%10;
        if(truoc>=sau)
            return false;
        n/=10;
    }
    return true;
}
// ! lật ngược số
int lat_nguoc(int n)
{
    int lat=0;
    while(n)
    {
        lat=lat*10+n%10;
        n/=10;
    }
    return lat;
}

//!số đối xứng là lật ngược nó rồi kiểm tra coi số lật có có = số bằng ban đầu ko

bool check(int n)
{
    if(n==lat_nguoc(n))
        return true;
    return false;
}

//! Số chính phương
bool so_chinh_phuong(int n)
{
    int can=sqrt(n);
    if(can*can==n)
        return true;
    return false;
}

//! Tổng ước
int tonguoc(int n)
{
    int sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            sum+=i;
            if(i!=n/i)
                sum+=i;
    }
    return sum;
}

// ! Số nguyên tố
bool nguyen_to(int n)
{
    int dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    // cout<<lat_nguoc(123)<<endl;
    // cout<<check(123);
    for(int i=1;i<=10000;i++)
    {
        if(so_chinh_phuong(i))
            cout<<i<<" ";
    }

    cout<<nguyen_to(9);
    return 0;
}