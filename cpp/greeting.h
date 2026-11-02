#ifndef GREETING_HPP
#define GREETING_HPP

#include <string>

inline std::string greet(const std::string& name)
{
    return "Welcome, " + name + ". Testing...";
}

#endif
