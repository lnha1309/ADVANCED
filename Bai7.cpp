#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//! số fibonaci
// * Kiểm tra 1 số có phải là số fibo ko
bool fibo(ll n)
{
    if(n==0||n==1)
        return true;
    ll truoc=0,sau=1;
    for(int i=2;i<=92;i++)
    {
        ll fi=truoc + sau;
        if(n==fi)
            return true;
        truoc=sau;
        sau=fi;
    }
    return false;
}
// * liệt kê n số fibo đầu tiên
void liet_ke(int n)
{
    ll truoc = 0, sau = 1;
    cout<<truoc<<" "<<sau<<" ";
    for(int i=2;i<=n;i++)
    {
        int fi=truoc+sau;
        cout<<fi<<" ";
        truoc=sau;
        sau=fi;
    }
}
// * In ra số fibo thứ n
long long fibo_thu_n(int n)
{
    ll truoc = 0, sau = 1;
    if(n==0)
        return truoc;
    if(n==1)
        return sau;
    for (int i = 2; i <= 92; i++)
    {
        ll fi = truoc + sau;
        if (i==n)
            return fi;
        truoc = sau;
        sau = fi;
    }
}
// ! Phân tích thừa số
void phantich(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cout<<i<<" ";
                n/=i;
            }
        }
    }
    if(n!=1)
        cout<<n<<endl;
}
// ! Lý thuyết đồng dư
// *(A + B) % C = ((A % C) + (B % C)) % C
// *(A - B) % C = ((A % C) - (B % C)) % C
// *(A * B) % C = ((A % C) * (B % C)) % C
// *(A / B) % C = ((A % C) * (B-1 % C)) % C
void Tong_chia_du()
{
    int n;
    long long sum=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        sum *= a % 1000000007;
        //! nhân đến đâu chia dư đến đấy
        sum %= 1000000007;
    }
    cout<<sum;
}
int tt(int a[],int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return a[0];
    int mid=n/2;
    int rsize=n-mid;
    int lsum=tt(a,mid);
    int rsum=tt(a+mid,rsize);
    return lsum+rsum;
}
int main()
{
    // cout<<fibo(5);
    // liet_ke(2);
    // cout<<fibo_thu_n(10);
    // phantich(30);
    // Tong_chia_du();
    int a[6]={1,2,3,4,5};
    // di chuyển con trỏ tới địa chỉ chứa a[3];
    cout<<a+3<<endl;
    cout<<&a[3];
    return 0;
}