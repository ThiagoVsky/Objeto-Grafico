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
	int x1, x2, y1, y2;
	TYPE type;
protected:
	void setX1(int x),
		setX2(int x),
		setY1(int x),
		setY2(int x),
		setType(TYPE type);

	int getX1(),
		getX2(),
		getY1(),
		getY2(),
		getType();
public:
	ObjGrafico(TYPE type, int x1, int y1, int x2, int y2, COR cor);

	void move(int dx, int dy);
	void resize(int x2, int y2);
	virtual string toString() = 0;
};

