#include "stdafx.h"
#include "BunnyLinkedList.h"

bunnylinkedList::bunnylinkedList()
{
	head = NULL;
}

bunnylinkedList::~bunnylinkedList()
{
	bunny* current = head;
	bunny* temp;

	while (current != NULL)
	{
		temp = current->getNext();
		delete current;
		current = temp;
	}
}

void bunnylinkedList::insert(string colour, int age)
{
	bunny* newItem = new bunny(colour, age, NULL);
	newItem->setNext(head); // head is the first item in the list
	head = newItem;
}
