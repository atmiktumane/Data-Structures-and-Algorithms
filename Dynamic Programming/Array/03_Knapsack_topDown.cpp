// 0-1 Knapsack : TOP-DOWN APPROACH

#include<iostream>
using namespace std;

int knapSack(int wt[], int val[], int W, int n){
    int t[n+1][W+1];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<W+1; j++){
            if(i==0 || j==0)
                t[i][j] = 0;
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<W+1; j++){
            if(wt[i-1] <= j){
                t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);
            }

            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][W];
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