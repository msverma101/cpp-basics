#include<iostream>


#define SIZE(a) (sizeof(a)/sizeof(a[0]))

int main(){
int vec[5]{1,2,3};  

std::cout<< SIZE(vec);
std::cout<< sizeof(vec[0]);
std::cout<< sizeof(vec);



}