#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int>vec;
    public:
    void push(int val){
        vec.push_back(val);
        cout<<"value "<<val<<" pushed"<<endl;
    }
    int top(){
        if(!vec.empty()){
        int lastidx=vec.size()-1;
        return vec[lastidx];
        }else{
            cout<<"stack is empty";
            return -1;
        }
    }
    void pop(){
        if(!vec.empty()){
            vec.pop_back();
        }else{
            cout<<"stack is empty";
        }
    }
    void display(){
        cout<<"Stack is: ";
        for(int v:vec){
            cout<<v<<" ";
        }
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    cout<<endl;
    cout<<"top value: "<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<endl;
    cout<<"top value: "<<s.top();
    return 0;
}
