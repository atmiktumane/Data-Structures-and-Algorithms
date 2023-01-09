// Index of first 1 in a Binary sorted infinite array :

// solution : (first Occurence) + (infinite sorted array)

#include<iostream>
using namespace std;

int firstOccurence(int arr[], int key, int start, int end){
    int res = -1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(key == arr[mid]){
            res = mid;
            end = mid-1;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else 
            start = mid+1;
    }
    return res;
}

int main(){
    int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
    int key = 1;

    int start = 0;
    int end = 1;

    while(arr[end] < key){
        start = end;
        end = end*2;
    }

    int ans = firstOccurence(arr, key, start, end);

    cout<<"Index of first 1 in Binary Sorted Infinite array : "<<ans<<endl;
    return 0;
}