#include<iostream>
using namespace std;
#include<stack>
//using STL stack
//time complexity O(n)+O(n)=O(n)
void PAB(stack<int>&s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp=s.top(); //temp remenbers its value at each step 
    s.pop();
    PAB(s,val); //function call executes once only
    s.push(temp); //function starts working from here again
}
void reverse_stack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse_stack(s);
    PAB(s,temp);
}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    print(s);
    reverse_stack(s);
    cout<<endl;
    print(s);
    return 0;
}