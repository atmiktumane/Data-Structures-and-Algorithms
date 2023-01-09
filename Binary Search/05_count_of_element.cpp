// Count of an element in a sorted array:

#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int element){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(element == arr[mid]){
            res = mid;
            end = mid-1;
        }
        else if(element < arr[mid])
            end = mid-1;
        else 
            start = mid+1;
    }

    return res;
}

int lastOccurrence(int arr[], int n, int element){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(element == arr[mid]){
            res = mid;
            start = mid+1;
        }
        else if(element < arr[mid])
            end = mid-1;
        else 
            start = mid+1;
    }

    return res;
}

int main(){
    int arr[] = {2,4,10,10,10,18,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int element ;

    cout<<"element :";
    cin>>element;

    int first = firstOccurence(arr, n, element);
    int last = lastOccurrence(arr, n, element);

    cout<<"\nCount of "<<element<<" : "<< (last-first+1)<<endl;
    return 0;
}