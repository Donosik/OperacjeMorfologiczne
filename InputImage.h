#ifndef OPERACJEMORFOLOGICZNE_INPUTIMAGE_H
#define OPERACJEMORFOLOGICZNE_INPUTIMAGE_H

#include <fstream>
#include <vector>
#include <sstream>

/// Klasa odpowiadająca za wczytanie danych z podanego pliku
class InputImage
{
    /// Nazwa pliku,z którego mają być wczytywane dane
    std::string fileName;
    /// Zmienna strumienia plików
    std::ifstream file;
public:
    /// Konstruktor klasy
    InputImage();
    /// Funkcja ustawiająca nazwę pliku z podanego argumentu
    /// \param name Nazwa pliku do wczytania
    void SetFile(std::string name);
    /// Funkcja wczytująca dane z pliku i zwracająca je jako dane
    /// \return Zwraca 2-wymiarową tablice danych
    std::vector<std::vector<int>> LoadFromFile();
};


#endif OPERACJEMORFOLOGICZNE_INPUTIMAGE_H
