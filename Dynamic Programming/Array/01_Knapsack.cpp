// 0-1 Knapsack : RECURSIVE CODE

#include<iostream>
using namespace std;

int knapSack(int wt[], int val[], int W, int n){
    if(W==0 || n==0)
        return 0;
    
    if(wt[n-1] <= W){
        return max(val[n-1]+knapSack(wt, val, W-wt[n-1], n-1), knapSack(wt, val, W, n-1));
    }
    
    else{
        return knapSack(wt, val, W, n-1);
    }
}

int main(){
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int W = 7;

    int size = sizeof(wt)/sizeof(wt[0]);

    int ans = knapSack(wt, val, W, size);
    cout<<ans<<endl;
    return 0;
}