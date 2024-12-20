#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include "ObjGrafico.h"
#include "Rectangle.h"
#include "Square.h"
#include "Oval.h"
#include "Circle.h"
#include "Line.h"

using namespace std;
class Paint
{
	string label;
	vector<ObjGrafico*> objGraficos;
	//sequenciador to-do -- descobrir o que é e como fazer
	// vou tratar sequencial como ID nos outros métodos
	// já que se trata de um int - provavelmente identifica quem é quem

public:
	Paint();

	void addObjGrafico(TYPE type, int x1, int y1, int x2, int y2, COR cor = PRETO); // Rectangle and Line
	void addSquare(int posx, int posy, int base, COR cor = PRETO); // Square
	void addOval(int posx, int posy, int sRadius, int bRadius, COR cor = PRETO); // Oval
	void addCircle(int posx, int posy, int Radius, COR cor = PRETO); // Circle
	void remove(int id); 
	void remove();
	void move(int id, int dx, int dy);
	void resize(int id, int x2, int y2);
	string draw();
	void read(string label); // string label é o nome do arquivo a ser lido ou gravado
	void write(string label);

};


