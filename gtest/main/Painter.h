#pragma once

#include "ITurtle.h"

class Painter {

    public:
        Painter(ITurtle* turtle) 
        : turtle_(turtle) {
        }
        
        bool DrawCircle(int x, int y, int radius) {
            turtle_->PenDown(); 
            return true;
        }

    private:
        ITurtle* turtle_;
};
