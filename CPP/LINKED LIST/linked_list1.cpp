#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

     Node(int a){
        data = a;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){ // O(1)
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){  //O(n) or O(1) for tail pointer
    Node* new_node = new Node(val);
    Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
}

void insertAtPosition(Node* &head, int val, int pos){
    if (pos==0)             
    {
        insertAtHead(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while (current_pos!=pos-1)
    {
        temp=temp->next;
        current_pos++;
    }
    // temp pointer is pointing at pos-1
    new_node->next=temp->next;
    temp->next = new_node; 
    
}

void updateAtPosition(Node* &head, int k, int val){
    Node* temp = head;
    int current_pos = 0;
    while (current_pos!=k)
    {
        temp = temp->next;
        current_pos++;
    }
    temp->data = val;    
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtend(Node* &head){
    Node* temp = head;
    while (temp->next->next!=NULL)    
    {
      temp= temp->next;
    }
    //free(temp->next);
    Node* temp2 = temp->next;
    temp->next= NULL;
    free(temp2);
    
}

void deleteAtPosition(Node* &head, int pos){
    if(pos == 0){
        deleteAtHead(head);
        return;
    }
    int current_pos = 0;
    Node* prev = head;
    while (current_pos!=pos-1)
    {   current_pos++;
        prev=prev->next;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

void display(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    Node* head = NULL;
    insertAtHead(head,5);
    display(head);
    insertAtHead(head,4);
    display(head);
    // insertAtHead(head,3);
    // display(head);
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,6);
    display(head);
    insertAtPosition(head,3,2);
    display(head);
    updateAtPosition(head,1,9);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtend(head);
    display(head);
    deleteAtPosition(head,2);
    display(head);
    deleteAtPosition(head,0);
    display(head);
    
    
    // Node *second = new Node(5);
}