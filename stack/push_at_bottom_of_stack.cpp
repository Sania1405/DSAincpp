#include<iostream>
using namespace std;
#include<stack>
//using STL stack
//time complexity O(n)
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
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    PAB(s,4);    // output: 3 2 1 4
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}