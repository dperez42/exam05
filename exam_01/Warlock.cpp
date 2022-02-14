#include "Warlock.hpp"


class Atarget;

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() 
{
    std::cout << this->name << ": My job here is done!\n";
    std::map<std::string, ASpell *>::iterator it_begin = this->arr.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->arr.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    this->arr.clear();
}

std::string const &Warlock::getName() const { return (this->name);}
std::string const &Warlock::getTitle() const { return (this->title);}

void Warlock::setTitle(std::string const &title) 
{ this->title = title;}

void Warlock::introduce() const 
{ 
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
    {
        this->arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
        //std::cout << " i learnd " << spell->getName() << std::endl;
    }
}
void Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell *>::iterator it = this->arr.find(spell_name);
	if (it != this->arr.end())
		delete it->second;
	this->arr.erase(spell_name);
    //std::cout << " i forget " << spell_name << std::endl;
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target_ref)
{
    //std::map<std::string, ASpell *>::iterator it = this->arr.find(spell_name);
    
    ASpell* spell = arr[spell_name];

    if (spell)
    {
        std::cout << "Target Practice " << target_ref.getName()<< " has been " << spell->getEffects() << "!\n";
    }
/*
    if (it != this->arr.end())
    {
        
        std::cout << "Target Practice " << target_ref.getName()<< "has been " << << '\n';
    } else {
        std::cout << "Not found\n";
    }
*/
    ;

    //ASpell* spell = arr[spell_name];
	//if (spell)
	//	spell->launch(target_ref);
}
