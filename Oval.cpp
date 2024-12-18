#include "Oval.h"

Oval::Oval(int sRadius, int bRadius, int posX, int posY, COR cor) : ObjGrafico(OVAL, posX, posY, 0, 0, cor), sRadius(sRadius), bRadius(bRadius) {
	cout << "Oval: constructor" << endl;
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
//toString