// #include "../inc/MoveComand.h"

#include "../inc/MySpaceship.h"
#include "../inc/MyVector.h"
#include "../inc/MoveComand.h"

MoveComand::MoveComand()
{
}

MoveComand::~MoveComand()
{
}

void MoveComand::execute()
{
    MyVector tmp;

    tmp = *obj->getLocation() + obj->getVelocity();

    obj->setLocation(&tmp);
}

void MoveComand::setMoveObj(IMovingObject* obj)
{
    this->obj = obj;
}
