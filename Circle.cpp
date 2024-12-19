#include "Circle.h"

Circle::Circle(int posX, int posY, int radius, COR cor) : Oval(radius, radius, posX, posY, cor) {
	cout << "Circle: constructor" << endl;
	setType(CIRCLE);
}

void Circle::resize(int radius) { this->bRadius = radius; }

string Circle::toString() {

}
string Oval::toString() {
	cout << "ObjGrafico: toString" << endl;
	stringstream ss;
	ss
		<< "Type: "
		<< getType()
		<< "Color: "
		<< getColor()
		<< "Position (X, Y): "
		<< getX1()
		<< ", "
		<< getY1()
		<< "Radius: "
		<< bRadius;
}