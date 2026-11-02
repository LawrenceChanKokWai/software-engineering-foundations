#include <cassert>
#include <iostream>

#include "greeting.h"

int main()
{
    assert(greet("Chan") == "Welcome, Chan. Testing...");

    assert(greet("Alex") == "Welcome, Alex. Testing...");

    std::cout << "2 C++ assertions passed.\n";

    return 0;
}
