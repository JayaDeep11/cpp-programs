#include <iostream>

using namespace std;

class Node {
  public:
    int value;
    Node *next;
    Node(int val) {
      value = val;
      next = NULL;
    }
    ~Node() {
      delete next;
    }
};

class LinkedList {
  public:
    Node *head;
    LinkedList() {
      head = NULL;
    }
    ~LinkedList() {
      delete head;
    }
    void insert(int val) {
      Node *newNode = new Node(val);
      newNode->next = head;
      head = newNode;
    }
    void insertAtEnd(int val) {
      Node *newNode = new Node(val);
      newNode->next = NULL;
      if(head == NULL) {
      	head = newNode;
	  }
	  else {
	  	Node *temp = head;
      	while(temp -> next != NULL) {
        	temp = temp -> next;
      	}
	      temp->next = newNode;
	  }
      
    }
   void insertAtPos(int val, int pos) {
   	Node *newNode = new Node(val);
    Node *temp = head;
    while(temp -> value != pos) {
      if(temp == NULL) {
        cout << "Element Not Found" << endl;
        return;
      }
      temp = temp->next;
    }
      newNode->next = temp->next;
      temp->next = newNode;
   }
    void remove(int val) {
      if (head == NULL) {
        return;
      }
      if (head->value == val) {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
        return;
      }
      Node *curr = head, *temp;
      while (curr->value != val) {
        temp = curr;
        curr = curr->next;
      }
      temp->next = curr->next;
    }
    void print() {
      if (head == NULL) {
        cout << "No Elements to display" << endl;
      }
      Node *curr = head;
      while (curr != NULL) {
        cout << curr->value << " -> ";
        curr = curr->next;
      }
      cout << "NULL\n";
    }
};

int main() {
    int choice, ele, pos;
    LinkedList list;
    cout << "Enter your Choice: " << endl;
    cout << "Choose 1: Insert At Beginning" << endl;
    cout << "Choose 2: Insert At End" << endl;
    cout << "Choose 3: Insert After Specific Element" << endl;
    cout << "Choose 4: Remove an Element" << endl;
    cout << "Choose 5: Print the List" << endl;
    cout << "Choose 6: Exit" << endl;

    while (1) {
      cout << "Enter your Choice: ";
      cin >> choice;
      switch(choice) {
        case 1:
          cout << "Enter the Element: ";
          cin >> ele;
          list.insert(ele);
          break;

        case 2:
          cout << "Enter the Element: ";
          cin >> ele;
          list.insertAtEnd(ele);
          break;

        case 3:
          cout << "Enter the Element to add: ";
          cin >> ele;
          cout << "Enter the Element after which you want to add: ";
          cin >> pos;
          list.insertAtPos(ele, pos);
          break;

        case 4:
          cout << "Enter the element you want to delete: ";
          cin >> ele;
          list.remove(ele);
          break;

        case 5:
          list.print();
          break;

        case 6:
          return 0;
      }
    }

  // list.insert(10);
  // list.insert(20);
  // list.insert(30);
  // list.insert(40);
  // list.insertAtEnd(50);
  // list.insertAtPos(35, 30);
  // list.print();
}
