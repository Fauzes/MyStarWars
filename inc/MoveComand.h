#ifndef __MyMoveComand__
#define __MyMoveComand__

#include <stdint.h>
#include "../inc/IMovingObject.h"
#include "../inc/MyVector.h"

class MoveComand
{
private:
    IMovingObject* obj;
public:
    MoveComand();
    ~MoveComand();
    void execute();
    void setMoveObj(IMovingObject* obj);
};

#endif
