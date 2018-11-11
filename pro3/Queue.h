/*
 * Queue.h
 *
 *  Created on: May 2, 2018
 *      Author: sakkawy
 */

#ifndef QUEUE_H_
#define QUEUE_H_


using namespace std;

template <class T>
class Queue {
	struct Node {
		T data;
		Node *next;
	};

	Node *front , *rear;

public:
	Queue();
	Queue(T n, int size); //hena lesa
	void enqueue(T x);
	void dequeue();
	void display();
	T &Front();
	int size();
	virtual ~Queue();
};

#endif /* QUEUE_H_ */
