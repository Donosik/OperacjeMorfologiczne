#include "Erosion.h"

void Erosion::Calculate()
{
    std::vector<std::vector<int>> resultArray;
    for (int i = 0; i < array.size(); i++)
    {
        std::vector<int> tmpArray;
        for (int j = 0; j < array[i].size(); j++)
        {
            tmpArray.push_back(0);
        }
        resultArray.push_back(tmpArray);
    }

    int white = 0;
    int black = 1;
    for (int i = 1; i < array.size() - 1; i++)
    {
        for (int j = 1; j < array[i].size() - 1; j++)
        {
            if (array[i - 1][j - 1] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i - 1][j + 1] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i - 1][j] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i + 1][j - 1] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i + 1][j] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i + 1][j + 1] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i][j - 1] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            if (array[i][j + 1] == white)
            {
                resultArray[i][j] = white;
                continue;
            }
            resultArray[i][j] = black;
        }
    }

    array = resultArray;
}