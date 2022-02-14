
#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    this->name ="Fwoosh";
    this->effects ="fwooshed"; 
    return;
}

Fwoosh::~Fwoosh() {}

ASpell *Fwoosh::clone() const
{
    return (new Fwoosh());
}
