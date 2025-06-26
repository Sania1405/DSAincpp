#include<iostream>
#include<vector>
using namespace std;
// two pointer approach(optimal) 
int maxlength(vector<int>nums,long long x){
    int len=0;
    int n=nums.size();
    int left=0;
    int right=0;
    long long sum=nums[0];
    while(right<n){ //runs n times
        while(left<=right && sum>x){ //not running n times each but runs n times total O(n)
            sum-=nums[left];
            left++;
        }                        //n+n=2(n)=o(n)
        if(sum==x){
            len=max(len,right-left+1);
        }
        right++;
        if(right<n){
            sum+=nums[right];
        }
    }
    return len;
}
int main(){
    long long x=3;
    vector<int>nums={1,2,3,1,1,1,1};
    cout<<maxlength(nums,x);
    return 0;
}