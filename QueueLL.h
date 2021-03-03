#include<iostream>
#include<vector>
#ifndef QUEUELL
#define QUEUELL
// Add header comments here
using namespace std;
class QueueLL
{
private: 
	vector<int> V;
public:
	void Queue();
	~QueueLL();
	bool empty();
	void enqueue(int e);// add element to back
	void dequeue(); // removes element from the front
	int front(); // retrieve value of element from front
	void display();
};

#endif