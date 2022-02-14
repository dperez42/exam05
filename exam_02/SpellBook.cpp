
#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() 
{
    std::map<std::string, ASpell *>::iterator it_begin = this->arr_spell.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->arr_spell.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    this->arr_spell.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        this->arr_spell.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
        //std::cout << " i learnd " << spell->getName() << std::endl;
    }
}

void SpellBook::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell *>::iterator it = this->arr_spell.find(spell_name);
	if (it != this->arr_spell.end())
		delete it->second;
	this->arr_spell.erase(spell_name);
    //std::cout << " i forget " << spell_name << std::endl;
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
    std::map<std::string, ASpell *>::iterator it = arr_spell.find(spell_name);
    if (it != arr_spell.end())
        return arr_spell[spell_name];
    return NULL;
}