#include "Opening.h"

void Opening::Calculate()
{
    std::unique_ptr<ImageOperator> imageOperator(new Erosion);
    imageOperator->SetArray(array);
    imageOperator->Calculate();
    array = imageOperator->GetArray();
    imageOperator = std::make_unique<Dilatation>();
    imageOperator->SetArray(array);
    imageOperator->Calculate();
    array = imageOperator->GetArray();
}