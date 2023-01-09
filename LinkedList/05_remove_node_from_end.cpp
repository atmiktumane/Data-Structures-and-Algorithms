// Remove nth node from end of the linked List 

// Reversing a Linked List

// 1 -> 2 -> 3 -> 4 -> 5 -> NULL

#include<iostream>
using namespace std; 

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteFromEnd(node* &head, int n){
    node* dummy = new node(-1);
    node* slow = dummy;
    node* fast = dummy;
    dummy->next = head;
    for(int i=0; i<n; i++){
        fast = fast->next;
    }

    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }

    node* curr = slow->next;
    slow->next = curr->next;
    delete curr;
}

int main(){
    node* head = NULL;
    
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    display(head);

    int n = 2;

    deleteFromEnd(head, n);

    display(head);

    return 0;
}