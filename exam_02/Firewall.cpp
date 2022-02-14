

#include "Firewall.hpp"

Firewall::Firewall()
{
    this->name ="Firewall";
    this->effects ="burnt to a crisp"; 
    return;
}

Firewall::~Firewall() {}

ASpell *Firewall::clone() const
{
    return (new Firewall());
}
