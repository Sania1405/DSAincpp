#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(string name,int marks){
        this->name=name;
        this->marks=marks;
    }
};
struct comparepair{
        bool operator ()(pair<string,int> &p1,pair<string,int> &p2){
        return p1.second<p2.second;
    } //comparator used becoz we want to heap on the basis of second property 
}; //for min heap --> p1.second>p2.second
int main(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,comparepair> pq;
    pq.push(make_pair("aman",85));
    pq.push(make_pair("sania",75));
    pq.push(make_pair("khushi",95));
    while(!pq.empty()){
        cout<<pq.top().first<<"  "<<pq.top().second;
        cout<<endl;
        pq.pop();
    }
    return 0;
}