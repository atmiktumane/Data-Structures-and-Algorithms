#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int unboundKnapSack(int wt[], int val[], int W, int n){
    if(n==0 || W==0){
        return 0;
    }

    if(wt[n-1] <= W){
        return max(val[n-1] + unboundKnapSack(wt, val, W-wt[n-1], n), unboundKnapSack(wt, val, W, n-1));
    }
    else{
        return unboundKnapSack(wt, val, W, n-1);
    }
}

int main(){
    int arr[] = {1,3,4,5};
    int val[] = {1,4,5,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int W = 8;

    int res = unboundKnapSack(arr, val, W, n);
    cout<<res<<endl;
    return 0;
}