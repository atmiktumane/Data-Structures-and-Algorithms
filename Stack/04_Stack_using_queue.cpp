// Implementation of stack using 1 Queue :

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Stack{
    queue<int> q;
    int count;

    public :

    Stack(){
        q;
        count = 0;
    }

    void Push(int element){
        q.push(element);
        count++;
        
        for(int i=1; i<count; i++){
            int ans = q.front();
            q.pop();
            q.push(ans);
        }
    }

    int Pop(){
        if(q.empty())
            return -1;

        int ans = q.front();
        q.pop();
        return ans;
    }

    int Top(){
        if(q.empty())
            return -1;

        return q.front();
    }

    int Size(){
        return q.size();
    }
};

int main(){
    Stack st;

    st.Push(3);
    st.Push(5);
    st.Push(6);
    st.Push(8);

    cout<<"top element in stack : "<< st.Top()<<endl;
    cout<<"Removing the top element from the stack : "<< st.Pop()<<endl;
    cout<<"top element in stack : "<< st.Top()<<endl;
    return 0;

}