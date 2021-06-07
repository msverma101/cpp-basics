#include <iostream>
#include <limits>
#include <typeinfo>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int *&p2 = p;
    cout << p2 << endl;
    int v = 10;
    int const *p1 = &v;
}
