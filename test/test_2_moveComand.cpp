#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyStarWars
#include <boost/test/unit_test.hpp>

#include <stdint-gcc.h>
#include "../inc/MoveComand.h"
#include "../inc/MySpaceship.h"
#include "../inc/MyVector.h"



BOOST_AUTO_TEST_SUITE(test2)

BOOST_AUTO_TEST_CASE(test2)
{
    MyVector loc;

    MyVector vel;

    vel.set_coordinates(0, -7);
    vel.set_coordinates(1, 3);

    MySpaceship* spaceship = new MySpaceship(&loc, &vel);
    MoveComand moveComand;

    moveComand.setMoveObj((IMovingObject*) spaceship);
    


    BOOST_CHECK_THROW(moveComand.execute(), std::invalid_argument);
}

BOOST_AUTO_TEST_SUITE_END()
