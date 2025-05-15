#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int num):data(num),next(nullptr){}
};
Node*front=nullptr;
Node*rear=nullptr;
void enqueue(int val){
    Node*newnode=new Node(val);
    if(rear==nullptr){
        front=rear=newnode;
        return;
    }else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    if(front==nullptr){
        return;
    }
    Node*temp=front;
    front=front->next;
    delete temp;
}
void display(){
        Node*temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    cout<<endl;
    display();
    return 0;
}