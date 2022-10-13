//
// Created by Сергей on 18.09.2022.
//

#ifndef LR01_1_VECTOR_H
#define LR01_1_VECTOR_H
#include <iostream>
#include <cmath>

class Vector {
private:
    int *vec;
    int n;
public:
    Vector();
    int get_N();
    Vector(int a);
    void set_N(int a);
    double length();
    void set_Vector(int a, int i);
    int get_Vector(int i);
    Vector(Vector& v1);
    Vector operator+(Vector& v1);
    Vector operator-(Vector& v1);
    Vector operator*(Vector& v1);
    //Vector operator=(Vector& v1);
    ~Vector();


};


#endif //LR01_1_VECTOR_H
