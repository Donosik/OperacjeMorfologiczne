#ifndef OPERACJEMORFOLOGICZNE_CLOSURE_H
#define OPERACJEMORFOLOGICZNE_CLOSURE_H

#include "ImageOperator.h"
#include "Erosion.h"
#include "Dilatation.h"

/// Klasa wykonująca operację morfologiczną Domknięcie
class Closure : public ImageOperator
{
public:
    /// Funkcja obliczająca nowe dane na podstawie tablicy danych
    void Calculate() override;
};


#endif OPERACJEMORFOLOGICZNE_CLOSURE_H
