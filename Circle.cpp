#include"Circle.h"

Circle::Circle()
{
}

Circle::Circle(double r) {
    this->r = r;
}

//��ȡԲ�ܳ�
double Circle::Perimeter() {

    return 2 * M_PI * r;
}

//��ȡԲ���
double Circle::area() {
    return M_PI * r * r;
}

double Circle::getR() { //��ȡ�뾶
    return r;
}

void Circle::setR(double r) { //���ð뾶
    this->r = r;
}