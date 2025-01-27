#ifndef __MyRotateComand__
#define __MyRotateComand__

#include <stdint.h>
#include "../inc/IRotatingObject.h"
#include "../inc/MyAngle.h"

class RotateComand
{
private:
    IRotetingObject* obj;
public:
    RotateComand();
    ~RotateComand();
    void execute();
    void setRotateObj(IRotetingObject* obj);
};

#endif
