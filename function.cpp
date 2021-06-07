 #include<iostream>

int print(int const n){
    switch (n){
        case 1: return 1;
        case 2 : return 2;
        default : return 0;
    }
}

int f (int& n2){
     n2 = 4;
    return n2;
 }


 int main()
 {
    //  int x = print(0);
    //  std::cout<<x<<std::endl;
    // call by reference
    // int m = 5;
    // int& n = m;
    // n = 10;
    // std::cout<< m<<std::endl;
    int n2 = 3;
    int f1 = f(n2);
    std::cout<<f1<<std::endl;

 }

 