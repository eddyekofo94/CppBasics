#pragma once

class int_stack
{
private:
    int top;
    int *array;
    int n_element;

public:
    int_stack();
    int_stack(int);
    ~int_stack();
    void push(int);
    int full();
    int empty();
    int pop();
};
