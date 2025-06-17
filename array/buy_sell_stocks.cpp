#include<iostream>
#include<vector>
using namespace std;
#include<climits>
// constaints: we cant buy and sell stock on single day , we have to buy stock before selling it...
// step 1: assume all the days as selling day
// calclulate best buy price for all
// the very first day 7 having no best buy day so we will initialize best buy price for 7 to INT_MAX positive infinity such that there will be no best buy price day for it 
// now we will calculate profitfor each and get max out of it from profit=prices(sell price)-best buy....
int stocks(vector<int>& prices){
    vector<int>bestbuy(prices.size());  
    bestbuy[0]=INT_MAX;
    for(int i=1;i<prices.size();i++){
        bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
    }
    int maxprof=0;
    for(int i=0;i<bestbuy.size();i++){
        int curprof=prices[i]-bestbuy[i];
        maxprof=max(maxprof,curprof);
    }
    cout<<"maximum profit: "<<maxprof;
    return maxprof;
};
int main(){
    vector<int>prices={7,1,5,3,6,4};
    stocks(prices);
    return 0;
}