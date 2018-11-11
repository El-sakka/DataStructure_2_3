/*
 * Stack.h
 *
 *  Created on: May 2, 2018
 *      Author: sakkawy
 */

#ifndef STACK_H_
#define STACK_H_

template<class T>
class Stack {
private:

	struct Node{
		T data;
		Node *next ;
	};

	Node *head ;

public:
	Stack();
	Stack(T n, int size);
	void display();
	void pop();
	void push(T x);
	int size();
	T &top();

	virtual ~Stack();
};

#endif /* STACK_H_ */
