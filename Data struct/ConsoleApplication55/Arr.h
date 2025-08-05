#pragma once
#include <iostream>
using namespace std;
class Arr
{
private:
	int size;
	int length;
	int* kol;


public:
	Arr(int s) {
		size = s;
		length = 0;
		kol = new int[s];
	}
	void fill() {
		cout << "how many elments you want in array\n";
		int n;
		cin >> n;
		while (n > size) {
			cout << "i will die minues age ..enter elements smaller than size \n";
			cin >> n;
		}

		for (int i = 0; i < n; i++) {
			cout << "input item " << i << endl;
			cin >> kol[i];
			length++;
		}

	}
	void display() {
		cout << "we will show arr\n";
		for (int i = 0; i < length; i++) {
			cout << "item num" << i << "\t" << kol[i];
			cout << endl;
		}
	}
	void append(int m) {
		kol[length] = m;
		length++;
	}
	void insert(int b, int c) {
		kol[length] = c;
		for (int i = b; i < length; i++) {
			int c;
			c = kol[length];
			kol[length] = kol[i];
			kol[i] = c;
		}
		length++;

	}
	void sort() {
		int g = length - 1;
			for (int i = 0; i < g; i++) {
				for (int j = i + 1; j < length; j++) {
					if (kol[i] < kol[j]) {

					}
					else {
						if (i == j + 1) {
							int c = kol[i];
							kol[i] = kol[j];
							kol[j] = c;
						}
						else {
							int c = kol[i];
							kol[i] = kol[j];
							kol[j] = c;
							int v = i + 1;
							 c = kol[v];
							kol[v] = kol[j];
							kol[j] = c;
						}
					}
				}
			}
	
	}
	void merge(Arr a1, Arr a2) {
		int g = a1.length+a2.length;
		for (int i = 0; i < a1.length; i++) {
			this->kol[i] = a1.kol[i];
		}
			int m = 0;
		for (int i = a1.length; i < g; i++) {
			this->kol[i] = a2.kol[m];
			m++;
		}
		this->length = a1.length + a2.length;
	}
	int search(int v) {
		for (int i = 0; i < length; i++) {
			if (kol[i] == v) {
			
				return i;
			}
			else {
				if (length - 1 == i) {
					cout << "the array donet have this num\n";
					return;
				}
			}
		}
	}
	int search(int v,int o) {
		for (int i = o; i < length; i++) {
			if (kol[i] == v) {
				return i;
			}
			else {
				if (length - 1 == i) {
					cout << "the array donet have this num\n";
					return;

				}
			}
		}
	}

	int getlength() {
		return length;
	}
	int getsize() {
		return size;
	}
	void remove(int d) {
		int v=search(d);
		for (int o = v; o < length - 1; o++) {
		  kol[v] = kol[v+1];
		
		
}
		kol[length-1] = 0;
		length--;
	}
	void remove(int d ,int p) {
		int v = search(d,p);
		for (int o = v; o < length - 1; o++) {
			kol[v] = kol[v + 1];


		}
		kol[length - 1] = 0;
		length--;
	}
	void enlarge(int s) {
while(s<size) {
	cout << "ent the size bigger than the old size";
	cin >> s;
	}
		
			size = s;
			int* momo = kol;
			kol = new int[size];
			for (int i = 0; i < length; i++) {
				kol[i] =momo[i] ;
			}
			delete[]momo;
		
	}
	
	
};

