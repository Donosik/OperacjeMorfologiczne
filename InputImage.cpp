#include "InputImage.h"

InputImage::InputImage(std::string name) : fileName(name)
{

}

std::vector<std::vector<int>> InputImage::LoadFromFile()
{
    file.open(fileName);
    if(!file.is_open())
    {
        throw std::exception("File doesn't exist");
    }

     std::vector<std::vector<int>> array;

    std::string line;
    while(std::getline(file,line))
    {
        std::vector<int> tmpArray;
        std::stringstream ss(line);
        int tmp;
        while(ss>>tmp)
        {
            tmpArray.push_back(tmp);
        }
        array.push_back(tmpArray);
    }

    file.close();
    return array;
}