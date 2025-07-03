#include<bits/stdc++.h>
using namespace std;
// optimal solution with tc=o(n) and sc=o(1)
bool checkanagram(string s1,string s2){
    if(s1.size()!=s2.size()){
        cout<<"false";
        return false;
    }
    int freq[26]={0};
    for(int i=0;i<s1.size();i++){
        freq[s1[i]-'A']++;
    }
    for(int i=0;i<s2.size();i++){
        freq[s2[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"false";
            return false;
        }
    }
    cout<<"true";
    return true;
}
int main(){
    string str1;
    string str2;
    cout<<"enter string 1 ";
    cin>>str1;
    cout<<"enter string 2 ";
    cin>>str2;
    checkanagram(str1,str2);
    return 0;
}