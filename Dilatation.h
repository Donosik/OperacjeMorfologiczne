#ifndef OPERACJEMORFOLOGICZNE_DILATATION_H
#define OPERACJEMORFOLOGICZNE_DILATATION_H

#include "ImageOperator.h"

/// Klasa wykonująca operację morfologiczną Dylatacja
class Dilatation : public ImageOperator
{
public:
    /// Funkcja obliczająca nowe dane na podstawie tablicy danych
    void Calculate() override;
};


#endif OPERACJEMORFOLOGICZNE_DILATATION_H
