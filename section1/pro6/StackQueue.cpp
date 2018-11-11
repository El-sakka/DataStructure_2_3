/*
 * StackQueue.cpp
 *
 *  Created on: May 12, 2018
 *      Author: sakkawy
 */

#include "StackQueue.h"

StackQueue::StackQueue() {
	// TODO Auto-generated constructor stub

}

int StackQueue::top(){
	if(q.empty())
	{
		cout<<"stack is empty";
		return -1;
	}
	else
		return q.front();
}

void StackQueue::push(int value){
	int size = q.size();
	q.push(value);

	for(int i=0;i<size;i++){
		q.push(q.front());
		q.pop();
	}

}

void StackQueue::pop(){
	if(q.empty())
		cout<<"stack is empty";
	else
		q.pop();
}



StackQueue::~StackQueue() {
	// TODO Auto-generated destructor stub
}

