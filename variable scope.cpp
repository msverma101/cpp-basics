#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << n << endl;

    {
        int n1 = 10;
        cout << n1 << endl;
        n1 = 15;
        cout << n1 << endl;
    }
    cout << n << endl;
    n = 35;
    cout << n << endl;

    {
        int n = 15;
        cout << n << endl;
    }
    cout << n << endl;

    {
        cout << n << endl;
    }
    cout << n << endl;
}