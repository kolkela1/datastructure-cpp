#include"node.h"
#include <iostream>
using namespace std;
class linkedlist 
{
	node* head;
public:
	linkedlist() {
		head = NULL;
	}
	bool isempty() {
		return(head == NULL);
	}
	void insertfirst() {
		if (isempty()) {
			node* n = new node();
			cout << "ent the data in node 1\n";
			cin >> n->data;
			n->next = NULL;
			head = n;
		}
		else {
			cout << "ent the data in node \n";
			node* n = new node();
			cin >> n->data;
			n->next = head;
			head = n;
		}
	}
	void display() {
		node* temp=head;
		while (temp != NULL) {
			cout << temp->data<<endl;
			temp = temp->next;
		}
	}
	int count() 
	{
		static int c=0;
		node* temp = head;
		while (temp != NULL) {
			c++;
			temp = temp->next;
		}
		return c;
	}
	void search()
	{
		int d;
		cout << "ent the num you want search\n";
		cin >> d;
		if (isempty()) {
			cout << " no \n";
			return;
		}
		else {
	 int c = 1;
			node* temp = head;
			while (temp != NULL) {
				if(d==temp->data){
					cout << " we found this num in count :   " << c << endl;
					return;
				}
				
				c++;
				temp = temp->next;
			}
			cout << "we donet found this num \n";
			
		}
		
	}
	void append() {
		if (isempty()) {
			node* n = new node();
			cout << "ent the data in node 1\n";
			cin>>n->data;
			n->next = NULL;
			head = n;
		}
		else {
			node* n=new node();
			node* temp = head;
			cout << "ent the data in node \n";
			cin >> n->data;
			n->next = NULL;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = n;
		}
	}
	void insert() {
		int no;
		cout << "enter index \n";
		cin >> no;
		while (count() < no) {
			cout << "enter num in linked list\n";
		}
		node* n = new node;
		cout << "ent data\n";
		cin >> n->data;
		node* temp = head;
		for (int i = 1; i < (no - 1); i++) {
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
	}
	void delet() {
		if (isempty()) {
			cout << "no you canet delete\n";
			return;
		}
		else {
			int no;
			cout << "enter index \n";
			cin >> no;
			while (count() < no) {
				cout << "enter num in linked list\n";
			}
			node* temp1 = head;
			node* temp2 = head;
			for (int i = 1; i < (no - 1); i++) {
				temp1 = temp1->next;
			}
			for (int i = 1; i < (no); i++) {
				temp2 = temp2->next;
			}
			temp1->next = temp2->next;
			temp2->next = NULL;
			delete[]temp2;

		}
	}
};