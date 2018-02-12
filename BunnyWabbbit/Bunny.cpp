#include "stdafx.h"
#include "bunny.h"
#include <string>
//using std::string;

//creates the bunny object
bunny::bunny(string colour, int age, bunny* nextBunny)
{
	if ((colour != "spotted" )|( colour != "black") |(colour != "brown") |(colour != "white"))
	{
		this->colour = colour;
	}

	this->age = age;
	
	sex = getSex();
	name = getName();

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

/*generates the sex of the bunny */
string bunny::getSex()
{
	string sex;
	if ((rand() % 1 )== 1)
	{
		sex = "male";
	}
	else
	{
		sex = "female";
	}
	return (sex);

}

/*returns a random int from 10 possiblites*/
string bunny::getName()
{
	int index;
	index = (rand() % 9);
	return (BUNNY_NAMES[index]);

}