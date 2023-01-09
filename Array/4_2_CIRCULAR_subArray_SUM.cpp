#include<iostream>
#include<climits>
using namespace std;

int kadane(int *a, int n){
    int max_sum = INT_MIN;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += a[i];

        if(sum<0){
            sum = 0;
        }

        max_sum = max(max_sum , sum);
    }
    return max_sum;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalsum = 0;

    for(int i=0; i<n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;
    
    return 0;
}