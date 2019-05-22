#include "vector.h"
#include <iostream>
using namespace std;

vector::~vector()
{
        total--;
}

vector::vector()
{
        total++;
        x=y=z=0;
}

vector::vector(double val)
{
        total++;
        x=y=z=val;
}

vector::vector(double v1,double v2,double v3)
{
        total++;
        x=v1;
        y=v2;
        z=v3;
}

void vector::display()
{
        cout<<x<<"  "<<y<<"  "<<z<<endl;
}

void vector::multiply(int i)
{
    	x*=i;
        y*=i;
        z*=i;
}

int vector::multiply(vector& v)
{
        return (int)(x*v.x + y*v.y + z*v.z);
}

int vector::nbvect()
{
        return total;
}

vector vector::sum(vector&v){
    return vector(x+v.x , y+v.y , z+v.z);
}

int vector::total=0;
