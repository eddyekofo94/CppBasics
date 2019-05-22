#include "include/Vector.hpp"
#include <iostream>

int main()
{
    std::cout << Vector::getVectorCount() << '\n';

    Vector v1, v2(3), v3(1, 2, 3);

    std::cout << v1.getVectorCount() << '\n';
    v1.display();
    v2.display();
    v3.display();

    std::cout << v3.multiply(v2);

    return 0;
}
