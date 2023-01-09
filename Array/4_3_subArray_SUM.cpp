// Maximum Subarray Sum : subarray ka maximum sum nikalo

#include<iostream>
#include<climits>
using namespace std;

void brute_force_approach(int *arr, int n){
    int max_sum = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;

            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }

    cout<<max_sum<<endl;
}

void cumulative_sum_approach(int *arr, int n){
    int currsum[n+1];
    currsum[0] = 0;

    for(int i=1; i<=n; i++){
        currsum[i] = currsum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currsum[i] - currsum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout<< maxSum;
}

void kadanes_algorithm(int *a, int n){
    int max_sum = INT_MIN;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += a[i];

        if(sum<0){
            sum = 0;
        }

        max_sum = max(max_sum , sum);
    }
    cout<<max_sum<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    //brute_force_approach(arr, n);       // solution 1: time complexity = O(n3)

    //cumulative_sum_approach(arr, n);    // solution 2: time complexity = O(n2)

    kadanes_algorithm(arr, n);            // solution 3: time complexity = O(n)
    
    return 0;
}