#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nextgreater(vector<int>arr,vector<int>ans){
    stack<int>s;
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty()&&s.top()<=arr[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.size();
        }
        s.push(arr[i]);
    }
    return ans;
};
int main(){
    vector<int>arr={6,8,0,1,3};
    vector<int>ans={0,0,0,0,0};
    int n=arr.size();
    vector<int>res=nextgreater(arr,ans);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}