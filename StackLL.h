#ifndef STACKLL
#define STACKLL
#include<vector>
#include "Node.h"
// Add header comments here
using namespace std;

class StackLL
{
private:
	vector<int> S;
	
public:
	StackLL();
	~StackLL();
	bool empty(int S);
	void pop();
	void push(int e);

	void size();

	int top();
	void display();


};

#endif