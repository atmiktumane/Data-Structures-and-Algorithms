// Find an element in rotated sorted array :

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

int binarySearch(int arr[], int n, int start, int end, int element){
    while(start <= end){
        int mid = start+(end-start)/2;

        if(element == arr[mid])
            return mid;
        else if(element < arr[mid])
            end = mid-1;
        else 
            start = mid+1;
    }
    return -1;
}

int main(){
    int arr[] = {11,12,15,18,2,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"element : ";
    cin>>element;

    int index = indexOfMinELement(arr, n);

    int res1 = binarySearch(arr, n, 0, index-1, element);

    int res2 = binarySearch(arr, n, index, n-1, element);

    cout<<"index of "<<element<<" : ";

    if(res1 <= res2)
        cout<<res2;
    else 
        cout<<res1;

    

    return 0;
}

