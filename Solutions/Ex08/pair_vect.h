#include "vector.h"

class pair_vect
{
	vector vector1, vector2;


public:
	pair_vect(int , int, int, int  , int,int );
	pair_vect(vector,vector);
    vector & get_vector(int);

	void display()
	{
		vector1.display();
		vector2.display();
	}

};
