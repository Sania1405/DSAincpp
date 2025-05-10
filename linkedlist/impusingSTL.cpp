// implementing linked list using STL
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.push_back(60);
    ll.push_front(70);
    ll.push_front(80);
    for(int val:ll){
        cout<<val<<"--> ";
    }
    cout<<"NULL"<<endl;
    cout<<"size :"<<ll.size()<<endl;
    cout<<"front val:"<<ll.front()<<endl;
    cout<<"back val:"<<ll.back()<<endl;
    ll.pop_front();
    ll.pop_back();
    for(int val:ll){
        cout<<val<<"--> ";
    }
    cout<<"NULL"<<endl;
}
