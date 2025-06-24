#include<iostream>
#include<vector>
using namespace std;
// this is optimal sol using two pointers approach with tc=O(n)
void movezeros(vector<int>nums){
    int j=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums={1,0,2,3,2,0,0,4,5,1};
    movezeros(nums);
    return 0;
}