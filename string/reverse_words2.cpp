#include<bits/stdc++.h>
using namespace std;
// tc=o(n) and sc=o(1) constant space
int main(){
    string str1="hello world";
    string temp="";
    string ans="";
    int left=0;
    int right=str1.length()-1;
    while(left<=right){
        char ch=str1[left];
        if(ch!=' '){
            temp+=ch;
        }else if(ch==' '){
            if(!ans.empty()){
                ans=temp+" "+ans;
            }else{
                ans=temp;
            }
            temp="";
        }
        left++;
    }
    if(temp!=""){
        if(ans!=""){
            ans=temp+" "+ans;
        }else{
            ans=temp;
        }
    }
    cout<<ans;
    return 0;
}