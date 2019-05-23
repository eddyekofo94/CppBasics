#pragma once
#include "geometric_figure.hpp"

class polygon : public geometric_figure
{
private:
    int length;
    int sides;

public:
    polygon(int);
    int get_length();
    ~polygon();
    double calculate_perimeter();
};
