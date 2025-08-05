#pragma once
#include <iostream>
using namespace std;
class nodetotree
{
public:
	int data;
	nodetotree* right ;
	nodetotree* left;
	nodetotree() {
		nodetotree* left = NULL;
		nodetotree* right = NULL;

	}
};

