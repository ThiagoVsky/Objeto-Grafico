#include "Circle.h"

Circle::Circle(int posX, int posY, int radius, COR cor) : Oval(0, radius, posX, posY, cor) {
	cout << "Circle: constructor" << endl;
	setType(CIRCLE);
}

void Circle::resize(int radius) { this->bRadius = radius; }

//toString