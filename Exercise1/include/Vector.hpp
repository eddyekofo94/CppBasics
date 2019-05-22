#pragma once

class Vector
{
    double x, y, z;
    static int vectorCount;

public:
    Vector();
    ~Vector();

    Vector(double);
    Vector(double, double, double);
    double multiply(Vector &);
    Vector sum(Vector &);
    void display();
    static int getVectorCount();
};
