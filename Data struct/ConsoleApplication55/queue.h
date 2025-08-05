#pragma once
#include"node.h"
#include <iostream>
using namespace std;
class queue
{
	node* head;
public :
	queue() {
		head = NULL;
	}
	bool isempty() {
		return(head == NULL);
	}
	void enqueue() {
		if (isempty()) {
			node* n = new node();
			cout << "ent the data in head\n";
			cin >> n->data;
			n->next = NULL;
			head = n;

		}
		else {
			node* temp=head;
			node* n = new node();
			cout << "ent the data in end\n";
			cin >> n->data;
			n->next = NULL;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = n;
		}
	}
	int count() {
		node* temp = head;
		int c = 0;
		while (temp != NULL) {
			c++;
			temp = temp->next;
		}
		return c;
	}
	void dequeue() {
		if (isempty()) {
			cout << "the queue is empty \n";
		}
		else {
			if (count() == 1) {
				head = NULL;
			}
			else {
		node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete[]temp;
			}
		}
	}
	void display() {
		node* temp = head;
		while(temp!=NULL){
			cout << temp->data<<endl;
			temp = temp->next;
		
		}
	}
	void peak() {
		cout << "the peek is" << head->data << endl;
	}
	void search() {
		if (isempty()) {
			cout << "the queue is empty";
			return;
		}
		else {
			cout << "ent the num you want to search";
			int f,c=0;
			node* temp = head;
			cin >> f;
			while (temp != NULL) {
				c++;
				if (f == temp->data) {
					cout << "we found in queue num :" << c << endl;
				}
				temp = temp->next;
			}
			cout << "we donet found ";
			return;
		}
	}
	void clear() {
		while (1) {
			if (isempty()) {
				return;
			}
			else {
				dequeue();
			}
		}
	}

};

