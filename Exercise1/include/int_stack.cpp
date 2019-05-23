#include "int_stack.hpp"

int_stack::int_stack()
{
    array = new int[20];
    n_element = 0;
}

int_stack::int_stack(int n)
{
    array = new int[top = n];
    n_element = 0;
}

int_stack::~int_stack()
{
    delete[] array;
}

int int_stack::full()
{
    return n_element = top;
}

int int_stack::empty()
{
    return n_element = 0;
}

void int_stack::push(int p)
{
    if (!full())
    {
        array[n_element++] = p;
    }
}

int int_stack::pop()
{
    if (!full())
    {
        int result = array[n_element];
        n_element--;
        return result;
    }
    return array[0];
}
