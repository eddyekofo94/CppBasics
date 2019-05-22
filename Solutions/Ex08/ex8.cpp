#include "pair_vect.h"

int main()
{
	pair_vect pv(1,2,3,4,5,6);
	pv.display();
	cout<<endl<<"First vector"<<endl;
	pv.get_vector(1).display();
	cout<<endl<<"Modify second vector"<<endl;
	pv.get_vector(2).multiply(5);
	cout<<endl<<"Pair of vectors"<<endl;
	pv.display();
	return 0;

}
