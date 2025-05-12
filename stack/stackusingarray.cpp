#include<iostream>
#define MAX 5
using namespace std;
class Stack{
    int stk[MAX];
    int top;
    public:
    Stack(){top=-1;}
    void push(int val){
        if(top>=MAX-1){
            cout<<"Stack overflow! you cant push more elements."<<endl;
        }else{
            top++;
            stk[top]=val;
        }
    }
    void display(){
        cout<<"Stack is: ";
        for(int i=0;i<=top;i++){
            cout<<stk[i]<<" ";
        }
    }
    void pop(){
        if(top<=-1){
            cout<<"Stack underflow!"<<endl;
        }else{
            top--;
        }
    }
    int peek(){
        if(top<=-1){
            cout<<"Empty stack";
        }else{
            cout<<"top: "<<stk[top];
            return stk[top];
        }
    }
    int size(){
        cout<<"size"<<top+1;
        return top+1;
    }
};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(88);
    s1.display();
    s1.peek();
    cout<<endl;
    s1.pop();
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();
    // s1.size();
    return 0;
}