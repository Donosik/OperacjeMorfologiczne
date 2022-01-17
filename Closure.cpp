#include "Closure.h"

#include <memory>

void Closure::Calculate()
{
    std::unique_ptr<ImageOperator> imageOperator(new Dilatation);
    imageOperator->SetArray(array);
    imageOperator->Calculate();
    array=imageOperator->GetArray();
    imageOperator = std::make_unique<Erosion>();
    imageOperator->SetArray(array);
    imageOperator->Calculate();
    array=imageOperator->GetArray();
}