#include "RotateComand.h"

RotateComand::RotateComand()
{
}

RotateComand::~RotateComand()
{
}

void RotateComand::execute()
{
    MyAngle tmp;

    tmp = *obj->getAngle() + *obj->getAngleVelocity();

    obj->setAngle(&tmp);
}

void RotateComand::setRotateObj(IRotetingObject *obj)
{
    this->obj = obj;
}
