// Minimum Difference element in a sorted array :

#include<iostream>
using namespace std;

int minDiff(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(key == arr[mid])
            return arr[mid];
        else if(key < arr[mid])
            end = mid-1;
        else 
            start = mid+1;
    }

    int res1 = abs(key - arr[start]);
    int res2 = abs(key - arr[end]);

    if(res1 <= res2)
        return arr[start];
    else 
        return arr[end];
}

int main(){
    int arr[] = {1,3,8,10,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 12;

    int ans = minDiff(arr, n, key);

    cout<<"Minimum difference element present in array : "<<ans<<endl;
    return 0;
}