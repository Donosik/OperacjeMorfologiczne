#ifndef OPERACJEMORFOLOGICZNE_IMAGEPROCESSER_H
#define OPERACJEMORFOLOGICZNE_IMAGEPROCESSER_H

#include <iostream>
#include <vector>
#include <memory>
#include "ImageOperator.h"
#include "BottomHat.h"
#include "Closure.h"
#include "Dilatation.h"
#include "Erosion.h"
#include "Opening.h"
#include "TopHat.h"

/// Klasa zarządzająca wszystkimi możliwymi operacjami morfologicznymi
class ImageProcesser
{
    /// 2-wymiarowa tablica dynamiczna danych
    std::vector<std::vector<int>> array;
    /// Dynamiczna tablica string, która ma w sobie nazwy wszystkich możliwych operacji morfologicznych
    std::string *listOfOperators;
    /// Liczba wszystkich dostępnych operacji morfologicznych
    int numberOfOperators;
public:
    /// Konstruktor klasy
    /// \param arr Referencja do 2-wymiarowej tablicy dynamicznej danych
    ImageProcesser(std::vector<std::vector<int>> &arr);

    /// Funkcja zwracająca tablicę danych
    /// \return Zwraca 2-wymiarową tablicę danych
    std::vector<std::vector<int>> GetArray();

    /// Funkcja do wyboru jaką operację aktualnie chce użytkownik przeprowadzić na tablicy danych
    void Operate();
};


#endif OPERACJEMORFOLOGICZNE_IMAGEPROCESSER_H
