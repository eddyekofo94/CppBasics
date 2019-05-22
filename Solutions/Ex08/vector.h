#ifndef _VECT
#define _VECT

#include <iostream>
using namespace std;

class vector
{
	int x, y, z;

public:
	vector(int,int,int);
    void multiply(int);
    void display() {
		cout<<"Vector's coordinates : x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
};

#endif
