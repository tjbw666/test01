#pragma once
#include<iostream>
#include<cmath>
#include<cstdio>
#include <corecrt_math_defines.h>
using namespace std;

//‘≤¿‡
class Circle {
public:
	Circle();
	Circle(double r);
	double Perimeter();
	double area();
	double getR();
	void setR(double r);
private:
	double r;
};