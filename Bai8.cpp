#include <bits/stdc++.h>
using namespace std;
//! dạng 1 : liệt kê đếm các phần tử trong mảng thoả mãn tính chất cho trước
//! dạng 2: Tìm min max
//! dạng 3: Mạng đối xứng,lật ngược mảng;
// ! đối xứng
bool doi_xungg(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
            return false;
    }
    return true;
}
// ! dạng 4:Xét cặp phần tử trong mảng 


// ! dạng 5 : đếm liệt kê tần suất xuất hiện khác nhau trong mảng
//* liệt kê các phần tử khác nhau trong mảng
void liet_ke(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool found=true;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                found=false;
            }
        }
        if(found==true)
        {
            cout<<a[i]<<endl;
        }
    }
}
//* tần suất
void tan_suat(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool found=true;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
                found=false;
        }
        if(found==true)
        {
            int dem=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j])
                    dem++;
            }
            cout<<a[i]<<" "<<dem;
        }
    }
}

//!dạng 6 số fibo sử dụng mảng
long long fibo[100];
void fibonaci()
{
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=92;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    tan_suat(a,n);
    return 0;
}