#pragma once
#include <iostream>
#include <vector>
#include "ObjGrafico.h"

using namespace std;
class Paint
{
	string label;
	vector<ObjGrafico*> objGraficos;
	//sequenciador to-do -- descobrir o que � e como fazer
	// vou tratar sequencial como ID nos outros m�todos
	// j� que se trata de um int - provavelmente identifica quem � quem

public:
	Paint();

	void addObjGrafico(int type, int x1, int y1, int x2, int y2, COR cor = BRANCO);
	void remove(int id); 
	void remove();
	void move(int id, int dx, int dy);
	void resize(int id, int x2, int y2);
	void draw();
	void read(string label); // string label � o nome do arquivo a ser lido ou gravado
	void write(string label);

};

