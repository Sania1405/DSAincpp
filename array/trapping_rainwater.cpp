#include<iostream>
#include<vector>
using namespace std;
// bar needs a valley to trap water that is larger bars on both sides(but maybe not immediate ones)
// min of (left largest and right largest)-bar height = water trap
// basically we need to find 
int trap(vector<int>& heights){
    vector<int>leftmax(heights.size());
    leftmax[0]=heights[0];
    cout<<leftmax[0]<<" ";
    for(int i=1;i<heights.size();i++){
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
        cout<<leftmax[i]<<" ";
    }
    cout<<endl;
    vector<int>rightmax(heights.size());
    rightmax[heights.size()-1]=heights[heights.size()-1];
    cout<<rightmax[heights.size()-1]<<" ";
    for(int i=heights.size()-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
        cout<<rightmax[i]<<" ";
    }
    cout<<endl;
    int watertrap=0;
    for(int i=0;i<heights.size();i++){
        int currwater=min(leftmax[i],rightmax[i])-heights[i];
        if(currwater>0){
            watertrap+=currwater;
        }
    }
    cout<<"water trapped: "<<watertrap;
    return watertrap;
}
int main(){
    vector<int>heights={4,2,0,6,3,2,5};
    trap(heights);
    return 0;
}