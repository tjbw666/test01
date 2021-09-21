#pragma once
#include"Circle.h"
#include<iostream>
#include<cmath>
#include<cstdio>
#include <corecrt_math_defines.h>
using namespace std;

class Cylinder :public Circle {
public:

	Cylinder();
	Cylinder(double r, double h);
	double volume();
	double area();
	double getH();
	void setH(double h);
private:
	double h;
};