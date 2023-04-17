#include<iostream>

using namespace std;


// for Node
class Node{
	public:
	int value;
	Node *next;
	public:
	Node(int data){
		value = data;
		next = NULL;
	}
	~Node(){
		delete next;
	}
};


class LinkedList{
	public:
		Node* head;
	LinkedList(){
		head = NULL;
	}
	~LinkedList(){
		delete head;
	}
	
	void insert(int data){
		Node* node = new Node(data);
//		node->next = head;
//		head = node;
			
		if(head == NULL){
			head = node;
		}
		else{
			node->next = head;
			head = node;
		}
	}
	
	void remove(int val){
		if(head == NULL){
			return;
		}
		if(head->value == val){
				Node* temp = head;
				head = head->next;
				temp->next = NULL;
				return ;
		}
		if(head->value == val&&head->next == NULL){
			head = NULL;
			return;
		}
		
		Node* curr = head;
		while(curr->next!=NULL){
			if(curr->next -> value == val){
				Node* temp = curr->next;
				curr->next = curr->next->next;
				temp->next = NULL;
				delete temp;
				return;
			}
			curr = curr->next;
		}
	}
	
	void show(){
		Node* temp = head;
		while(temp!=NULL){
			cout<<temp->value<<"->";
			temp = temp->next;
		}		
		cout<<"END";
	}
};


int main(){
	
	//	int a = 10;
	//	
	//	int *p = &a;
	//	
	//	cout<<p;
		
	//		struct ABC{
	//		int rollno;
	//		float avg;
	//		string name;
	//	};
	//
	//
	//	struct ABC a1;
	//	a1.rollno = 02;
	//	a1.avg = 56.f;
	//	a1.name = "jayadeep";
	//	
	//	cout<<sizeof(a1);
	
	LinkedList l1;
	l1.insert(10);
	l1.insert(20);
	l1.insert(30);
	l1.show();
	l1.remove(10);
	cout<<endl;
	l1.show();
	l1.remove(30);
	l1.show();
	l1.show();
	
	
	return 1;
}
