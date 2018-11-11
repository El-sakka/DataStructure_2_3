/*
 * Stack.cpp
 *
 *  Created on: May 2, 2018
 *      Author: sakkawy
 */
#include <bits/stdc++.h>
#include "Stack.h"

using namespace std;

template<class T>
Stack<T>::Stack() {
	// TODO Auto-generated constructor stub
	head = NULL;

}

template<class T>
void Stack<T>::push(T x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}

template<class T>
Stack<T>::Stack(T n, int size){
	for(int i=0;i<size;i++){
		push(n);
	}
}

template<class T>
void Stack<T>::display(){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

template<class T>
void Stack<T>::pop(){
	Node *temp = head;
	if(head == NULL) return;
	head = temp->next;
	delete temp;
}

template<class T>
int Stack<T>::size(){
	Node *temp = head;
	int count = 0;
	while(temp != NULL)
	{
		temp = temp->next;
		count ++;
	}
	return count;
}


template<class T>
T &Stack<T>:: top(){
	//Node *temp = head;
	if(head == NULL){
		cout<<"Stack is empty \n";
	}
	else
		return head->data;

}



template<class T>
Stack<T>::~Stack() {
	// TODO Auto-generated destructor stub
}

template class Stack<int>;
template class Stack<float>;
template class Stack<double>;
