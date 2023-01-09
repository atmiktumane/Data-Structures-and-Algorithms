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
            end = mid-1;
        else 
            start = mid+1;
    }

    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int element ;

    cout<<"element :";
    cin>>element;

    int index = binarySearch(arr, n, element);

    cout<<"\nindex of "<<element<<" : "<<index<<endl;
    return 0;
}