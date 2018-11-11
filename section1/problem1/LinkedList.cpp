/*
 * LinkedList.cpp
 *
 *  Created on: Apr 30, 2018
 *      Author: sakkawy
 */

#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;

template<class T>
LinkedList<T>::LinkedList() {
	// TODO Auto-generated constructor stub
	head = NULL;
	curr = NULL;
	temp = NULL;
}


template<class T>
void LinkedList<T>::push_back(T x) {
	Node *tempNode = new Node();
	tempNode->data = x;
	tempNode->next = NULL;

	if (head == NULL)
		head = tempNode;
	else {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = tempNode;
	}

}

template<class T>
LinkedList<T>::LinkedList(T n, int Size) {

	//Node *tempNode = new Node ();
/*
	for(int i=0;i<Size;i++){
	temp->data = n ;
	temp->next = NULL;
		if(head == NULL)
			head == tempNode;
		else{
			curr = head;
			while(curr->next != NULL)
				curr = curr->next;
			curr->next = tempNode;
		}
	}*/

	Node *tempNode = new Node();
		tempNode->data = n;
		tempNode->next = NULL;

		if (head == NULL)
			head = tempNode;
		else {
			curr = head;
			while (curr->next != NULL) {
				curr = curr->next;
			}
			curr->next = tempNode;
		}


}

template<class T>
void LinkedList<T>::display() {
	curr = head;
	while (curr != NULL) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << '\n';
}

template<class T>
int LinkedList<T>::size(){
	int count = 0;
	curr = head ;
	while(curr != NULL){
		count++;
		curr = curr->next;
	}
	return count;
}

template<class T>
LinkedList<T>::~LinkedList() {
	// TODO Auto-generated destructor stub
}

template class LinkedList<int> ;
template class LinkedList<float> ;
template class LinkedList<double> ;
