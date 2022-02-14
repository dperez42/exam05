#pragma once
#include <iostream>

class ATarget
{
    protected:
        std::string name;

    public:
        ATarget();
        ATarget(std::string const &name);
        virtual ~ATarget();

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ATarget *clone() const = 0;
};