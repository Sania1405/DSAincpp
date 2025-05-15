#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkdup(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch!=')'){
            s.push(ch); //push everything except closing bracket..
        }else{
            if(s.top()=='(') return true;   //duplicate is there as ch is opening bracket and next we find closing so there are no char between these brackets. 
            while(s.top()!='('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}
int main(){
    string str="((a+b))"; //true
    cout<<checkdup(str);
    return 0;
}