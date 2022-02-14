#pragma once
#include "ASpell.hpp"

class Firewall: public ASpell
{
    public:
        Firewall();
        ~Firewall();

    virtual ASpell *clone() const;
};