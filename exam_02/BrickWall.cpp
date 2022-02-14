
#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    this->name ="Inconspicuous Red-brick Wall";
    return;
}

BrickWall::~BrickWall() {}

ATarget *BrickWall::clone() const
{
    return (new BrickWall());
}
