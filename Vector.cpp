//
// Created by Сергей on 18.09.2022.
//

#include "Vector.h"

Vector::Vector() {
    std::cout<<"Enter size of vector"<<std::endl;
    std::cin>>n;
    vec = new int[n];
    for (int i = 0; i < n; i++) vec[i] = 0;
}

Vector::Vector(int a) {
    n = a;
    vec = new int[n];
    for (int i = 0; i < n; i++) vec[i] = 0;
}
double Vector::length()
{
    std::cout<<"Ya voshel";
    double a = 0;
    for (int i = 0; i < n; i++)
    {
        a += pow(vec[i], 2);
    }
    std::cout<<"Ya poschital";
    a = sqrt(a);
    std::cout<<"Pochti konec...";
    return a;
}
void Vector::set_Vector(int a, int i)
{
    vec[i] = a;
}
int Vector::get_N()
{
    return n;
}
int Vector::get_Vector(int i)
{
    return vec[i];
}
Vector::Vector(Vector& v1)
{
    std::cout<<"Ya voshel";
    n = v1.n;
    vec = new int(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = v1.vec[i];
    }
    std::cout<<"Ya slomalsya";
}
/*Vector Vector::operator=(Vector& v1)
{
    if (this->n < v1.n)
    for (int i = 0; i < n; i++)
    {
        this->vec[i] = v1.vec[i];
    }
    else
    {
        for (int i = 0; i < v1.n; i++)
        {
            this->vec[i] = v1.vec[i];
        }
    }
    return *this;
}*/
Vector Vector::operator+(Vector& v1)
{
    if (this->n < v1.n) {
        Vector sum(v1.n);
        for (int i = 0; i < v1.n; i++) {
            if (i < this->n)
                sum.set_Vector(this->vec[i] + v1.vec[i], i);
            else
                sum.set_Vector(v1.vec[i], i);
        }
        return sum;
    }
    if (this->n > v1.n) {
        Vector sum(this->n);
        for (int i = 0; i < this->n; i++) {
            if (i < v1.n)
                sum.set_Vector(this->vec[i] + v1.vec[i], i);
            else
                sum.set_Vector(this->vec[i], i);
        }
        return sum;
    }
    if (this->n == v1.n) {
        Vector sum(v1.n);
        for (int i = 0; i < v1.n; i++) {
            sum.set_Vector(this->vec[i] + v1.vec[i], i);
        }
        return sum;
    }
}
Vector Vector::operator-(Vector& v1)
{
    std::cout<<"Ya voshel";
    if (this->n < v1.n) {
        Vector sum(v1.n);
        for (int i = 0; i < v1.n; i++) {
            if (i < this->n)
                sum.set_Vector(this->vec[i] - v1.vec[i], i);
            else
                sum.set_Vector(-v1.vec[i], i);
        }
        return sum;
    }
    if (this->n > v1.n) {
        Vector sum(this->n);
        for (int i = 0; i < this->n; i++) {
            if (i < v1.n)
                sum.set_Vector(this->vec[i] - v1.vec[i], i);
            else
                sum.set_Vector(this->vec[i], i);
        }
        return sum;
    }
    if (this->n == v1.n) {
        Vector sum(v1.n);
        for (int i = 0; i < v1.n; i++) {
            sum.set_Vector(this->vec[i] - v1.vec[i], i);
        }
        return sum;
    }
}
/*Vector Vector::operator=(Vector v1)
{
    for (int i = 0; i < n; i++)
    {
        this->vec[i] = v1.vec[i];
    }
    return {n};
}*/
Vector Vector::operator*(Vector& v1)
{
    std::cout<<"Ya voshel";
    Vector multi(1);
    if (this->n < v1.n) {
        Vector sum(this->n);
        for (int i = 0; i < this->n; i++) {
            sum.set_Vector(this->vec[i]*v1.vec[i], i);
            multi.vec[0] += sum.vec[i];
        }
    } if (this->n == v1.n) {
        Vector sum(v1.n);
        for (int i = 0; i < v1.n; i++) {
            sum.set_Vector(this->vec[i]*v1.vec[i], i);
            multi.vec[0] += sum.vec[i];
        }
    }
    if (this->n > v1.n) {
        std::cout<<"Ya voshel";
        Vector sum(this->n);
        for (int i = 0; i < v1.n; i++) {
            sum.set_Vector(this->vec[i]*v1.vec[i], i);
            multi.vec[0] += sum.vec[i];
        }
    }
    return multi;
}
void Vector::set_N(int a)
{
    n = a;
}
Vector::~Vector() = default;