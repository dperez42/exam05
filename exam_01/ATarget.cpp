#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &name)
{
    this->name = name;
}

ATarget::~ATarget() {}

std::string const &ATarget::getName() const 
    { 
        return (this->name);
    }

