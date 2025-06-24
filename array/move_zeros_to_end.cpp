#include<iostream>
#include<vector>
using namespace std;
// brute force method
void movezeros(vector<int>nums){
    vector<int>temp;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    int n=temp.size();
    for(int i=0;i<n;i++){
        nums[i]=temp[i];
    }
    for(int i=n;i<nums.size();i++){
        nums[i]=0;
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums={1,0,2,3,0,4,0,1};
    movezeros(nums);
    return 0;
}