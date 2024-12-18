#pragma once
#include "Oval.h"

class Circle :
    public Oval
{
public:
    Circle(int posX, int posY, int radius, COR cor);
    
    void resize(int radius);
    string toString();
};

