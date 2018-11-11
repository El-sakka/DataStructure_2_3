/*
 * LinkedList.h
 *
 *  Created on: Apr 30, 2018
 *      Author: sakkawy
 */

#include<bits/stdc++.h>
using namespace std;

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_


template<class T>
class LinkedList {
private:
	struct Node{
		T data;
		Node* next ;
	};

	Node *head ;
	Node *temp ;
	Node *curr ;
public:
	LinkedList();
	LinkedList(T n, int Size); // feeh 8lta hena
	int size();
	void push_back(T x);
	void insert(T data, iterator itr);
	void display();

	class iterator{
	private:
		Node *currentNode;
	public:
	    //iterator(Node* node) : _node(node){}
		iterator(Node *node):currentNode(node){}

		iterator &operator=(Node *node){
			this->currentNode = node;
			return *this;
		}

		// prefix ++ operload
		iterator &operator++(){
			if(currentNode)
				currentNode = currentNode->next;
			return *this;
		}

		// postfix ++ overload
		iterator operator++(int){
			iterator itr = *this;
			++*this;
			return itr;
		}
		bool operator !=(const iterator &itr){
			return currentNode != itr.currentNode;
		}
		int operator *(){
			return currentNode->data;
		}

	};

	iterator begin(){
		return iterator(head);
	}
	iterator end(){
		return iterator(NULL);
	}
	virtual ~LinkedList();
};

#endif /* LINKEDLIST_H_ */
