#ifndef OPERACJEMORFOLOGICZNE_BOTTOMHAT_H
#define OPERACJEMORFOLOGICZNE_BOTTOMHAT_H

#include "ImageOperator.h"
#include "Closure.h"

/// Klasa wykonująca operację morfologiczną Bottom hat
class BottomHat : public ImageOperator
{
public:
    /// Funkcja obliczająca nowe dane na podstawie tablicy danych
    void Calculate() override;
};


#endif OPERACJEMORFOLOGICZNE_BOTTOMHAT_H
