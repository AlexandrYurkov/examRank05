#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):
    name(name), title(title){
        std::cout << this->name << ": This looks like another boring day.\n";
    }
Warlock::~Warlock(){
     std::cout << this->name << ": My job here is done!\n";
}

std::string const Warlock::getName() const{
    return this->name;
}

std::string const Warlock::getTitle() const{
    return this->title;
}

void Warlock::setTitle(std::string const &title){
    this->title = title;
}

void Warlock::introduce() const{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *spell){
    this->spellBook.learnSpell(spell);  
}
void Warlock::forgetSpell(std::string const &spaellName) {
    this->spellBook.forgetSpell(spaellName);    
}
void Warlock::launchSpell(std::string const &spaellName, ATarget const &target){
    ASpell *spell = this->spellBook.createSpell(spaellName);
    if(spell)
        spell->launch(target);    
}