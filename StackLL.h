#ifndef STACKLL
#define STACKLL
#include<vector>
#include "Node.h"
// Add header comments here
using namespace std;

class StackLL
{
private:
	vector<int>v;
	
public:
	StackLL();
	~StackLL();
	bool empty(int v);
	void pop();
	int stack();
	void push(int e);

	void size();

	int top();
	void display();


};

#endif