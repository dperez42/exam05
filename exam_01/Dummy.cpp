
#include "Dummy.hpp"

Dummy::Dummy()
{
    this->name ="Dummy";
    return;
}

Dummy::~Dummy() {}

ATarget *Dummy::clone() const
{
    return (new Dummy());
}
