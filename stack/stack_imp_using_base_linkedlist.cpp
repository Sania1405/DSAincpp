#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int num):data(num),next(nullptr){}
};
Node*Top=nullptr;
void push(int val){
    Node*newnode=new Node(val);
    newnode->next=Top;
    Top=newnode;
    cout<<val<<" pushed into the stack"<<endl;
}
int peek(){
    return Top->data;
}
void pop(){
    if(Top==nullptr){
        cout<<"Stack empty"<<endl;
    }else{
        Node*temp=Top;
        Top=Top->next;
        cout<<temp->data<<" Popped from the stack"<<endl;
        delete temp;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    cout<<"Topmost element of stack is: "<<peek()<<endl;
    pop();
    cout<<"Topmost element of stack is: "<<peek()<<endl;
    return 0;
}