#include<iostream>
using namespace std;

bool isValid(int arr[], int n, int k, int mid){
    int student = 1;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum > mid){
            student++;
            sum = arr[i];
        }
        if(student > k)
            return false;
    }
    return true;
}

int allocateMinPages(int arr[], int n, int k){
    if(n<k)
        return -1;
    
    int sum = 0; 
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }
    int start = maxi;
    int end = sum;
    int res = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isValid(arr, n, k, mid)){
            res = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    int ans = allocateMinPages(arr, n, k);

    cout<<"Allocate Minimum number of Pages : "<<ans<<endl;
    return 0;
}