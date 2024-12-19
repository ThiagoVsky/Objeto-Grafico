#include "Oval.h"

Oval::Oval(int sRadius, int bRadius, int posX, int posY, COR cor) : ObjGrafico(OVAL, posX, posY, 0, 0, cor), sRadius(sRadius), bRadius(bRadius) {
	cout << "Oval: constructor" << endl;
}

void Oval::resize(int sRadius, int bRadius) {
	this->sRadius = sRadius;
	this->bRadius = bRadius;
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
		<< "Bigger radius: "
		<< bRadius
		<< "Smaller radius: "
		<< sRadius;
}