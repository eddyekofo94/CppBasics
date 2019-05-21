#pragma once

class Vector
{
    double x, y, z;

public:
    Vector();
    ~Vector();

    Vector(double &);
    double multiply(const int &);
    void display();
};
