#include"Cylinder.h"
//Ô²ÖùÀà

Cylinder::Cylinder()
{
}

Cylinder::Cylinder(double r, double h) {
    setR(r);
    this->h = h;
}

double Cylinder::volume() {
    return M_PI * getR() * getR() * h;
}

double Cylinder::area() {
    return (2 * M_PI) * (getR() * getR() + this->h * getR());
}

double Cylinder::getH() { //
    return h;
}

void Cylinder::setH(double h) {
    this->h = h;
}
