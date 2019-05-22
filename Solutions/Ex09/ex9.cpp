#include "point.h"
#include <iostream>
using namespace std;

int main()
{
	point p1(1,1),p2(2,2),p3(1,1);
	cout<<(p1==p2)<<"   "<<(p1==p3)<<endl;
	return 0;
}
