#pragma once
#include"node.h"
#include <iostream>
using namespace std;
class stack
{
public:
	node* top;
	stack() {
		top = NULL;
	}
	bool isempty() {
		return(top == NULL);
	}
	void push() {
		if (isempty()) {
			node* n = new node();
			cout << "ent data of top\n";
			cin >> n->data;
			n->next = NULL;
			top = n;
		}
		else {
			node* n = new node();
			cout << "ent the data of top\n";
			cin >> n->data;
			n->next = top;
			top = n;
		}
	}
	void pop() {
		node* temp=top;
		top = top->next;
		temp->next = NULL;
		delete[]temp;
	}
	void peak() {
		cout << "the peak is :" << top->data << endl;
	}
	int count() {
		node* temp = top;
		int c = 0;
		while (temp != NULL) {
			c++;
			temp = temp->next;
		}
		return c;
	}
	void display() {
		node* temp = top;
		while (temp != NULL) {
			cout<< temp->data;
			temp = temp->next;
		}
	}
	void search() {
		int c = 0;
		int f;
		cout << "ent the num you want search\n";
		cin >> f;
		if (isempty()) {
			cout << "NO WE DONET FOUND";
			return;
		}
		node* temp = top;
		while (temp != NULL) {
			c++;
			if (temp->data == f) {
				cout << " we found this num in count :" << c << endl;
				return;
			}
			cout << "we donet fount this in my stack\n";
		}
	}


};

