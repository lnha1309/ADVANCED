#include <bits/stdc++.h>
using namespace std;

//insert
//size
//find
//cout
//erase
int main()
{
    set <int> se;
    //iterator
    set <int>::iterator it=se.begin();
    se.insert(1);
    se.insert(2);
    se.insert(1);
    se.insert(2);
    // Tự loại bỏ trùng,ko có chỉ sô
    //duyệt bằng loop base for loop
    // cout<<se.size();
    for(int x:se)
        cout<<x<<" ";
    //duyệt bằng iterator
    for(it=se.begin();it!=se.end();it++)
        cout<<*it<<" ";
    // lấy số nhỏ nhất
    cout<<endl<<*se.begin()<<endl;
    cout<<*se.rbegin()<<endl;
    
    //  duyệt ngươcj
    set <int>::reverse_iterator it1=se.rbegin();
    for(it1=se.rbegin();it1!=se.rend();it1++)
        cout<<*it1<<" ";

    //tìm phần tử O(log n)
    set <int> ::iterator it3=se.find(10);
    if(it3==se.end())
        cout<<"Not found";
    else
        cout<<"found";
    //dem
    if(se.count(3))
        cout<<"found";
    else
        cout<<"not found";

    //xoá
    se.erase(1);
     for(int x:se)
        cout<<x<<" ";
    return 0;
}