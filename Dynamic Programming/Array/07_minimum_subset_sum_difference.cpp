// Minimum subset sum difference

#include<iostream>
using namespace std;

int subsetSum(int arr[], int sum, int n){
    int t[n+1][sum+1];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0)
                t[i][j] = false;
            if(j==0)
                t[i][j] = true;
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    int mini = INT_MAX;
    for(int i=sum/2; i>=0; i--){
        mini = min(mini, sum-2*i);
    }
    return mini;
}

int minSubsetDiff(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return subsetSum(arr, sum, n);
}

int main(){
    int arr[] = {1,2,7};
    
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = minSubsetDiff(arr, size);

    

    cout<<ans<<endl;
    return 0;
}