#ifndef OPERACJEMORFOLOGICZNE_OPENING_H
#define OPERACJEMORFOLOGICZNE_OPENING_H

#include "ImageOperator.h"
#include "Erosion.h"
#include "Dilatation.h"

/// Klasa wykonująca operację morfologiczną Otwarcie
class Opening : public ImageOperator
{
public:
    /// Funkcja obliczająca nowe dane na podstawie tablicy danych
    void Calculate() override;
};


#endif OPERACJEMORFOLOGICZNE_OPENING_H
