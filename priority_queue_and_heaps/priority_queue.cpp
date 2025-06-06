#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;
// int main(){
//     // max heap
//     priority_queue<int>pq;
//     pq.push(5);
//     pq.push(10);
//     pq.push(3);
//     cout<<"top: "<<pq.top();
//     return 0;
// } 
int main(){
    // min heap
    priority_queue<string,vector<string>,greater<string>>pq;
    pq.push("sania");
     pq.push("hi");
     pq.push("khushi");
     cout<<"top: "<<pq.top();
    return 0;
}