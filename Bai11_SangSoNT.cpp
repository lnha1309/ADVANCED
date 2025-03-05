#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int prime[10000001];
//!Bước 1: cho tất cả các số trong mảng đều là snt
//!Bước 2: sàng, loại dần các số không phải là số nguyên tố
//? Nếu 1 số là bội của 1 số nguyên tố khác thì nó ko phải là số nguyên tố
void sang()
{
    for(int i=0;i<=1000000;i++)
    {
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=sqrt(1000000);i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                prime[j]=0;
            }
        }
    }

} 
int main()
{
    sang();
    
    getch();
    return 0;
}