

// Stack-Queue-LL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"ElementType.h"
#include "Node.h"
#include "QueueLL.h"
#include "StackLL.h"
#include <iostream>
#include "main.h"

using namespace std;



int main()
{

    // Create object with new
    StackV* stack = new StackV();
    cout << boolalpha << stack->empty() << endl; // this returns true or false. true if empty. false if full
    stack->push(10); //10
    stack->push(20); // 20 10
    stack->push(30); // 30 20 10
    stack->push(40); // 40 30 20 10 



    cout << stack->top() << endl; // 40

    stack->push(50); // 50 40 30 20 10
    stack->push(60); // 60 50 40 30 20 10 
    stack->push(70); // 70 60 50 40 30 20 10

    cout << stack->top() << endl; // 70
    stack->pop(); // deletes 70


    cout << stack->top() << endl; // 60
    stack->pop(); // deletes 60

    cout << stack->top() << endl; //50
    stack->pop(); // deletes 50

    cout << stack->top() << endl; // 40
    stack->display(); // 40 30 20 10

    // Delete object
    delete stack;



    // Create object with new
    QueueV* queue = new QueueV();
    queue->enqueue(10); // 10
    queue->enqueue(20); // 10 20
    queue->enqueue(30); // 10 20 30
    queue->enqueue(40); // 10 20 30 40
    cout << queue->front() << endl; // 10
    queue->enqueue(50); // 10 20 30 40 50
    queue->enqueue(60); // 10 20 30 40 50 60
    queue->enqueue(70); // 10 20 30 40 50 60 70 
    cout << queue->front() << endl; // 10
    queue->dequeue(); // delete 10
    cout << queue->front() << endl; // 20
    queue->dequeue(); // delete 20
    cout << queue->front() << endl; // 30
    queue->dequeue(); // delete 30
    cout << queue->front() << endl; // 40
    cout << boolalpha << queue->empty() << endl; // shows true if empty, false if full. 
    // Delete object
    delete queue;




    return 0;
}

