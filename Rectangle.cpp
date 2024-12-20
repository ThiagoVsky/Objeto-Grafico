#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2, COR cor) : ObjGrafico(RECTANGLE, x1, y1, x2, y2, cor){
	cout << "Rectangle: constructor" << endl;
}

string Rectangle::toString() { return ObjGrafico::toString(); }
