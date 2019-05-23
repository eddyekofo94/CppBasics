#pragma once

class geometric_figure
{
private:
    double get_perimeter;

public:
    virtual double calculate_perimeter() = 0;
};
