#pragma once
#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effects;
    ASpell();
    ASpell(ASpell const &other);
    ASpell &operator=(ASpell const &other);
public:
    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell();
    std::string const getName() const;
    std::string const getEffects() const;
    virtual ASpell* clone() const = 0;
    void launch(ATarget const &target) const;
};

#include "ATarget.hpp"
#endif