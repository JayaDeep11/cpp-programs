#include <iostream>

using namespace std;

class Node {
  public:
    int value;
    Node *next, *prev;
    Node(int val) {
      value = val;
      prev = NULL;
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
      if (head == NULL) {
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
      }
      else {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
      }
    }
    void insertAtEnd(int val) {
      Node *newNode = new Node(val);
      if(head == NULL) {
        head = newNode;
      }
      Node *temp = head;
      while(temp -> next != NULL) {
        temp = temp->next;
      }
      temp->next = newNode;
      newNode->prev = temp;
    }
    void insertAtPos(int val, int pos) {
      Node *newNode = new Node(val);
      Node *temp = head;
      while(temp -> value != pos) {
        if(temp == NULL) {
          cout << "Element not found" << endl;
          return;
        }
        temp = temp->next;
      }
      temp->next->prev = newNode;
      newNode->next = temp->next;
      newNode->prev = temp;
      temp->next = newNode;
    }
    void remove(int val) {
      if (head == NULL) {
        return;
      }
      if (head->value == val) {
        head = head->next;
        head->prev = NULL;
        return;
      }
      Node *curr = head, *temp;
      while (curr->value != val) {
        temp = curr;
        curr = curr->next;
      }
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
    }
    void print() {
      if(head == NULL) {
        return;
      }
      Node *temp = head;
      while(temp -> next != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
      }
      cout << temp -> value << "\n";
    }
};

int main() {
  LinkedList list;
  list.insert(10);
  list.insert(8);
  list.insert(6);
  list.insert(4);
  list.insertAtEnd(12);
  list.insertAtPos(7, 6);
  list.print();
  list.remove(12);
  list.print();
}