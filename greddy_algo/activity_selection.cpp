#include<iostream>
#include<vector>
using namespace std;
int activitysel(vector<int>start,vector<int>end){
    int count=1;
    cout<<"activity 0 selected"<<endl;
    int currEnd=end[0];
    for(int i=1;i<start.size();i++){
        if(start[i]>=currEnd){          //non overlaping condition such that the end time of act 1 should be less than start time of act 2....
            cout<<"activity "<<i<<" selected"<<endl;
            count++;
            currEnd=end[i];
        } //overlapping conditions will not execute parallell
    }
    return count;
}
int main(){
    vector<int>start={1,3,0,5,8,5};
    vector<int>end={2,4,6,7,9,9};
    cout<<activitysel(start,end);
    return 0;
}