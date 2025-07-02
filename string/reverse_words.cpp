#include<bits/stdc++.h>
using namespace std;
//tc=O(N),sc=O(N) for using stack (brute force method)
int main(){
    string str1="hello world";
    stack<string>st;
    str1+=" ";  //string given extra space at last
    string str2="";  //new string initialize
    for(int i=0;i<str1.length();i++){
        if(str1[i]==' '){   //if space came means new word will gonna start
            st.push(str2); //so push prev word added to new string to stack
            str2="";  //reset str2 again
        }else{        //if space not encounter means keeping adding letter to new string2
            str2+=str1[i];  
        }
    }
    string ans=" ";  //make new string
    while(st.size()!=1){   //loop will be executing till size 1 coze if playes till 0 extra space will be given to it so have to simply print last word to the end
        ans+=st.top()+" ";  //space also given after each word
        st.pop();  //removing word side by side
    }
    ans+=st.top();  //last element added
    cout<<ans<<endl;
    return 0;
}