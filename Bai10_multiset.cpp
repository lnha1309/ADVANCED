#include <bits/stdc++.h>
using namespace std;
//find : tìm thằng đầu tiên
int main()
{
    //khác set chỗ số trùng nhau vẫn lưu vào, còn set thì ko
    multiset <int> se={1,2,3,4,5,5,4,3,2,1};
    multiset <int> ::iterator it=se.find(2);
    --it;
    cout<<*it<<endl;
    cout<<se.count(2)<<endl;
    for(int x:se)
        cout<<x<<" ";
    //xoá
    cout<<"\n";
    //xoá 1 phần
    auto it2=se.find(2);
    se.erase(it2);
    for(int x:se)
        cout<<x<<" ";
    return 0;
}