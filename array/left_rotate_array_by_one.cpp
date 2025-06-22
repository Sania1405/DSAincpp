#include<iostream>
#include<vector>
using namespace std;
// time compplexity=O(n) brute force method
void leftrotate(vector<int>nums){
    int el=nums[0];
    cout<<"before rotation";
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    for(int i=1;i<nums.size();i++){
        nums[i-1]=nums[i];
    }
    nums[nums.size()-1]=el;
    cout<<endl;
    cout<<"after rotation";
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums={1,2,3,4,5};
    leftrotate(nums);
    return 0;
}