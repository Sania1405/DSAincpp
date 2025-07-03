#include<bits/stdc++.h>
using namespace std;
// tc=o(nlogn)
bool stringanagram(string s1,string s2){
    if(s1.size()!=s2.size()){
        cout<<"false";
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i] ){
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
    stringanagram(str1,str2);
    return 0;
}