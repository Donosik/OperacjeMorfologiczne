#ifndef OPERACJEMORFOLOGICZNE_EROSION_H
#define OPERACJEMORFOLOGICZNE_EROSION_H

#include "ImageOperator.h"

/// Klasa wykonująca operację morfologiczną Erozja
class Erosion : public ImageOperator
{
public:
    /// Funkcja obliczająca nowe dane na podstawie tablicy danych
    void Calculate() override;
};


#endif OPERACJEMORFOLOGICZNE_EROSION_H
