#include<iostream>

using namespace std;

// for Node
class Node{
    public:
        int data;
        Node *next;
    public:
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        ~Node(){
            delete next;
        }
};

// for LinkedList

class LinkedList{
    public:
        Node *head;
    public:
        LinkedList(){
            head = NULL;
        }
        ~LinkedList(){
            delete head;
        }

        // for inseration a Node
        void insert(int data){
            Node *node = new Node(data);
            node->next = head;
            head = node;
        }

        // for deletion a node

        void remove(int data){
            if(head == NULL){
                return;
            }

            if(head->data == data){
                Node *temp = head;
                head = head->next;
                temp->next = NULL;
                delete(temp);
                return;
            }

            Node  *curr = head;
            while(curr->next != NULL){
                if(curr->next->data == data){
                    Node *temp = curr->next;
                    curr->next = curr->next->next;
                    temp->next = NULL;
                    delete(temp);
                }
                curr = curr->next;
            }
        }

        // for print all nodes

        void print(){
            if(head == NULL){
                return ;
            }
            
            Node *curr = head;
            while(curr != NULL){
                cout<<curr->data<<"->";
                curr = curr->next;
            }
            cout<<"END\n";
        }
};


int main(){
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.print();
    list.remove(30);
    list.print();
    return 0;
}