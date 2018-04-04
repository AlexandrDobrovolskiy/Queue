#include "stdafx.h"
#include "Queue.h"



	bool Queue::isEmpty()
	{
		return firstIndex > lastIndex;
	}

	void Queue::add(int item)
	{
		if (isFull())
			return;
		items[++lastIndex] = item;
	}

	int Queue::get()
	{
		if (isEmpty())
			return NULL;
		return items[firstIndex];
	}

	int Queue::remove()
	{
		if (isEmpty())
			return NULL;
		int temp = items[firstIndex];
		return temp ;
		
	}
	
	bool Queue::isFull()
	{
		return SIZE == lastIndex + 1;
	}


	Queue::Queue()
	{
		lastIndex = -1;
		firstIndex = 0;
		
	}

	Queue::~Queue()
	{
	}

