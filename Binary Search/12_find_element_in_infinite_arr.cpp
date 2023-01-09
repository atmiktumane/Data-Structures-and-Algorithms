// Find element in an infinite sorted array :

#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int start, int end){
    while(start <= end){
        int mid = start+(end-start)/2;

        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid])
            end = mid-1;
        else    
            start = mid+1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,14,15,18,20};
    int key = 7;

    int start = 0;
    int end = 1;

    while(arr[end] <= key){
        start = end;
        end = end*2;
    }

    int ans = binarySearch(arr, key, start, end);

    cout<<"index of "<<key<<" in infinite sorted array : "<<ans<<endl;
    return 0;
}