#include<iostream>
#include<list>
using namespace std;
template <class T>
class Stack{
    list<T>ll;
    public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    T top(){
        return ll.front();
    }
    bool isempty(){
        return ll.size()==0;
    }
};
int main(){
    Stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3); // elements pushed like 1 first become head,then 2 become hhead at last 3 ,,,and while poping the last element will be first out that is 3 2 1 which is order of output.
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}