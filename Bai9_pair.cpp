#include <bits/stdc++.h>
#include <conio.h>
#include <vector>
using namespace std;
int main()
{
    //!Khai báo pair
    //? first, second
    // pair<int,int> p;
    // p.first=20;
    // p.second=19;
    int n;cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    pair<char,pair<int,int>> b;
    b.first='@';
    b.second.first=1;
    b.second.second=2;
    cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;
    getch();
    return 0;
}