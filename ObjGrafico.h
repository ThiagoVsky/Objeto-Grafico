#pragma once
#include <iostream>
#include <sstream>

using namespace std;
enum COR {
	PRETO = 0,
	BRANCO,
	VERMELHO,
	AZUL,
	VERDE
};

enum TYPE {
	LINE = 0,
	SQUARE,
	RECTANGLE,
	CIRCLE,
	OVAL
};

class ObjGrafico
{
	int x1, x2, y1, y2;
	TYPE type;
	COR cor;
protected:
	void setX1(int x),
		setX2(int x),
		setY1(int x),
		setY2(int x),
		setType(TYPE type),
		setColor(COR cor);

	int getX1(),
		getX2(),
		getY1(),
		getY2();
	string getType();
	string getColor();
public:
	ObjGrafico(TYPE type, int x1, int y1, int x2, int y2, COR cor);
	void move(int dx, int dy);
	void resize(int x2, int y2);
	virtual string toString();
};

