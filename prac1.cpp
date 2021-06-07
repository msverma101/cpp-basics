#include <iostream>
#include <limits>
#include <cmath>
using namespace std;
int main()
{
    double x = {9.84666565986420315613541145154154541};
    double a = sqrt(x);
    double y = a * a;
    double min = numeric_limits<double>::min();
    double eps = numeric_limits<double>::epsilon();
    cout << "min          " << min << endl;
    cout << "eps          " << eps << endl;
    cout << "difference   " << std::abs(x - y) << endl;
    cout << "machine num " << eps * std::abs(x + y) << endl;
    bool b = std::abs(x - y) <= eps * std::abs(x + y) || std::abs(x - y) < min;
    cout << b << endl;
}