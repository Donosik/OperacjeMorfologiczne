#ifndef OPERACJEMORFOLOGICZNE_SAVEIMAGE_H
#define OPERACJEMORFOLOGICZNE_SAVEIMAGE_H

#include <fstream>
#include <vector>

class SaveImage
{
    std::string fileName;
    std::ofstream file;
public:
    SaveImage(std::string name);
    void SaveToFile(std::vector<std::vector<int>> array);
};


#endif OPERACJEMORFOLOGICZNE_SAVEIMAGE_H
