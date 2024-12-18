#include "ObjGrafico.h"


void ObjGrafico::setX1(int x) { this->x1 = x; }
void ObjGrafico::setX2(int x) { this->x2 = x; }
void ObjGrafico::setY2(int x) { this->y2 = x; }
void ObjGrafico::setY1(int x) { this->y1 = x; }
void ObjGrafico::setType(TYPE x) { this->type = x; }

int ObjGrafico::getX1() { return this->x1; }
int ObjGrafico::getX2() { return this->x2; }
int ObjGrafico::getY2() { return this->y2; }
int ObjGrafico::getY1() { return this->y1; }
int ObjGrafico::getType() { return this->type; }

ObjGrafico::ObjGrafico(TYPE type, int x1, int y1, int x2, int y2, COR cor){
	cout << "ObjGrafico: constructor" << endl;
	setX1(x1);
	setX2(x2);
	setY2(y2);
	setY1(y1);
	setType(type);
}

void ObjGrafico::move(int dx, int dy) {
	cout << "ObjGrafico: move" << endl;
	setX1(getX1() + dx);
	setX2(getX2() + dx);
	setY2(getY2() + dy);
	setY1(getY1() + dy);
}

void ObjGrafico::resize(int x2, int y2){
	cout << "ObjGrafico: resize" << endl;
	setX2(x2);
	setY2(y2);
}

string ObjGrafico::toString(){
	cout << "ObjGrafico: roString" << endl;
}