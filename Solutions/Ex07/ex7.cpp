#include "int_stack.h"
#include <iostream>
using namespace std;

void main1() //first try
{
	int_stack is(6);
	int j;
	for (int i=0;i<4;i++)
		is.push(i+2);
	while(!is.empty())
	{
		cout<<is.pop(j)<<"  ";
		cout<<j<<endl;
	}
}

void main2() //second try with static object
{
	int_stack is(6);
	int i,j;
	for (i=0;i<4;i++)
		is.push(i+2);
	{
		int_stack is2(is);
		is2.pop(j);
		is2.push(100);
	}
	while(!is.empty())
	{
		cout<<is.pop(j)<<endl;
	}
}

void main3() //second try with static object
{
	int_stack is(6);
	int i,j;
	for (i=0;i<4;i++)
		is.push(i+2);
	//dynamic stack
	{
		int_stack * is2=new int_stack(is);
		is2->pop(j);
		is2->push(100);
	}
	while(!is.empty())
	{
		cout<<is.pop(j)<<endl;
	}
}


int main()
{
	main3();
	return 0;
}
