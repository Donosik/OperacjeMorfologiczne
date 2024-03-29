#include "SaveImage.h"

SaveImage::SaveImage()
{}

void SaveImage::SetFile(std::string name)
{
    fileName = name;
}

void SaveImage::SaveToFile(std::vector<std::vector<int>> array)
{
    file.open(fileName);
    if (!file.is_open())
    {
        throw std::exception("File can't be created");
    }
    for (auto &x: array)
    {
        for (auto &y: x)
        {
            file << y << " ";
        }
        file << std::endl;
    }
    file.close();
}