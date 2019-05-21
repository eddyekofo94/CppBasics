#pragma once

class Vector
{
    double x, y, z;

public:
    Vector();
    ~Vector();

    Vector(double &, double &, double &);

    void setX(double);

    void setY(double);

    void setZ(double);

    double getX();

    double getY();

    double getZ();

    double multiply(int);
    void display();
};
