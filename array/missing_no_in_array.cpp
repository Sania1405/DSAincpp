#include<iostream>
#include<vector>
using namespace std;
// int missingno(vector<int>nums){
//     // will only work if the array is sorted
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]!=i+1){
//             return i+1;
//         }
//     }
//     return nums.size()+1;
// }
int missingno(vector<int>nums,int n){
    // using linear search (brute force method)
    for (int i = 1; i <= n; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for (int j = 0; j < n - 1; j++) {
            if (nums[j] == i) {

                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:

        if (flag == 0) return i;
    }
}
int main(){
    int n=5;
    vector<int>nums={1,2,4,5};
    cout<<missingno(nums,n);
    return 0;
}