#pragma once
#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <vector>
#include "ATarget.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
private:
    std::vector<ATarget*> types;
    TargetGenerator(TargetGenerator const &other);
    TargetGenerator &operator=(TargetGenerator const &other);
public:
    TargetGenerator();
    virtual ~TargetGenerator();
    void learnTargetType(ATarget*type);
    void forgetTargetType(std::string const &typeName);
    ATarget* createTarget(std::string const &typeName);
};

#endif