// method to find sum of subarray using kadane's algo
#include<iostream>
#include<climits>
using namespace std;
void MaxSubSum(int *arr,int n){
    int maxsum=INT_MIN; //have to intilize coz garbage value will not give accurate result in case array have only negative values..
    int currsum=0;
    // here we will be using one loop only adding values to currsum and checking maxsum simultaneoulsy and if any negative sum we get we simply reinitialize the currsum value.
    for(int start=0;start<n;start++){
        currsum+=arr[start];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"maximum sum of subarray is: "<<maxsum;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;
    MaxSubSum(arr,n);
    return 0;
}