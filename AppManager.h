#ifndef OPERACJEMORFOLOGICZNE_APPMANAGER_H
#define OPERACJEMORFOLOGICZNE_APPMANAGER_H

#include <iostream>
#include <vector>
#include "InputImage.h"
#include "SaveImage.h"
#include "ImageProcesser.h"

/// Klasa główna zarządzająca całym projektem
class AppManager
{
    /// Zmienna przechowująca nazwę pliku do wczytania danych
    std::string fileToInput;
    /// Zmienna przechowująca nazwę pliku do zapisania danych
    std::string fileToSave;
    /// Obiekt klasy wczytującej dane z pliku
    InputImage inputImage;
    /// Obiekt klasy zapisującej dane do pliku
    SaveImage saveImage;
    /// Wektor jako dynamiczna tablica 2-wymiarowa przechowująca dane
    std::vector<std::vector<int>> array;
public:
    /// Konstruktor klasy przyjmujący jako argumenty główne argumenty z funkcji main
    /// \param argc Liczba argumentów przekazanych
    /// \param argv Tablica dynamiczna przekazanych argumentów
    AppManager(int argc, char **argv);

private:
    /// Główna funkcja programu
    void Run();
    /// Funkcja obsługująca argumenty przekazane do klasy, sprawdza ich poprawność i przypisuje do odpowiednich zmiennych
    /// \param argc Liczba argumentów przekazanych
    /// \param argv Tablica dynamiczna przekazanych argumentów
    void Arguments(int argc, char **argv);
    /// Funkcja wyświetlająca informacje jak używać programu w przypadku niepoprawnych argumentów
    void HelpInfo();
};


#endif OPERACJEMORFOLOGICZNE_APPMANAGER_H
