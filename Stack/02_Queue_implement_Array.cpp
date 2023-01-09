// Queue Implementation using Array :

#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int size;
    int top;
    int rear;
    int count;

    public:

    Queue(){
        size = 5;
        arr = new int[size];
        top = 0;
        rear=0;
        count=0;
    }

    void Push(int ele){
        if(count >= size){
            return;
        }

        arr[rear%size] = ele;
        rear++;
        count++;
            
    }

    int Front(){
        if(count == 0){ // queue is empty, so no element is present , therefore no front element is present
            return -1;   
        }
        
        return arr[top%size];
    }

    int Pop(){
        if(count==0){
            return -1;  // No removing of element
        }
        int ans = arr[top%size];
        top++;
        count--;
        return ans;
    }

    int Size(){
        return count;
    }

    int isEmpty(){
        if(count == 0)
            return 1;
        return 0;

    }

    int isFull(){
        if(count == size)
            return 1;
        else
            return 0;
    }
};

int main(){
    Queue q;
    q.Push(3);
    q.Push(5);
    q.Push(9);
    q.Push(12);
    q.Push(15);
    q.Push(18);

    cout<<q.Front()<<endl;
    cout<<q.Pop()<<endl;

    cout<<q.Size()<<endl;

    cout<<q.isEmpty()<<endl;

    cout<<q.isFull()<<endl;
    return 0;
}