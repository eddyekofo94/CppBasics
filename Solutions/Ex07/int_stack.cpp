#include "int_stack.h"
#include <iostream>
using namespace std;

int_stack::int_stack(int n)
{
	adr=new int[size=n];
	nelem=0;
}

int_stack::~int_stack()
{
	delete [] adr;
}

int int_stack::full()
{
	return nelem==size;
}

int int_stack::empty()
{
	return nelem==0;
}

void int_stack::push(int i)
{
	if (!full())
		adr[nelem++]=i;
}

int int_stack::pop(int& n)
{
	if (!full())
		return n=adr[--nelem];
	return n=adr[0];
}

/*
int_stack::int_stack(int_stack& s)
{
	adr=new int[size=s.size];
	nelem=s.nelem;
	for(int i=0;i<size;i++)
		adr[i]=s.adr[i];
}
*/
