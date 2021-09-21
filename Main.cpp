#include"Cylinder.h"


int main() {
	Cylinder c;
	c.setH(1);
	c.setR(1);
	cout << "圆柱的表面积为：" << c.Perimeter() << endl;
	cout << "圆柱的体积为：" << c.area() << endl;

}