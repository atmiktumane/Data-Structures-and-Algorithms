// Stack implementation using Array

#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int topo;
    
    public:

    Stack(){
        size = 1000;
        arr = new int[size];
        topo = -1;
    }

    void Push(int ele){
        if(topo!=size-1){
            topo++;
            arr[topo] = ele;
        }
        else{
            return;
        }
    }

    int Pop(){
        if(topo != -1){
            int ans = arr[topo];
            topo--;
            return ans;
        }
        return -1;
    }

    int Top(){
        if(topo!=-1){
            return arr[topo];
        }
    }

    int Size(){
        return topo+1;
    }

    int isEmpty(){
        if(topo == -1){
            return 1;
        
        }
        else{
            return 0;
        }
    }

    int isFull(){
        if(topo == size-1){
            return 1;
        }
        else{
            return 0;
        }
    }

};

int main(){
    Stack st;
    st.Push(3);
    st.Push(5);
    st.Push(6);
    st.Push(9);

    cout<<st.Top()<<endl;
    cout<<st.Pop()<<endl;
    cout<<st.Top()<<endl;

    cout<<st.Size()<<endl;

    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;


    return 0;
}