#pragma once
#include <iostream>

using namespace std;
enum COR {
	PRETO,
	BRANCO,
	VERMELHO,
	AZUL,
	VERDE
};
enum TYPE {
	LINE,
	SQUARE,
	RECTANGLE,
	CIRCLE,
	OVAL
};

class ObjGrafico
{
public:
	ObjGrafico();

	void move(int dx, int dy);
	void resize(int x2, int y2);
	virtual string toString() = 0;
};

