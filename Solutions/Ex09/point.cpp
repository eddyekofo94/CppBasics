#include "point.h"

point::point(int a,int b)
{
	x=a;y=b;
}

int point::operator==(point p)
{
	return x==p.x && y==p.y;

}
