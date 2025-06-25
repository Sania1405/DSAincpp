#include<iostream>
#include<vector>
using namespace std;
// time complexity=O(n)
int missingno(vector<int>nums,int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[nums[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}
int main(){
    int n=5;
    vector<int>nums={1,2,4,5};
    cout<<missingno(nums,n);
    return 0;
}