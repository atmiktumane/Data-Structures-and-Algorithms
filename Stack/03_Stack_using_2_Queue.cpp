// Implementation of stack using 2 Queues :

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;

    public:

    Stack(){
        q1;
        q2;
    }

    void swap(queue<int>& q1, queue<int>& q2){
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void push(int ele){
        q2.push(ele);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    int Top(){
        if(q1.empty())
            return -1;
        return q1.front();
    }

    int Pop(){
        if(q1.empty()){
            return -1;
        }
        int ans = q1.front();
        q1.pop();
        return ans;

    }
};

int main(){
    Stack st;

    st.push(3);
    st.push(5);
    st.push(8);

    cout<<"Top element in stack : "<<st.Top()<<endl;
    cout<<"Remove element from stack : "<< st.Pop()<<endl;
    cout<<"Top element in stack : "<<st.Top()<<endl;
    return 0;
}