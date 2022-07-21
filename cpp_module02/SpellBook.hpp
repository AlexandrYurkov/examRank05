#pragma once
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
private:
    std::vector<ASpell*> spells;
    SpellBook(SpellBook const &other);
    SpellBook &operator=(SpellBook const &other);
public:
    SpellBook();
    virtual ~SpellBook();
    void learnSpell(ASpell*spell);
    void forgetSpell(std::string const &spellName);
    ASpell* createSpell(std::string const &spellName);
};

#endif