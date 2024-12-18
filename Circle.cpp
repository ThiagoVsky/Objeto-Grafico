#include "Circle.h"

Circle::Circle(int posX, int posY, int radius, COR cor) : Oval(0, radius, posX, posY, cor) {
	cout << "Circle: constructor" << endl;
	setType(CIRCLE);
}

void Circle::resize(int radius) { this->bRadius = radius; }

string Circle::toString() {

}
string ObjGrafico::toString() {
	cout << "ObjGrafico: toString" << endl;
	stringstream ss;
	ss
		<< "Type: "
		<< getType()
		<< "Color: "
		<< getColor()
		<< "X1: "
		<< getX1()
		<< "Y1: "
		<< getY1()
		<< "X2: "
		<< getX2()
		<< "Y2: "
		<< getY2();
}