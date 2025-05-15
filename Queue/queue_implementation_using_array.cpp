#include<iostream>
using namespace std;
#define MAX 5
class Queue{
    private:
    int front,rear,size;
    int que[MAX];
    public:
    Queue():front(0),rear(-1),size(0) {}
    void enqueue(int val){
        if(rear>=MAX-1){
            cout<<"queue overflow"<<endl;
    }else{
        que[++rear]=val;
        size++;
    }
    }
    void dequeue(){
        if(size<=0){
            cout<<"queue underflow"<<endl;
        }else{
            for(int i=0;i<rear;i++){
                que[i]=que[i+1];
            }
            size--;
            rear--;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<que[i]<<" ";
        }
        cout<<endl;
    }
    bool isempty(){
        if(size<=0){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    cout<<q.isempty()<<endl;
    return 0;
}