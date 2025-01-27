#ifndef __MySpaceship__
#define __MySpaceship__

#include "../inc/IMovingObject.h"
#include "../inc/IRotatingObject.h"
#include "../inc/MyVector.h"
#include "../inc/MyAngle.h"

class MySpaceship : public IMovingObject, public IRotetingObject
{
private:
    MyVector myLocation;
    MyVector myVelocity;

    MyAngle myAngle;
    MyAngle myAngleVelocity;

public:
    MySpaceship ();
    MySpaceship (MyVector* location, MyVector *velocity);
    MySpaceship (MyAngle* ang, MyAngle* angVelocity);
    ~MySpaceship();

    void setLocation(MyVector* value) override;
    MyVector* getLocation() override;

    void setVelocity(MyVector* value) override;
    MyVector* getVelocity() override;

    void setAngle(MyAngle* value) override;
    MyAngle* getAngle() override;

    void setAngleVelocity(MyAngle* value) override;
    MyAngle* getAngleVelocity() override;
};

#endif
