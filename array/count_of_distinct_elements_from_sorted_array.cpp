#include<iostream>
#include<vector>
using namespace std;
int removedup(vector<int>nums){
    int count=1;
    int el;
    for(int i=1;i<nums.size();i++){
        el=nums[i-1];
        if(el!=nums[i]){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>nums={1,1,1,2,2,3,3,3,4};
    cout<<removedup(nums);
    return 0;
}