#include <bits/stdc++.h>
using namespace std;

//*Hàm void
void display()
{
    cout << "Xin chao 28tech\n";
    cout << "Ham void\n";
}
//*tham số
void displaynumber(int x, int y, int z)
{
    cout << y << " " << x << " " << z << endl;
    cout << x + y + z << endl;
    cout << "KETTHUC!";
}
//*Hàm có giá trị trả về
int solve(int x, int y, int z)
{
    cout << "28tech.com.vn" << endl;
    cout << 2 * x << " " << 3 * y << " " << 4 * z << endl;
    return x * y * z;
}
// Tổng các chữ số của n
int sum_digit(long long n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}
//* Hàm trả về true false
bool check(long long n)
{
    if (sum_digit(n) % 10 == 8)
        return true;
    return false; 
    //return sum%10==8;
}

//check số đẹp
bool so_dep(int n)
{
    int deml=0;int demc=0;
    while(n)
    {
        int kq=n%10;
        if(kq%2==0)
            demc++;
        else
            deml++;
        n/=10;
    }
    if(demc==deml)
        return true;
    return false;
}

//*pass by value: truyền tham trị
void thay_doi(int n)
{
    n=28;
}
//*pass by reference: truyền tham chiếu
void thay_doi2(int &n)
{
    n=13;
}
int main()
{
    //*Hàm void
    // display();
    //*đối số
    // int a,b,c;
    // cin>>a>>b>>c;
    // displaynumber(a,b,c);
    //*Hàm có giá trị trả về
    // int a, b, c;
    // cin >> a >> b >> c;
    // cout << solve(a, b, c) << endl;
    // cout<<sum_digit(123)<<endl;
    // int n;cin>>n;
    // long long x;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>x;
    //     cout<<sum_digit(x)<<" ";
    // }
    // long long x;
    // cin >> x;
    // if (check(x))
    //     cout << "28tech";
    // else
    //     cout << "29tech";
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(so_dep(i))
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    //*pass by value
    // int x=100;
    // thay_doi(x);
    // cout<<x<<endl;
    //*pass by reference
    // int z=0;
    // thay_doi2(z);
    // cout<<z<<endl;
    cout<<"Hello world";
    return 0;
}