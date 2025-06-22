#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
// this is brute force appraoch in which there is sorted array is there with duplicated and we have to return that array without duplicates.
// so we will be using hashset whish is a DS which only stores unique elements
int removedup(vector<int>nums){
    unordered_set<int>set;
    for(int i=0;i<nums.size();i++){
        set.insert(nums[i]);
    }
    int k=set.size();
    int j=0;
    for(int x:set){
        nums[j++]=x;
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return k;
}
int main(){
    vector<int>nums={1,1,1,2,2,3,3,3,4};
    cout<<removedup(nums);
    return 0;
}