#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second>p2.second;
}
int maxjob(vector<pair<int,int>>jobs){
    sort(jobs.begin(),jobs.end(),compare);
    int profit=jobs[0].second;
    int safedealine=2;
    for(int i=1;i<jobs.size();i++){
        if(jobs[i].first>=safedealine){
            profit+=jobs[i].second;
            safedealine++;
        }
    }
    cout<<"maximum profit: "<<profit<<endl;
    return profit;
}
int main(){
    int n=4;
    vector<int>deadline={4,1,1,1};
    vector<int>profit={20,10,40,30};
    vector<pair<int,int>>jobs(n,make_pair(0,0));
    jobs[0]={4,20};
    jobs[1]={1,10};
    jobs[2]={1,40};
    jobs[3]={1,30};
    maxjob(jobs);
    return 0;
}