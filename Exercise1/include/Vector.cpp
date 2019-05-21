#include "Vector.hpp"
#include <iostream>

Vector::Vector() : x(0), y(0), z(0)
{
}

Vector::Vector(double &input)
{
    x = input;
    y = input;
    z = input;
}

Vector::~Vector()
{
}

double Vector::multiply(const int &input)
{
    Vector *vector;
    Vector *v2;
    return vector->x
    // return (int)x * input + y * input + z * input;
}

void Vector::display()
{
    std::cout << x << y << z << '\n';
}
