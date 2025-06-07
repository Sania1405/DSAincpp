#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;
class Heap{
    vector<int>vec;
    public:
    void push(int val){
        vec.push_back(val);
        int x=vec.size()-1;
        int pi=(x-1)/2;
        while(x>0 && vec[x]>vec[pi]){
            swap(vec[x],vec[pi]);
            x=pi;
            pi=(x-1)/2;
        }
    }
    void heapify(int i){
        if(i>=vec.size()){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;
        int maxI=i;
        if(l<vec.size() && vec[l]>vec[maxI]){
            maxI=l;
        }
        if(r<vec.size() && vec[r]>vec[maxI]){
            maxI=r;
        }
        swap(vec[i],vec[maxI]);
        if(maxI!=i){
            heapify(maxI);
        }
    }
    void pop(){
        swap(vec[0],vec[vec.size()-1]); //O(1)
        vec.pop_back(); //O(1)
        heapify(0);
    }
    int top(){ //O(1)
        return vec[0];
    }
    bool empty(){
        return vec.size()==0;
    }
};
int main(){
    Heap heap;
    heap.push(3);
    heap.push(78);
    heap.push(56);
    cout<<"top: "<<heap.top();
    cout<<endl;
    heap.pop();
    cout<<"top: "<<heap.top();
    cout<<endl;
    heap.pop();
    cout<<"top: "<<heap.top();
    return 0;
}