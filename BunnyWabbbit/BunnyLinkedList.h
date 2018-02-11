#ifndef BUNNY_LINKED_LIST_H
#define BUNNY_LINKED_LIST_H
#include "bunny.h"
#include <string>

class bunnylinkedList
{
private:
	bunny* head;

public:
	bunnylinkedList();
	~bunnylinkedList();

	void insert(string , int );
};

#endif