#include<iostream>
#include<queue>
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
    bool operator <(const Student &obj)const{
        // return this->marks<obj.marks; max heap
        return this->marks>obj.marks;  //only signs changes if we have to chnage the order
    }
};
int main(){
    priority_queue<Student>pq;
    pq.push(Student("aman",85));
    pq.push(Student("sania",75));
    pq.push(Student("khushi",95));
    while(!pq.empty()){
        cout<<pq.top().name<<"  "<<pq.top().marks;
        cout<<endl;
        pq.pop();
    }
    return 0;
}