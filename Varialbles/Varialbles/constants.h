#ifndef CONSTANTS_H
#define CONSTANTS_H

// define your own namespace to hold constants
namespace constants
{
    // constants have internal linkage by default
    constexpr int ten{10};
    constexpr double pi{ 3.14159 };
    constexpr double avogadro{ 6.0221413e23 };
    constexpr double my_gravity{ 9.2 }; // m/s^2 -- gravity is light on this planet
    // ... other related constants
}
#endif