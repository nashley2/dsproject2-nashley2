  // Add cpp comments here
#include "QueueLL.h"
#include "Node.h"
#include <iostream>
using namespace std;

void QueueLL::Queue()
{
	int V = 0;
}

QueueLL::~QueueLL()
{
	V.erase(V.begin());
}

bool QueueLL::empty()
{
	if (V.size() == 0)
		return true;
	else
		return false;
}

void QueueLL::enqueue(int e)
{
	V.push_back(e);
}

void QueueLL::dequeue()
{
	V.erase(V.begin());
}

int QueueLL::front()
{
	return V.front();
}

void QueueLL::display()
{
}
