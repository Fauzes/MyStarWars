#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyStarWars
#include <boost/test/unit_test.hpp>

#include <stdint-gcc.h>
#include "../inc/RotateComand.h"
#include "../inc/MySpaceship.h"
#include "../inc/MyAngle.h"



BOOST_AUTO_TEST_SUITE(test4)

BOOST_AUTO_TEST_CASE(test4)
{
    MyAngle ang;

    ang.setAngle(55);

    MyAngle angVel;

    angVel.setAngle(360);

    MySpaceship* spaceship = new MySpaceship(&ang, &angVel);
    RotateComand rotateComad;

    rotateComad.setRotateObj((IRotetingObject*) spaceship);
    
    rotateComad.execute();


    BOOST_CHECK_EQUAL(spaceship->getAngle()->getAngle(), 55);
}

BOOST_AUTO_TEST_SUITE_END()
