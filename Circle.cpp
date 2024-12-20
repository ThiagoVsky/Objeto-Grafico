/******************************************************
* #####	Autor: Thiago da Silva Moraes
* #####	matr�cula: 232035137
* #####	Faculdade de Tecnologia
* #####	Universidade de Bras�lia
* #####	Classe Circle
******************************************************/
#include "Circle.h"

Circle::Circle(int posX, int posY, int radius, COR cor) : Oval(radius, radius, posX, posY, cor) {
	cout << "Circle: constructor" << endl;
	setType(CIRCLE);
}

void Circle::resize(int radius) { this->bRadius = radius; }

string Circle::toString() {
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
		<< " | Radius: "
		<< bRadius;
	return ss.str();
}