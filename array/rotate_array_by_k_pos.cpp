#include<iostream>
#include<vector>
using namespace std;
// time complexity=O(n),space complexity =O(k) space needs for temp array
void leftrotation(vector<int>nums,int k){
    vector<int>temp(nums.begin(),nums.begin()+k); //storing first k elements to temp
    for(int i=k;i<nums.size();i++){  //shifitng num elements to left
        nums[i-k]=nums[i];
    }
    for(int i=0;i<k;i++){
        nums[nums.size()-k+i]=temp[i];
    }
    cout<<endl;
    cout<<"after rotation by "<<k<<" elements";
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
void rightrotation(vector<int>nums,int k){
    vector<int>temp(nums.end()-k,nums.end()); //storing last k elements to temp
    for(int i=nums.size()-k-1;i>=0;i--){
        nums[i+k]=nums[i];
    }
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
    cout<<endl;
    cout<<"after right rotation by "<<k<<" elements";
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int k;
    cout<<"enter k's value: ";
    cin>>k;
    string r;
    cout<<"rotation? ";
    cin>>r;
    cout<<"before rotation";
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    if(r=="left"){
        leftrotation(nums,k);   
    }else{
        rightrotation(nums,k);
    }
    return 0;
}