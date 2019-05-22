#include "vector.h"
#include <iostream>
using namespace std;

int main() {
	 vector a, b(3), c(1,2,3);
	 a.display();
	 b.multiply(2);
	 b.display();
	 cout << b.multiply(c) <<endl;
	 (b.sum(a)).display();
	 cout<<vector::nbvect()<<endl;
	 return 0;
}

