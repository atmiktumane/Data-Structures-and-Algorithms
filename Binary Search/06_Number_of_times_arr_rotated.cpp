// Number of times a sorted array is rotated:

#include<iostream>
using namespace std;

int indexOfMinELement(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){

        if(arr[start] <= arr[end])
            return start;
        int mid = start + (end-start)/2;

        int prev = (mid-1+n)%n;
        int next = (mid+1)%n;

        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
            return mid;
        
        if(arr[start]<=arr[mid])
            start = mid+1;

        else if(arr[mid] <= arr[end])
            end = mid-1;
    }

    return -1;
}

int main(){
    int arr[] = {11,12,15,18,2,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = indexOfMinELement(arr, n);

    cout<<"Number of times an array is rotated : "<< (n-index)%n <<endl;

    return 0;
}