// #include "include/Vector.hpp"
#include "include/int_stack.hpp"
#include <iostream>

int main()
{
    // std::cout << Vector::getVectorCount() << '\n';

    // Vector v1, v2(3), v3(1, 2, 3);
    // std::cout << v1.getVectorCount() << '\n';
    // v1.display();
    // v2.display();
    // v3.display();

    // std::cout << v3.multiply(v2);

    // INFO: Exercise 7
    int_stack s1(6);
    int j;



    for (int i = 0; i < 4; i++)
    {
        s1.push(i + 2);
    }
    // while (!s1.empty())
    // {
    //     std::cout << s1.pop() << " ";
    //     std::cout << j << '\n';
    // }

    return 0;
}
