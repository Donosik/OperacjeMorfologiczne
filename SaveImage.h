#ifndef OPERACJEMORFOLOGICZNE_SAVEIMAGE_H
#define OPERACJEMORFOLOGICZNE_SAVEIMAGE_H

#include <fstream>
#include <vector>

/// Klasa odpowiadająca za zapisanie danych do podanego pliku
class SaveImage
{
    /// Nazwa pliku, do którego mają być zapisane dane
    std::string fileName;
    /// Zmienna strumienia plików
    std::ofstream file;
public:
    /// Konstruktor klasy
    SaveImage();

    /// Funkcja ustawiająca nazwę pliku z podanego argumentu
    /// \param name Nazwa pliku do zapisu
    void SetFile(std::string name);

    /// Funkcja zapisująca dane do pliku
    /// \param array 2-wymiarowa dynamiczna tablica danych do zapisania
    void SaveToFile(std::vector<std::vector<int>> array);
};


#endif OPERACJEMORFOLOGICZNE_SAVEIMAGE_H
