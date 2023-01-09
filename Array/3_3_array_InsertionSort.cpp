#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int *arr, int n){
    int key, j;

    for(int i=1; i<=n-1; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, n);

    insertionSort(arr, n);

    printArray(arr, n);
    return 0;
}