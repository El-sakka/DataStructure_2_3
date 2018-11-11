/*
 * StackQueue.h
 *
 *  Created on: May 12, 2018
 *      Author: sakkawy
 */
#include<bits/stdc++.h>
using namespace std;

#ifndef STACKQUEUE_H_
#define STACKQUEUE_H_

class StackQueue {

private:
	queue<int>q;
public:
	StackQueue();
	int top();
	void pop();
	void push(int value);
	virtual ~StackQueue();
};

#endif /* STACKQUEUE_H_ */
