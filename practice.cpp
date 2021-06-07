#include <iostream>
#include <limits>
using namespace std;
int main()
{
    //int i = 1345467896548784;
    unsigned i2 = -1;
    cout << "the size of i2 is " << i2 << "size of is " << sizeof(i2) << endl;
    cout << "the size of char is " << sizeof(char) << endl;
    cout << "the size of bool is " << sizeof(bool) << endl;
    cout << "the size of int " << sizeof(int) << endl;
    cout << "the size of short " << sizeof(short) << endl;
    cout << "the size of long " << sizeof(long) << endl;
    cout << "the size of long long" << sizeof(long long int) << endl;
    cout << "the size of double " << sizeof(double) << endl;
    cout << "the size of long double " << sizeof(long double) << endl;
    cout << "the size of long long double " << sizeof(long double) << endl;
    cout << "the size of _int64 " << sizeof(u_int64_t) << endl;
    cout << "the size of __int32 " << sizeof(__int32_t) << endl;
    cout << numeric_limits<float>::epsilon() << endl;
    int n = 10;
    cout << n << endl;
    int *p = &n;
    *p = 5;
    cout << n << endl;

    int var1 = 5;
    int *ptr1 = &var1;
    cout << *ptr1 << endl;

    int var2 = 10;
    int &ref2 = var2;
    int *ptr2 = &ref2;
    cout << *ptr2 << endl;
    cout << "sneha" << sizeof(__int32_t) << endl;
}