#include <bits/stdc++.h>
using namespace std;
//insert
//size
//find áp dụng cho key
//cout áp dụng cho key
//erase
int main()
{
    //lnha
    //map<key,value> ,key đã có thì ko thể thêm vào
    map <int ,int> mp; //pair <int,int>
    mp.insert({1,2});
    mp.insert({1,5});
    mp.insert({2,1});
    cout<<mp.size()<<endl;
    cout<<mp[1]<<endl;
    mp[4]=1000;
    cout<<mp[4];
    //duyệt map
    for(pair<int,int> item:mp)
        cout<<item.first<<" "<<item.second<<endl;
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        // cout<<it->first<<" "<<it->second<<endl;
    }
    map <int,int>::iterator it1=mp.find(2);
    if(it1!=mp.begin())
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
    mp.erase(2);

    //đếm tần suất
    map <int,int> mp1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp1[x]++;
    }
    for(pair<int,int> it3:mp1)
    {
        cout<<it3.first<<" "<<it3.second<<endl;
    }
    return 0;
}
