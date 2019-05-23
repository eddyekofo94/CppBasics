#pragma once
#include "geometric_figure.hpp"

class quadrilateral : virtual public geometric_figure
{
private:
    int length1, length2, breadth1, breadth2;

public:
    quadrilateral(int, int, int, int);
    ~quadrilateral();
    virtual double calculate_perimeter();
};
