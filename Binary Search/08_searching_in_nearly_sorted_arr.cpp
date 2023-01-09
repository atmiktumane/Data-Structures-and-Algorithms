// Searching in nearly sorted array :

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int element){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(element == arr[mid]){
            return mid;
        }

        if(element == arr[mid-1] && mid-1 >= 0)
            return mid-1;
        if(element == arr[mid+1] && mid+1 <= n-1)
            return mid+1;
        if(element < arr[mid])
            end = mid-2;
        else if(element > arr[mid])
            start = mid+2;
    }

    return -1;
}

int main(){
    int arr[] = {5,10,30,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int element ;

    cout<<"element :";
    cin>>element;

    int index = binarySearch(arr, n, element);

    cout<<"\nindex of "<<element<<" : "<<index<<endl;
    return 0;
}