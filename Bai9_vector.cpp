#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{
    //khai báo vector
    vector<int> v;
    //!push_back(): Thêm giá trị đó vào cuối vector
    v.push_back(1);
    v.push_back(2);
    //!Xem số lượng trong vector: v.size()
    // cout<<v.size();
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    //! Nhập phần tử vào vector
    // int n;
    // cin>>n;
    // vector<int> a;
    // for(int i=0;i<n;i++)
    // {
    //     int tmp;
    //     cin>>tmp;
    //     a.push_back(tmp);
    // }
    // for(int i:a)
    // {
    //     cout<<i<<" "<<endl;
    // }
    //!khai báo iterator
    // vector<int>::iterator it=v.begin();
    // vector<int>::iterator ite=v.begin()+1;
    //? Nếu ko có dấu * thì nó không in ra cái gì hết
    // cout<<*it<<endl;
    // cout<<*ite<<endl;
    //!iterator có thể dùng các toán tử : ++ -- += -=
    //!Không đc viết it=it-1 
    // ite--;
    // cout<<*ite<<endl;
    //!insert(vitri,giatri): Chèn giá trị
    // v.insert(v.begin()+2,9);
    // for(int i:v)
    // {
    //     cout<<i<<endl;
    // }
    //!erase(vitri): xoá tại vị trí
    v.erase(v.begin()+1);
    //!Khai báo mảng 2 chiều trong vector
    vector<int> mt[2];
    
    getch();
    return 0;
}