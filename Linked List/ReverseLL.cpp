#include <iostream>
using namespace std;

//node structure
struct Node {
    int data;
    Node *next;
};

class LinkedList {
  private:
    Node *head, *tail;
  public:
    LinkedList(){
      head = NULL;
      tail = NULL;
    }
 
    //Add new element at the end of the list
    void insert_at_end(int n) {
      Node *newNode = new Node();
      newNode->data = n;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode; // a = 3 not 3 = a
        tail = newNode;
      } else {
        Node *temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }    
    }
    
    //reverse the list
    void reverseList() {
      if(head != NULL) {
        Node *prevNode = head;
        Node *tempNode  = head;
        Node *curNode = head->next;
        
        prevNode->next = NULL;
        
        while(curNode != NULL) {
          tempNode = curNode->next;
          curNode->next = prevNode;
          prevNode = curNode;
          curNode = tempNode;
        }

        head = prevNode;
      }
    } 

    //display the content of the list
    void PrintList() {
      Node *temp = head;
      if(temp != NULL) {
        cout<<"The list contains: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<"\n";
      } else {
        cout<<"The list is empty.\n";
      }
    }   
};

// test the code 
int main() {
  LinkedList MyList;

  //Add five elements in the list.
  MyList.insert_at_end(10);
  MyList.insert_at_end(20);
  MyList.insert_at_end(30);
  MyList.insert_at_end(40);
  MyList.insert_at_end(50);
  //Display the content of the list.
  MyList.PrintList();
  
  //Reversing the list.
  MyList.reverseList();
  
  //Display the content of the list.
  MyList.PrintList();
  
  return 0; 
}




