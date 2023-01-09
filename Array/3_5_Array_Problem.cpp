// Record Breaking Day.

/* Problem:

Rahul is given the number of visitors at his local theme park on N consecutive days. The 
number of visitors on the i-th day is V-i. A day is record breaking if it satisfies both of the
following conditions:
    1) The number of visitors on the day is strictly larger than 
       the number of visitors on each of the previous days.

    2) Either it is the last day, or the number of visitors on the day is strictly larger than the 
       number of visitors on the following day.

Note that the very first day could be a record breaking day!

Please help Rahul to find out the number of record breaking days.

*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int max_no = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i]>max_no && a[i]>a[i+1]){
            ans++;
        }
        max_no = max(max_no, a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
