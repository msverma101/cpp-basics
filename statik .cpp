#include <iostream>

int add(int b)
{ //function declaration
    int a = 2 * b;
    return a;
}

int main()
{
    int *p;
    {
        static int m = 5;
        p = &m;
        std::cout << m << std::endl;
        std::cout << *p << std::endl;
    }

    // long int* a = 0x563dce9bc010;
    // std::cout<< a<<std::endl;
    std::cout << *p << std::endl;

    int x = add(add(4)); //fucntion call
    std::cout << x << std::endl;
}
