//Linked List: Insert at the beginning
//The newly added node will become the head of the linked list
// temp->next is same as (*temp).next 
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

class linked_list {
private:
Node *head, *tail;
public:
linked_list() {
    head = NULL;
    tail = NULL;
}

void insert_start(int n) {
    //New node should be connected to the first node
    //can be achieved by putting addr of head in nxt field of new node
    // our new node should be the new head
    Node *temp = new Node;
    temp->data = n;
    temp->next = head;
    head = temp;
}


/*here a new node is inserted between two consecutive nodes
these two nodes should be accessible by our, 
We make two nodes called current and previous
the new node is placed between them*/
void insert_position(int idx, int n) {
    //pass the addr of new node in next field of prev (prev->next = temp)
    //pass the addr of current node in next field of new node (temp->next = current)
    Node *prev = new Node;
    Node *current = new Node;
    Node *temp = new Node;
    current = head;
    for(int i=1; i<idx; i++) {
        prev = current;
        current = current->next;
    }
    temp->data = n;
    prev->next = temp;
    temp->next = current;
}
void insert_end(int n) {
    //Making a ptr named temp and allocating the space for it with new
    Node *temp = new Node;
    temp->data = n;
    temp->next = NULL;

    if(head == NULL) {
        //If there's no head or tail, the first node will be both head and tail simulatenously
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else {
        //if something in head, make temp the new tail
        tail->next = temp;
        tail = temp;
    }

}

void delete_first() {
    /*1: declare a temp ptr and pass addr of head node (first)
    2: declare second node as head as first will be deleted
    3: delete temp node */ 
    Node *temp = new Node;
    temp = head;
    //
    head = head->next;
    delete temp;
}

void display() {
    Node *temp = new Node;
    temp = head;
    while(temp != NULL) {
        //will loop until temp becomes NULL
        printf("%d", temp->data);
        temp = temp->next;
    }
}

};