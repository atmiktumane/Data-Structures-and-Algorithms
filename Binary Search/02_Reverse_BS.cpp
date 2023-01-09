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
        else if(element < arr[mid])
            start = mid+1;
        else 
            end = mid-1;
    }

    return -1;
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int element ;

    cout<<"element :";
    cin>>element;

    int index = binarySearch(arr, n, element);

    cout<<"\nindex of "<<element<<" : "<<index<<endl;
    return 0;
}