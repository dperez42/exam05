#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        std::map<std::string, ASpell *> arr_spell;

    public:
        SpellBook();
        ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(std::string spell_name);
    ASpell* createSpell(std::string const &spell_name);
};

