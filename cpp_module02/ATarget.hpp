#pragma once
#ifndef ATARGET_HPP
# define ATARGET_HPP
#include <iostream>
#include <string>

class ASpell;

class ATarget
{
private:
    std::string type;
    ATarget();
    ATarget(ATarget const &other);
    ATarget &operator=(ATarget const &other);
public:
    ATarget(std::string const &type);
    virtual ~ATarget();
    std::string const getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(ASpell const &spell) const;
};





#include"ASpell.hpp"

#endif