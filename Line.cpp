/******************************************************
* #####	Autor: Thiago da Silva Moraes
* #####	matr�cula: 232035137
* #####	Faculdade de Tecnologia
* #####	Universidade de Bras�lia
* #####	Classe Line
******************************************************/
#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2, COR cor) :ObjGrafico(LINE, x1, y1, x2, y2, cor) { cout << "Line: constructor"<<endl; }