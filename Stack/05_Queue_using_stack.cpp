// Implementation of queue using 2 Stacks

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    public:

    Queue(){
        s1;
        s2;
    }

    void Push(int element){
        s1.push(element);
    }

    int Front(){
        if(!s2.empty()){
            return s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }

    int Pop(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int ans = s2.top();
            s2.pop();
            return ans;
        }
        else{
            int n = s2.top();
            s2.pop();
            return n;
        }
    }

    int Size(){
        if(s2.empty()){
            return -1;

        }
        
        return (s2.size() + s1.size());
    }

    int isEmpty(){
        if(s2.empty()){
            return -1;
        }

        return 0;
    }
};

int main(){
    Queue q;
    q.Push(3);
    q.Push(5);
    q.Push(6);
    q.Push(8);
    q.Push(11);

    cout<<"front element of queue : "<< q.Front()<<endl;
    cout<<"Remove element from queue : "<<q.Pop()<<endl;
    cout<<"front element of queue : "<< q.Front()<<endl;
    cout<<"Size of queue : "<<q.Size()<<endl;
    
    if(q.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }
    return 0;
}