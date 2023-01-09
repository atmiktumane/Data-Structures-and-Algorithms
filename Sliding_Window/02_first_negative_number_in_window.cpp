// first negative number in every window of size k

// Input :  arr[] = {12,-7,-11,13,19,-18,28,10,6},  k = 3

// Output : {-7,-7,-11,-18,-18,-18,0}

#include<iostream>
#include<vector>
#include<list>

using namespace std;

void display(vector<int> &v){
    for(int i=0; i< v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<<endl;
}

vector<int>  first_Negative(int *arr, int k, int n){
    int i=0 , j=0;
    vector<int> v;
    list<int> l;

    while(j<n){
        if(arr[j] < 0)
            l.push_back(arr[j]);
        
        if(j-i+1 < k)
            j++;
        else if(j-i+1 == k){
            if(l.size() == 0)
                v.push_back(0);
            else{
                v.push_back(l.front());
                if(arr[i] == l.front())
                    l.pop_front();
            }
            i++;
            j++;
        }
    }

    return v;
}

int main(){
    int arr[] = {12,-7,-11,13,19,-18,28,10,6};
    int k = 3;

    int size = sizeof(arr)/sizeof(arr[0]);

    vector<int> res = first_Negative(arr, k, size);

    display(res);
    return 0;
}