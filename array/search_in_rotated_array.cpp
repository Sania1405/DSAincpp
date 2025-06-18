#include<iostream>
#include<vector>
using namespace std;
// sorted rotated array:when the arry is sorted 90% of thee problems are solved using binary search , when we have to optimize it
int search(vector<int>& arr,int target){
    int low=0;
    int high=arr.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){   //CASE 1:check if mid matches the target
            return mid;
        }else if(arr[low]<=arr[mid]){ //CASE 2: if the left part of array sorted? if yes
            if(target>=arr[low] && target<=arr[mid]){ //target lies bw low and mid?
                high=mid; //if yes make mid as high and discard right side of array
            }else{
                low=mid+1; //otherwise discard left part by making low as mid+1
            }
        }else{
            if(target>=arr[mid+1] && target<=arr[high]){ //CASE 3:target value bw mid+1 and high???
                low=mid+1;  //discard left part of array
            }else{
                high=mid-1;    //else discard right part of array
            }
        }
    }
    return -1;   //value not exists...
}
int main(){
    vector<int>arr={4,5,6,7,0,1,2};
    int target=6;
    cout<<search(arr,target);
    return 0;
}