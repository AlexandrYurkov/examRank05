#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):
    name(name), title(title){
        std::cout << this->name << ": This looks like another boring day.\n";
    }
Warlock::~Warlock(){
     std::cout << this->name << ": My job here is done!\n";
     std::vector<ASpell*>::iterator ite = this->spells.end();
     for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
        delete *it;
    this->spells.clear();
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
    if(spell){
        std::vector<ASpell*>::iterator ite = this->spells.end();
        for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it){
            if((*it)->getName() == spell->getName()){
                return ;
            }
        }
        this->spells.push_back(spell->clone());
    }
}
void Warlock::forgetSpell(std::string const &spaellName) {
    std::vector<ASpell*>::iterator ite = this->spells.end();
        for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it){
            if((*it)->getName() == spaellName){
                delete *it;
                this->spells.erase(it);
            }
        }
}
void Warlock::launchSpell(std::string const &spaellName, ATarget const &target){
    std::vector<ASpell*>::iterator ite = this->spells.end();
        for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it){
            if((*it)->getName() == spaellName){
                (*it)->launch(target);
                return ;
            }
        }
}