#include "Oval.h"

Oval::Oval(int sRadius, int bRadius, int posX, int posY, COR cor) : ObjGrafico(OVAL, posX, posY, 0, 0, cor), sRadius(sRadius), bRadius(bRadius) {
	cout << "Oval: constructor" << endl;
}

//toString