//brute force method to find sum of subarray having time complexity O(n^3)
#include<iostream>
#include<climits>
using namespace std;
void MaxSubSum(int *arr,int n){
    int maxsum=INT_MIN; //have to intilize coz garbage value will not give accurate result in case array have only negative values..
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
             int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];
            }
            cout<<currsum<<",";
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