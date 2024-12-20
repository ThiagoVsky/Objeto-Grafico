#include "Square.h"

Square::Square(int x, int y, int base, COR cor) : Rectangle(x, y, (x + base), (y + base), cor) {
	cout << "Square: constructor" << endl;
	setType(SQUARE);
	this->base = base;
}
void Square::resize(int base) {
	cout << "Square: resize" << endl;
	this->base = base;
	Rectangle::resize(getX1() + base, getY1() + base);
}
int Square::getBase() { return this->base; }

string Square::toString() {
	cout << "ObjGrafico: toString" << endl;
	stringstream ss;
	ss
		<< "Type: "
		<< getType()
		<< " | Color: "
		<< getColor()
		<< " | Position (X, Y): "
		<< getX1()
		<< ", "
		<< getY1()
		<< " | Base: "
		<< getBase();
	return ss.str();
}