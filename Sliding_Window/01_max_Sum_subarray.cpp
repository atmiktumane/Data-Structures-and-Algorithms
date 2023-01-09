// Maximum sum subarray of size k

// input :  arr[] = {1,5,9,8,6,2,3},   k = 3

// output : 23

// explaination : sum({9,8,6}) = 23


#include<iostream>
using namespace std;

int max_Sum(int *arr, int size, int k){
    int i=0, j=0, sum=0;
    int mx = INT_MIN;

    while(j<size){
        sum = sum + arr[j];

        if(j-i+1 < k)
            j++;
        
        else if(j-i+1 == k){
            mx = max(mx, sum);
            sum = sum-arr[i];
            i++;
            j++;
        }
    }

    return mx;
}

int main(){
    int arr[] = {1,5,9,8,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    int res = max_Sum(arr, n, k);

    cout<< res<< endl;
    return 0;
}