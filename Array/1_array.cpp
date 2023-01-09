#include<iostream>
#include<climits> // used for INT_MIN and INT_MAX

using namespace std;

void example1(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"\nelement "<<i<<" : ";
        cin>>arr[i];
    }
    int maxNo= INT_MIN;  // builtIn in c++ ... INT_MIN : min number assign
    int minNo = INT_MAX;

    for(int i = 0; i<n; i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }

        if(arr[i]<minNo){
            minNo = arr[i];
        }
    }

    cout<<"min : "<<minNo<<" \nmax : "<<maxNo<<endl;
}

void example2(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"\nelement "<<i<<" : ";
        cin>>arr[i];
    }
    int maxNo= INT_MIN;
    int minNo = INT_MAX;

    for(int i = 0; i<n; i++){
        maxNo = max(arr[i], maxNo);

        minNo = min(arr[i], minNo);
    }

    cout<<"min : "<<minNo<<" \nmax : "<<maxNo<<endl;

}

int main(){

    // example1(); // find max and min in array

    example2(); // find max and min in array -> approach 2

    return 0;
}