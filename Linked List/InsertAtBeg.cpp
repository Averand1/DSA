//Linked List: Inserting a node at beginning
#include<stdlib.h>
#include<stdio.h>
#include<iostream>

 struct Node {
     int data;
     struct Node *next; 
};

struct Node  *head; // global variable, can be accessed anywhere
void Insert(int x){
    
    //Here we declared a temp pointer of type Node
    //The reason we used malloc is it's return type is void pointer, check SmallQue.txt

    Node* temp = (Node*)malloc(sizeof(struct Node));

    //We're dereferencing the pointer variable here ((*temp).data is same as temp->data)

    temp->data = x; 
    //temp->next = NULL; //This is only used when the list is empty
    temp->next = head; //this will cover the scenario where the list is empty and non empty
    head = temp;

//     if(head != NULL) temp->next = head;
//     head = temp;
}
void Print() {
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
} 

int main() {
        head = NULL; //Empty list;
        printf("How many numbers?\n");
        int n, i, x;
        scanf("%d", &n);
        for(i=0;i<n;i++){
            printf("Enter the number\n");
            scanf("%d", &x);
            Insert(x);
            Print();
        } 
}