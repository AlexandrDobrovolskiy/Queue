#include "stdlib.h"
#include "stdafx.h"
#include <iostream>
#define SIZE 5

#ifndef Queue_H
#define Queue_H

class Queue
{
public:

	Queue();

	~Queue();


	void add(int);


	int remove();


	bool isEmpty();


	int get();


	bool isFull();

private:

	int items[SIZE];
	int firstIndex;
	int lastIndex;
	
};

#endif


