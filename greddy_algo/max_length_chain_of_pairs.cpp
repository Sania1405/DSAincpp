#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<double,int>p1,pair<double,int>p2){
    return p1.first>p2.first;
}
int maxlength(vector<pair<int,int>>pairs){
    int n=pairs.size();
    int count=1;
    int currEnd=pairs[0].second;
    for(int i=1;i<n;i++){
        if(pairs[i].first>=currEnd){   
            count++;
            currEnd=pairs[i].second;
        } 
    }
    return count;
    //same logic like activity selection but the only diff here we made pairs first
}
int main(){
    int n=5;
    vector<pair<int,int>>pairs(n,make_pair(0,0));
    pairs[0]=make_pair(5,25);
    pairs[1]=make_pair(5,28);
    pairs[2]=make_pair(27,40);
    pairs[3]=make_pair(39,60);
    pairs[4]=make_pair(50,90);
    cout<<maxlength(pairs);
    return 0;
}