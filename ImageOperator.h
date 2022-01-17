#ifndef OPERACJEMORFOLOGICZNE_IMAGEOPERATOR_H
#define OPERACJEMORFOLOGICZNE_IMAGEOPERATOR_H

#include <vector>
#include <memory>

/// Klasa abstrakcyjna, z której dziedziczą wszystkie klasy wykonujące poszczególne operacje morfologiczne
class ImageOperator
{
protected:
    /// Wektor jako dynamiczna tablica 2-wymiarowa przechowująca dane
    std::vector<std::vector<int>> array;
public:
    /// Funkcja ustawiająca jako tablice danych nową tablice z argumentu
    /// \param arr Nowa tablica przekazana jako referencja do nadpisania
    void SetArray(std::vector<std::vector<int>> &arr);

    /// Czysto wirtualna metoda, w której są przeliczane obliczenia poszczególnej operacji morfologicznej
    virtual void Calculate() = 0;

    /// Funkcja zwracająca tablicę danych
    /// \return Zwraca 2-wymiarową tablicę danych
    std::vector<std::vector<int>> GetArray();
};


#endif OPERACJEMORFOLOGICZNE_IMAGEOPERATOR_H
