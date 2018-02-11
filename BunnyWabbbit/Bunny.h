#ifndef BUNNY_H
#define BUNNY_H
#include <string>


using namespace std;


//string BUNNY_NAMES[10] {
//	"jeff",
//	"bob",
//	"roger",
//	"skippy",
//	"jumppey",
//	"floppy",
//	"happy",
//	"sam",
//	"jack",
//	"ed"
//} ;


class bunny
{

public:
	// constructors
	bunny() {}
	bunny(string colour, int age, bunny* nextBunny);

	bool getSex(void);
	int getName(void);
	void setNext(bunny* listItem);
	bunny* getNext();

protected:

	// attributes
	string colour;
	int age;
	string sex;
	string name;
	bunny* nextListItem = NULL;
};

#endif

