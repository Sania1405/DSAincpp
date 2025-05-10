#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int num):data(num),next(nullptr){}
};
Node*start=nullptr;
bool search(int val){
    Node*ptr=start;
    while(ptr!=nullptr){
        if(ptr->data==val){
            cout<<"element found"<<endl;
            return true;
        }
        ptr=ptr->next;
    }
    cout<<"Element not found";
    return false;
}
void traverse(){
    if(start==nullptr){
        cout<<"Empty list"<<endl;
    }else{
        Node*ptr=start;
        while(ptr!=nullptr){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}
void insertionatbegin(int num){
    Node*new_node=new Node(num);
    if(start==nullptr){
        start=new_node;
    }else{
        new_node->next=start;
        start=new_node;
    }
}
void insertionatend(int num){
    Node*new_node=new Node(num);
    if(start==nullptr){
        start=new_node;
    }else{
        Node*ptr=start;
        while(ptr->next!=nullptr){
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }
}
void insertafternode(int num,int val){
        Node*new_node=new Node(num);
        if(start==nullptr){
            cout<<"List empty";
        }else{
            Node*ptr=start;
            while(ptr!=nullptr && ptr->data!=val){
                ptr=ptr->next;
            }
            new_node->next=ptr->next;
            ptr->next=new_node;
        }
    }
void insertbeforenode(int num,int val){
    Node*new_node=new Node(num);
    if(start==nullptr){
        cout<<"Empty list"<<endl;
    }else{
        Node*preptr=nullptr;
        Node*ptr=start;
        while(ptr!=nullptr && ptr->data!=val){
            preptr=ptr;
            ptr=ptr->next;
        }
        new_node->next=preptr->next;
        preptr->next=new_node;
    }
}
int main(){
    insertionatbegin(1);
    insertionatbegin(2);
    insertionatbegin(4);
    insertionatbegin(5);
    cout<<"Linked list elements: "<<endl;
    traverse();
    cout<<endl;
    cout<<"After insertion at end: "<<endl;
    insertionatend(6);
    insertionatend(8);
    insertionatend(9);
    traverse();
    cout<<endl;
    cout<<"Insertion after node: "<<endl;
    insertafternode(3,2);
    traverse();
    cout<<endl;
    cout<<"Insertion before node: "<<endl;
    insertbeforenode(7,8);
    traverse();
    cout<<endl;
    search(40);
    return 0;
}