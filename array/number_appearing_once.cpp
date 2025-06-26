#include<iostream>
#include<vector>
using namespace std;
// brute force is using linear search having tc=O(n^2)
// this is better approach than that - an array hashing with tc=O(n)
int singleel(vector<int>nums){
    int maxel=nums[0];
    for(int i=0;i<nums.size();i++){
        maxel=max(maxel,nums[i]);
    }
    vector<int>hash(maxel+1,0);
    for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(hash[nums[i]]==1){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int>nums={4,1,2,1,2};
    cout<<singleel(nums);
    return 0;
}