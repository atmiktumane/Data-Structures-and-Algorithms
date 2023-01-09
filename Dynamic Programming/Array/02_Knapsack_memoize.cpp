// 0-1 Knapsack : MEMOIZATION CODE

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int static t[1001][1001];

int knapSack(int wt[], int val[], int W, int n){
    if(W==0 || n==0)
        return 0;

    if(t[n][W] != -1)
        return t[n][W];
    
    if(wt[n-1] <= W){
        return t[n][W] = max(val[n-1]+knapSack(wt, val, W-wt[n-1], n-1), knapSack(wt, val, W, n-1));
    }
    
    else{
        return t[n][W] = knapSack(wt, val, W, n-1);
    }
}

int main(){
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int W = 7;

    int size = sizeof(wt)/sizeof(wt[0]);

    memset(t, -1, sizeof(t));

    int ans = knapSack(wt, val, W, size);
    cout<<ans<<endl;
    return 0;
}