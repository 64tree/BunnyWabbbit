#include "stdafx.h"
#include "bunny.h"
#include <string>
//using std::string;

//creates the car object
bunny::bunny(string colour, int age, bunny* nextBunny)
{
	if ((colour != "spotted" )|( colour != "black") |(colour != "brown") |(colour != "white"))
	{

		this->colour = colour;
	}

	this->age = age;
	
	if (getSex() == 1) 
	{
		sex = "male";
	}
	else 
	{
		sex = "female"; 
	}
	int index;
	index = getName();
	name = "jack";
		//BUNNY_NAMES[index];

	setNext(nextBunny);

}

void bunny::setNext(bunny* listItem)
{
	this->nextListItem = listItem;
}

bunny* bunny::getNext()
{
	return this->nextListItem;
}

bool bunny::getSex()
{
	return ( rand() % 1);

}

int bunny::getName()
{
	return (rand() % 9);

}