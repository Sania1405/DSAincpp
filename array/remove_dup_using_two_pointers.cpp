#include<iostream>
#include<vector>
// optimal solution of removing duplicates fron sorted array and returning unique elements only using two pointers approach with better time complexity O(n)...
using namespace std;
int removeduplicates(vector<int>nums){
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    for(int k=0;k<=i;k++){
        cout<<nums[k]<<" ";
    }
    return i+1;
}
int main(){
    vector<int>nums={1,1,1,2,2,3,3,3,4};
    cout<<"count: "<<removeduplicates(nums);
    return 0;
}