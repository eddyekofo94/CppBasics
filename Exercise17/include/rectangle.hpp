#pragma once
#include "geometric_figure.hpp"

class rectangle : public geometric_figure
{
private:
    int length, breadth;

public:
    rectangle(int, int);
    ~rectangle();
};
