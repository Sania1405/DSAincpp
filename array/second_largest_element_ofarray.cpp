#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// optimal solution
int secondl(vector<int>arr){
    int largest=arr[0];
    int slarg=-1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            slarg=largest;
            largest=arr[i];
        }else if(arr[i]>slarg && arr[i]<largest){
            slarg=arr[i];
        }
    }
    return slarg;
}
int seconds(vector<int>arr){
    int smallest=arr[0];
    int seconds=INT_MAX;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<smallest){
            seconds=smallest;
            smallest=arr[i];
        }else if(arr[i]!=smallest && arr[i]<seconds){
            seconds=arr[i];
        }
    }
    return seconds;
}
int main(){
    vector<int>arr={1,3,2,8,7,9};
    cout<<secondl(arr);
    cout<<endl;
    cout<<seconds(arr);
    return 0;
}