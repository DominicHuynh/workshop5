// Musician.h
#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument;
    int experience;

public:
    // Default constructor
    Musician();

    // Parameterized constructor
    Musician(std::string instrument, int experience);

    // Getter for instrument
    std::string get_instrument();

    // Getter for experience
    int get_experience();
};

#endif // MUSICIAN_H
