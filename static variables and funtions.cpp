#include<iostream>
double f (double const x, long& cnt){
    static long counter = 0;
    cnt = ++counter;
    return 2.0*x*x -x;

}

int main()
{
    long cnt = 0;
    for(double x = -10;x<=10.0; x+=0.1)
        f(x,cnt);
    std::cout<<cnt<< std::endl;
}