#ifndef BUNNY_H
#define BUNNY_H
#include <string>


using namespace std;





class bunny
{

public:
	// constructors
	bunny() {}
	bunny(string colour, int age, bunny* nextBunny);

	string getSex(void);
	string getName(void);
	void setNext(bunny* listItem);
	bunny* getNext();

protected:

	// attributes
	string name;
	string colour;
	string sex;
	int age;

	bunny* nextListItem = NULL;

	string BUNNY_NAMES[10]{
		"jeff",
		"bob",
		"roger",
		"skippy",
		"jumppey",
		"floppy",
		"happy",
		"sam",
		"jack",
		"ed"
	};
};

#endif

