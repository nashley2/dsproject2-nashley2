// Add cpp comments here nathan
#include "StackLL.h"
#include<stack>
#include<iostream>



StackLL::StackLL()
{
	int S = 0;
}

StackLL::~StackLL()
{
	S.erase(S.begin());
}

bool StackLL::empty()
{
	if (S.size() == 0)
	{
		return true;
	}
	else
		return false;

}

void StackLL::pop()
{
	S.pop_back();
}

void StackLL::push(int e)
{
	S.push_back(e);
}

void StackLL::size()
{
	long n = S.size();
	for (int i = 0; i < n; i++)
		cout << S[i] << "\n";
}

int StackLL::myFront()
{
	return S.back();
}

void print_vector_reverse(vector<int> S)

{
	long n = S.size();
	for (long i = n - 1; i >= 0; i--)
		cout << S[i] << ",";
	cout << "\n";
}

void StackLL::display()
{
	print_vector_reverse(S);

}
