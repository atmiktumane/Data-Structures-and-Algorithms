// Next Alphabetical Element in an array :

#include<iostream>
using namespace std;

char ceilOfElement(char arr[], int n, char element){
    int start = 0;
    int end = n-1;
    char res = '#';

    while(start <= end){
        int mid = start + (end-start)/2;

        if(element == arr[mid]){
            start = mid+1;
        }
        else if(element < arr[mid]){
            res = arr[mid];
            end = mid-1;
        }
        else {
            
            start = mid+1;
        }
    }

    return res;
}

int main(){
    char arr[] = {'a','c','f','h'};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    char element = 'f';

    char ans = ceilOfElement(arr, n, element);

    cout<<"\nNext Alphabetical of "<<element<<" : "<<ans<<endl;
    return 0;
}

