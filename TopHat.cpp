#include "TopHat.h"

void TopHat::Calculate()
{
    auto arrayTmp = array;
    std::unique_ptr<ImageOperator> imageOperator(new Opening);
    imageOperator->SetArray(arrayTmp);
    imageOperator->Calculate();
    arrayTmp=imageOperator->GetArray();
    for(int i=0;i<array.size();i++)
    {
        for(int j=0;j<array[i].size();j++)
        {
            if(array[i][j]==1)
            array[i][j]=array[i][j]-arrayTmp[i][j];
        }
    }
}