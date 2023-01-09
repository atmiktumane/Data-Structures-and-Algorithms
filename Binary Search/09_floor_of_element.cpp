// Find floor of an element in a sorted array :

#include<iostream>
using namespace std;

int floorOfElement(int arr[], int n, int element){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(element == arr[mid]){
            return arr[mid];
        }
        else if(element < arr[mid])
            end = mid-1;
        else {
            res = arr[mid];
            start = mid+1;
        }
    }

    return res;
}

int main(){
    int arr[] = {1,2,3,4,8,10,10,12,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int element ;

    cout<<"element :";
    cin>>element;

    int ans = floorOfElement(arr, n, element);

    cout<<"\nFloor of "<<element<<" : "<<ans<<endl;
    return 0;
}