#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {


	LinkedList<int> list ;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	list.display();

	cout<<list.size()<<"\n";

	//cout<<"iterator\n";


	/*for(LinkedList<int>::iterator itr = list.begin();itr != list.end();itr++)
		cout<<*itr<<" ";*/

/*	LinkedList<int>::iterator itr = list.begin();
	itr++;
	cout<<*itr;*/





	return 0;
}
