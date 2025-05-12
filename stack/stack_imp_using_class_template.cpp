#include<iostream>
#include<vector>
using namespace std;
// as here we have used the class template , here we are asumming datatype as a varibale T and that datatype will be issued by main function to us as in the main function we are declaring our datatype instaed of T .. it can be integer , float,char,string etc..
template <class T>
class Stack{
        vector<T>vec;
        public:
        void push(T val){
            vec.push_back(val);
        }
        void pop(){
            cout<<"deleting top element....";
            vec.pop_back();
        }
        void display(){
            for(char v:vec){
                cout<<v<<" ";
            }
        }
};
int main(){
    Stack<char>s;
    s.push('s');
    s.push('a');
    s.push('n');
    s.push('i');
    s.push('a');
    cout<<endl;
    s.display();
    cout<<endl;
    s.pop();
    cout<<endl;
    s.display();
    cout<<endl;
    s.pop();
    cout<<endl;
    s.display();
    return 0;
}