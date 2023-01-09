// Merge 2 sorted Linked List

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

void swapFn(node* &a, node* &b){
    node* temp = a;
    a = b;
    b = temp;
}

node* mergeLinkedList(node* &l1, node* &l2){
    
    if(l1->data > l2->data){
        swapFn(l1, l2);
    }

    node* head = l1;
    node* temp = NULL;

    while(l1!=NULL && l2!=NULL){
        if(l1->data <= l2->data){
            temp = l1;
            l1 = l1->next;
        }
        else{
            temp->next = l2;
            swapFn(l1,l2);
            
        }
    }
    temp->next = l2;
    return head;
}


int main(){
    node* head = NULL;
    
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 4);

    display(head);

    node* head1 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);

    display(head1);

    node* ans = mergeLinkedList(head, head1);

    display(ans);

    
    return 0;
}