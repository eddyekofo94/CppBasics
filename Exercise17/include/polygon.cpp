#include "polygon.hpp"

polygon::polygon(int n_side)
{
    sides = n_side;
}

polygon::~polygon()
{
}

int polygon::get_length()
{
    return length;
}

double polygon::calculate_perimeter()
{
    return sides * length;
}
