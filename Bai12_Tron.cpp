#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,3,5, 8,9,10};
    int b[]={2,2,4,7,10,13,14};
    int n=6,m=7;
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" "; 
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }
    system("pause");
    return 0;
}