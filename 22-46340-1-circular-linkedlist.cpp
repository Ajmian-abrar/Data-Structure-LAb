#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
  public:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }

    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains: ";
        while(true) {
          cout<<temp->data<<" ";
          temp = temp->next;
          if(temp == head)
            break;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }
};

int main() {

  LinkedList MyList;
  Node* first = new Node();
  first->data = 5;
  MyList.head = first;
  first->next = MyList.head;
  Node* second = new Node();
  second->data = 15;
  first->next = second;
  second->next = MyList.head;
  Node* third = new Node();
  third->data = 25;
  second->next = third;
  third->next = MyList.head;

  MyList.PrintList();
  return 0;
}
