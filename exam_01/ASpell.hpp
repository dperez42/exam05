#pragma once
#include <iostream>

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ASpell *clone() const = 0;
};