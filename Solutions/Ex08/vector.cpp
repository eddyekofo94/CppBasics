#include "vector.h"

vector::vector(int i,int j, int k)
{
	x=i;y=j;z=k;
}

void vector::multiply(int i)
{
    	x*=i;
        y*=i;
        z*=i;
}
