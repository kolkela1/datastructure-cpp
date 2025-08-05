#pragma once
#include"nodetotree.h"
#include <iostream>
using namespace std;
class tree
{
	nodetotree* root;
public :
	tree() {
		root = NULL;
	}
	bool isempty() {
		return(root == NULL);
	}
	void insert() {
		if (isempty()) {
			nodetotree* n = new nodetotree();
			cout << "ent the num in root \n";
			cin >> n->data;
			root = n;
		}
		else {
			nodetotree* n = new nodetotree();
			cout << "ent the num \n";
			cin >> n->data;
			nodetotree* temp = root;
			while (1) {
				if (n->data >= temp->data) {
					if (temp->right == NULL) {
						temp->right = n;
						break;
					}
					else
					temp = temp-> right;
				}
				else {
					if (temp->left == NULL) {
			temp->left=n;

						break;
					}
					else
					temp = temp->left;
				}

			}
			

			
		}
	}
	void preorder(nodetotree*r) {
		if (r == NULL) {
			return;
		}
		cout << r->data << endl;
		preorder(r->left);
		preorder(r->right);
	}
	void preorder() {
		cout << "we will show this tree by preorder\n";
		preorder(root);
	}

	void inorder(nodetotree* r) {
		if (r == NULL) {
			return;
		}
		inorder(r->left);
		cout << r->data << endl;
		inorder(r->right);
	}
	void inorder() {
		cout << "we will show this tree by preorder\n";
		inorder(root);
	}
	void poostorder(nodetotree* r) {
		if (r == NULL) {
			return;
		}
		poostorder(r->left);
		poostorder(r->right);
		cout << r->data << endl;
	}
	void poostorder() {
		cout << "we will show this tree by preorder\n";
		poostorder(root);
	}
};

