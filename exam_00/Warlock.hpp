#pragma once

#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock();
        //Warlock(Warlock const &other);
        //Warlock &operator=(Warlock const &other);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        //getters
        std::string const &getName() const;
        std::string const &getTitle() const;
        //functions
        void setTitle(std::string const &title);
        void introduce() const;
};