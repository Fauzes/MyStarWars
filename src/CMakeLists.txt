project(MyStarWars)

set( MyStarWars_source MoveComand.cpp
                        MyVector.cpp
                        MySpaceship.cpp
                        IMovingObject.cpp
                        MyAngle.cpp
                        IRotatingObject.cpp
                        RotateComand.cpp)

add_library( MyStarWars STATIC ${MyStarWars_source}
    ../inc/IMovingObject.h ../inc/MoveComand.h ../inc/MySpaceship.h ../inc/MyVector.h  ../inc/MyAngle.h ../inc/IRotatingObject.h ../inc/RotateComand.h)

