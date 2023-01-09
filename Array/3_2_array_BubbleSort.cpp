#include<iostream>
using namespace std;

void printArray(int * arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort_Adaptive(int *arr, int n){
    

    int isSorted = 0;

    for(int i=0; i<n-1; i++){       // for number of passes

        cout<<"Working on pass number "<<i+1<<endl;
        isSorted = 1;

        for(int j=0; j<n-1-i; j++){     // for comparison in each pass
        
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return ;
        }
    }

    
}

void bubbleSort(int *arr, int n){

    for(int i=0; i<n-1; i++){       // for number of passes

        for(int j=0; j<n-1-i; j++){     // for comparison in each pass
        
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
        
    }

    
}

int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;

    int arr[n];
    cout<<"array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Unsorted Array : "<<endl;
    printArray(arr, n);

    bubbleSort(arr, n);

    cout<<"Sorted Array : "<<endl;
    printArray(arr, n);
    return 0;
}