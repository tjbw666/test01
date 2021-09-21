#include"Circle.h"

Circle::Circle()
{
}

Circle::Circle(double r) {
    this->r = r;
}

//获取圆周长
double Circle::Perimeter() {

    return 2 * M_PI * r;
}

//获取圆面积
double Circle::area() {
    return M_PI * r * r;
}

double Circle::getR() { //获取半径
    return r;
}

void Circle::setR(double r) { //设置半径
    this->r = r;
}