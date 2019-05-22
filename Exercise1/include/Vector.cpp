#include "Vector.hpp"
#include <iostream>

int Vector::vectorCount = 0;
Vector::Vector()
{
    x = y = z = 0;
    vectorCount++;
}

Vector::Vector(double input)
{
    x = input;
    y = input;
    z = input;

    vectorCount++;
}

Vector::~Vector()
{
    vectorCount--;
}

Vector::Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
{
    vectorCount++;
}

double Vector::multiply(Vector &vector)
{
    // I think so? Exercise 4
    return (vector.x + vector.y + vector.x) * (vector.x + vector.y + vector.x);
}

int Vector::getVectorCount()
{
    return vectorCount;
}

Vector Vector::sum(Vector &vector)
{
    return Vector(x + vector.x, y + vector.y, z + vector.z);
}

void Vector::display()
{
    std::cout << x << " " << y << " " << z << " " << '\n';
}
