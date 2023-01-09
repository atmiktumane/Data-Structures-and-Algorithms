// Memoization of Unbounded knapSack

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int t[1001][1001];

int unboundMemoize(int wt[], int val[], int W, int n){
    if(W==0 || n==0){
        return 0;
    }

    if(t[n][W] != -1){
        return t[n][W];
    }

    if(wt[n-1] <= W){
        return t[n][W] = max(val[n-1] + unboundMemoize(wt, val, W-wt[n-1], n), unboundMemoize(wt, val, W, n-1));
    }

    else{
        return t[n][W] = unboundMemoize(wt, val, W, n-1);
    }
}

int main(){

    memset(t, -1, sizeof(t));
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int W = 8;

    int n = sizeof(wt)/sizeof(wt[0]);

    int res = unboundMemoize(wt, val, W, n);
    
    cout<<res<<endl;
    return 0;
}