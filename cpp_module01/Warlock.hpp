#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
    std::string name;
    std::string title;
    std::vector<ASpell*> spells;
    Warlock();
    Warlock(Warlock  const &other);
    Warlock &operator=(Warlock  const &other);
public:
    Warlock(std::string const &name, std::string const &title);
    virtual ~Warlock();
    std::string const getName() const;
    std::string const getTitle() const;

    void setTitle(std::string const &Title);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &spaellName);
    void launchSpell(std::string const &spaellName, ATarget const &target);
};


#endif