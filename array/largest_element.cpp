#include<iostream>
#include<vector>
using namespace std;
int largestel(vector<int>nums){
    int largest=nums[0];
    for(int i=1;i<nums.size();i++){
        if(largest<=nums[i]){
            largest=nums[i];
        }
    }
    return largest;
}
int main(){
    vector<int>nums={4,9,2,5,1};
    cout<<largestel(nums);
    return 0;
}