
#include <iostream>
#include<string>
#include "Arr.h"
#include "linkedlist.h"
#include "tree.h"

using namespace std;
int main()
{/*
	int s;
	int v,n,m;
	cout << "ent size of array\n";
	cin >> s;
	Arr a1(s);
	a1.fill();
	cout << "ent the new size\n";
	cin >> m;
	a1.enlarge(m);
	cout << "ent num out index\n";
	cin >> m;
	a1.search(m);*/
	/*int o;
	cout << "ent size of array\n";
	cin >> o;
	Arr a2(o);
	a2.fill();
	Arr a3(o + s);
	a3.merge(a1, a2);
	cout << "enter num that ypu want to add\n";
	cin >>v;
	a1.append(v);
	/*cout << "enter num of index and num\n";
	cin >> n >> m;
	a1.insert(n, m);
	a1.sort();*/
	/*cout << "ent the index do you want delete\n";
	cin >> m;
	a1.delet(m);
	a1.display();
	.........................................................*/
	/*
	linkedlist l1;
	if (l1.isempty()) {
		cout << "its empty" << endl;
	}
	else {
		cout << " ITS NOT EMPTY\n";
	}
	l1.insertfirst();
	l1.insertfirst();
	l1.append();
	l1.insert();
	l1.search();
	l1.count();
	l1.delet();
	l1.display();
	.....................................................................................*/
	tree t1;
	t1.insert();
	t1.insert();
	t1.insert();
	t1.insert();
	t1.insert();
	t1.insert();
	t1.insert();
	t1.preorder();
}
