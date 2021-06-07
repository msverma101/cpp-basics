#include<iostream>
#include<boost/math/constants/constants.hpp>
#include<boost/multiprecision/cpp_dec_float.hpp>
using d = boost::multiprecision::cpp_dec_float_50;

template <class T>
T area_of_a_circle(T r) {
  using boost::math::constants::pi;
  return pi<T>() * r * r;
}

int main(){
   d const r = d{123} / 100;
d const a = area_of_a_circle(r);
  // 4.7529155256159981904701331745635599135018975843146
  std::cout
    << std::setprecision(std::numeric_limits<double>::digits10+2)<< a<< std::endl;
    std::cout<< a;
    stuff(3,4.0);
}


double stuff(int x, double y){
    return x;
}