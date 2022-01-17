#ifndef OPERACJEMORFOLOGICZNE_TOPHAT_H
#define OPERACJEMORFOLOGICZNE_TOPHAT_H

#include "ImageOperator.h"
#include "Opening.h"

/// Klasa wykonująca operację morfologiczną Top hat
class TopHat : public ImageOperator
{
public:
    /// Funkcja obliczająca nowe dane na podstawie tablicy danych
    void Calculate() override;
};


#endif OPERACJEMORFOLOGICZNE_TOPHAT_H
