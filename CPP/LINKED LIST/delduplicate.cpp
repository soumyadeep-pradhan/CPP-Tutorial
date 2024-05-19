#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }   
};

class LinkedList{

    public:
    Node* head;
    
    LinkedList(){
        head = NULL;
    }
    
    void insertAtTail(int value ){
        Node* new_node = new Node(value);
        if(head == NULL){
            //Linked List is empty
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;

    }
    void display(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while (curr_node!=NULL && curr_node->next!=NULL)
    {
        Node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node  = curr_node->next;
    }
    

}
void deleteDuplicateNodes(Node* &head){
    Node* curr_node = head;
    while (curr_node)//or curr_node!=NULL
    {
        while (curr_node->next && curr_node->data == curr_node->next->data)
        {
            Node* temp = curr_node->next; //node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        // this node ends when current node and next node values ate different or LinkedList ends
        curr_node = curr_node->next;
    }
    
}

int main(){

LinkedList ll;

ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(3);
ll.insertAtTail(5);
ll.insertAtTail(5);
ll.insertAtTail(7);
ll.insertAtTail(7);
ll.insertAtTail(7);
ll.display();
deleteDuplicateNodes(ll.head);
ll.display();
}