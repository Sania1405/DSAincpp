#include<iostream>
using namespace std;
#include<stack>
#include<string>
//time complexity O(n)
string reverse(string str){
    string ans;
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top=s.top();
        ans+=top;
        s.pop();
    }
    return ans;
}
int main(){
    string str="SANIA";
    cout<<"reverse of string : "<<str<<" : "<<reverse(str)<<endl;
    return 0;
}