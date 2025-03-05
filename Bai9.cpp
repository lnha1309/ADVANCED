#include <bits/stdc++.h>
using namespace std;
//! dạng 7:mảng đánh dấu,phân phối
//* Mảng đánh dấu
// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?
int cnt[1000001]; //khởi tạo 1 triệu phần tử =0;
void mang_danh_dau(int a[],int n)
{
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]] = 1;
        max_val = max(max_val, a[i]);
    }
    int dem = 0;
    for (int i = 0; i <= max_val; i++)
    {
        if (cnt[i] == 1)
            dem++;
    }
    cout << dem;
    // in theo thứ tự trong mạng
    for(int i=0;i<n;i++)
    {
        if(cnt[a[i]]!=0)
        {
            cout<<a[i]<<" ";
            cnt[a[i]]=0;
        }
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mang_danh_dau(a,n);
    // phút 38:29
    return 0;
}