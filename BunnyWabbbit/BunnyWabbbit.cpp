// BunnyWabbbit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
//#include "Bunny.h"
#include "BunnyLinkedList.h"

int main()
{

	bunnylinkedList bunny;
	int no_of_bunny = 0;
	string bunny_colour;
	int bunny_age;
	bool correct_colour = false;
	bool correct_age = false;

	while (no_of_bunny < 100) 
	{
				
		while (correct_colour != true) 
		{
			cout << "Enter an colour: " << endl;
			cin >> bunny_colour;
			if ((bunny_colour == "spotted") | (bunny_colour == "black") | (bunny_colour == "brown") | (bunny_colour == "white"))
			{
				correct_colour = true;
			}
			else 
			{
				cout << "Enter an correct colour: spotted , black, brown, white " << endl;
			}
		}
		while (correct_age != true)
		{
			cout << "Enter an age: " << endl;
			cin >> bunny_age;
			if ((0<= bunny_age)&& (10>=bunny_age))
			{
				correct_age = true;
			}
			else
			{
				cout << "Enter an correct age between 0 and 10" << endl;
			}
		}
		correct_colour = correct_age = false;
	
		bunny.insert( bunny_colour, bunny_age);
		no_of_bunny++;
	}


    return 0;
}

