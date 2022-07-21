#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock
{
private:
    std::string name;
    std::string title;
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

};


#endif