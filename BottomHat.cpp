#include "BottomHat.h"

void BottomHat::Calculate()
{
    auto arrayTmp = array;
    std::unique_ptr<ImageOperator> imageOperator(new Closure);
    imageOperator->SetArray(arrayTmp);
    imageOperator->Calculate();
    arrayTmp = imageOperator->GetArray();
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
        {
            array[i][j] = arrayTmp[i][j] - array[i][j];
            if (array[i][j] < 0)
                array[i][j] = 0;
        }
    }
}
