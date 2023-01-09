// To execute binary search , array should be sorted

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key ){
    for(int i=0; i<n; i++){
        if(arr[i] == key) {
            return i;
        }
        
    }
    return -1;
}

int binarySearch(int arr[], int size , int key){
    int low =0;
    int high = size-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[mid] < key){
            low = mid+1;
        }
        else if(arr[mid] > key){
            high = mid-1;
        }
        else {
            return mid;
        }
        
    }
    return -1;

}



int main(){    
    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        // cout<<"\nelement "<<i<<" : ";
        cin>>arr[i];
    }
    int key = 51;

    // int res = linearSearch(arr, n, key);
    // cout<<"element "<<key<<" is present at index "<<res;

    key = 21;
    int result = binarySearch(arr, n, key); 
    cout<<"element "<<key<<" is present at index "<<result;

    return 0;
}