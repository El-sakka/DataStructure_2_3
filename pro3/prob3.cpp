//============================================================================
// Name        : prob3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
#include "Queue.h"

using namespace std;

int main() {

/*
	Queue<int> q;
	q.enqueue(1);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(2);
*/

	Queue<int> q(3,4);

	q.display();

	return 0;
}
