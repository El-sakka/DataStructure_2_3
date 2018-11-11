//============================================================================
// Name        : prob4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;



bool comp(int f, int s){
	return f<s;
}



int main() {

	list<int> l1,l2;

	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);

	l2.push_back(3);
	l2.push_back(5);
	l2.push_back(6);
	l2.push_back(7);

	l1.sort();
	l2.sort();

	l1.merge(l2);
	l1.unique();

	for(list<int>::iterator it = l1.begin();it != l1.end();it++){
		cout<<" "<<*it;
	}
	cout<<"\n";




	return 0;
}
