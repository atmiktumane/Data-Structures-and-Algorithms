// First occurrence of an element 

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

int main(){
    int arr[] = {2,4,10,10,10,18,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int element ;

    cout<<"element :";
    cin>>element;

    int index = firstOccurence(arr, n, element);

    cout<<"\nfirst occurrence of "<<element<<" : "<<index<<endl;
    return 0;
}