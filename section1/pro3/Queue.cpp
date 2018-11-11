/*
 * Queue.cpp
 *
 *  Created on: May 2, 2018
 *      Author: sakkawy
 */

#include "Queue.h"
#include <bits/stdc++.h>
using namespace std;


template<class T>
Queue<T>::Queue() {
	// TODO Auto-generated constructor stub

	front = NULL;
	rear = NULL;

}

template<class T>
void Queue<T>::enqueue(T x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next =temp;
	rear = temp;

}

template<class T>
void Queue<T>::dequeue(){
	Node *temp = front;
	if(front == NULL){
		cout<<"Error Queue is Empty\n";
		return;
	}
	else if(front == rear){
		front = rear = NULL;
	}
	else
		front = temp->next;
	delete temp;
}

template<class T>
T &Queue<T>::Front(){
	if(front == NULL){
		cout<<"Error Queue is Empty\n";

	}
	else
		return front->data;
}

template<class T>
Queue<T>::Queue(T n, int size){
	for(int i=0;i<size;i++)
		enqueue(n);

}

template <class T>
int Queue<T>::size(){
	Node *temp = front ;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

template <class T>
void Queue<T>::display(){
	Node *temp = front;
	cout<<"Queue : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

template<class T>
Queue<T>::~Queue() {
	// TODO Auto-generated destructor stub
	Node *temp = front;
	Node *temp2;
	while(temp != NULL){
		temp2= temp;
		temp = temp->next;
		delete temp2;
	}
	delete front;
	delete rear;
	delete temp;
}

template class Queue<int>;
template class Queue<float>;
template class Queue<double>;

