// method to find sum of subarray with optimization having time complexity O(n^2)
#include<iostream>
#include<climits>
using namespace std;
void MaxSubSum(int *arr,int n){
    int maxsum=INT_MIN; //have to intilize coz garbage value will not give accurate result in case array have only negative values..
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            // for(int i=start;i<=end;i++){
            //     currsum+=arr[i];
            // } //no need of this loop now we dont have to recalculate sum we will just adding the end index to the currsum and when start index changes we will initilaize currsum to 0. 
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<"maximum sum of subarray is: "<<maxsum;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;
    MaxSubSum(arr,n);
    return 0;
}