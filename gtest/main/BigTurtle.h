#pragma once

#include "ITurtle.h"

class BigTurtle : public ITurtle {
    public:
    virtual ~BigTurtle() {}
    virtual void PenUp() {}
    virtual void PenDown() {}
    virtual void Forward(int distance) {}
    virtual void Turn(int degrees) {}
    virtual void GoTo(int x, int y) {}
    virtual int GetX() const { return 0; }
    virtual int GetY() const { return 0; }
};
