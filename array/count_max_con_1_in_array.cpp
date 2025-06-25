#include<iostream>
#include<vector>
using namespace std;
// time complexity=O(n)
int maxconsone(vector<int>nums){
    int count=0;
    int maxcount=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
            maxcount=max(count,maxcount);
        }else{
            count=0;
        }
    }
    return maxcount;
}
int main(){
    vector<int>nums={1,0,0,1,1,0,1};
    cout<<maxconsone(nums);
    return 0;
}