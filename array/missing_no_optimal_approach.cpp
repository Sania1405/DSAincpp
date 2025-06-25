#include<iostream>
#include<vector>
using namespace std;
// time complexity=O(n) optimal approach..
int missingno(vector<int>nums,int n){
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<nums.size();i++){
        sum2+=nums[i];
    }
    int missno=sum1-sum2;
    return missno;
}
int main(){
    int n=5;
    vector<int>nums={1,2,4,5};
    cout<<missingno(nums,n);
    return 0;
}