#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>
using namespace std;
class Complex
{
private:
public:
    Complex(double aRe=0, double aIm=0);
    Complex(const Complex& other);
    ~Complex();
    void Set(double aRe, double aIm=0);
    operator double();
    double abs();
    friend istream& operator>>(istream& in, Complex& c);
    friend ostream& operator<<(ostream& out, Complex& c);
    Complex operator+(const Complex& other);
    Complex operator-(const Complex& other);
    Complex operator+(const double& value);
    friend Complex operator+(const double& value, const Complex& complex);
    Complex operator-(const double& value);
    friend Complex operator-(const double& value, const Complex& complex);
    Complex operator*(const Complex& other);
    Complex operator*(const double& value);
    friend Complex operator*(const double& value, const Complex& complex);
    Complex operator/(const double& value);
    Complex& operator=(const Complex& other);
    Complex& operator=(const double& value);

    // Операторы для присваивания с операциями

    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator+=(const double& value);
    Complex& operator-=(const double& value);
    Complex& operator*=(const double& value);
    Complex& operator/=(const double& value);
};

#endif
