#include <iostream>
#include "Vector.h"

int main() {

    int a;
    Vector v1;
    Vector v2(6);
    for (int i = 0; i < v1.get_N(); i++)
    {
        std::cin>>a;
        v1.set_Vector(a, i);
    }
    for (int i = 0; i < v2.get_N(); i++)
    {
        std::cin>>a;
        v2.set_Vector(a, i);
    }
    Vector v3(10);
    v3 = v1 + v2;
    for(int i = 0; i < v3.get_N(); i++)
        std::cout<<v3.get_Vector(i)<<" ";
    std::cout<<std::endl;
    std::cout<<v3.get_N();
    double b = v3.length();
    std::cout<<b<<" ";
    std::cout<<std::endl;
    std::cout<<"Sha kak umnozhu";
    v3 = v1 * v2;
    std::cout<<"Ya umnozhil";
    std::cout<<v3.get_Vector(0)<<" ";
    std::cout<<std::endl;
    v3 = v1 - v2;
    for(int i = 0; i < v3.get_N(); i++)
        std::cout<<v3.get_Vector(i)<<" ";
    std::cout<<std::endl;
    return 0;
}
