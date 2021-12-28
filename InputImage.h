#ifndef OPERACJEMORFOLOGICZNE_INPUTIMAGE_H
#define OPERACJEMORFOLOGICZNE_INPUTIMAGE_H

#include <fstream>
#include <vector>
#include <sstream>

class InputImage
{
    std::string fileName;
    std::ifstream file;
public:
    InputImage(std::string name);
    std::vector<std::vector<int>> LoadFromFile();
};


#endif OPERACJEMORFOLOGICZNE_INPUTIMAGE_H
