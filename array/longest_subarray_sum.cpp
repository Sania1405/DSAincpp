#include<iostream>
#include<vector>
using namespace std;
// tc=O(n^3)
int maxlength(vector<int>nums,long long x){
    int len=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            long long s=0;
            for(int k=i;k<=j;k++){
                s+=nums[k];
            }
            if(s==x){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}
int main(){
    long long x=10;
    vector<int>nums={2,3,5,1,9};
    cout<<maxlength(nums,x);
    return 0;
}