// Count the number of subset with a given difference

#include<iostream>
using namespace std;

int countSubsetSum(int arr[], int sum, int n){
    int t[n+1][sum+1];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0)
                t[i][j] = 0;
            if(j==0)
                t[i][j] = 1;
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][sum];
}

int countSubsetDiff(int arr[], int diff, int n){
    int arrSum = 0;
    for(int i=0; i<n; i++){
        arrSum += arr[i];
    }

    int sum = (diff+arrSum)/2;

    return countSubsetSum(arr, sum, n);
}

int main(){
    int arr[] = {1,1,2,3};
    int diff = 1;

    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = countSubsetDiff(arr, diff, size);
    cout<<ans<<endl;
    return 0;
}