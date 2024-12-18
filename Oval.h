#pragma once
#include "ObjGrafico.h"

class Oval :
    public ObjGrafico
{
private:
    int sRadius;
protected:
    int bRadius;
public:
    Oval(int sRadius, int bRadius, int posX, int posY, COR cor);

    void resize(int sRadius, int bRadius);
};

