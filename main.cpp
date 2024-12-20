/******************************************************
* #####	Autor: Thiago da Silva Moraes
* #####	matrícula: 232035137
* #####	Faculdade de Tecnologia
* #####	Universidade de Brasília
* #####	Classe main
******************************************************/

#include <iostream>
#include "Paint.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "");

	Paint paint = Paint();

	paint.addObjGrafico(RECTANGLE, 1, 2, 8, 15); // cria um retangulo
	paint.addObjGrafico(LINE, 3, 2, 5, 7, VERDE); // cria uma linha
	paint.addObjGrafico(RECTANGLE, 3, 5, 8, 10, AZUL); // cria um quadrado
	paint.addCircle(5, 8, 4); // cria um cículo
	paint.addOval(9, 9, 5, 5); // cria um circulo
	paint.addOval(16, 12, 5, 13); // cria um oval
	paint.addSquare(0, 0, 2); // cria um quadrado

	paint.draw();

}