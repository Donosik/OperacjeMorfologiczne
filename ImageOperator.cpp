#include "ImageOperator.h"

void ImageOperator::SetArray(std::vector<std::vector<int>> &arr)
{
    array=arr;
}

std::vector<std::vector<int>> ImageOperator::GetArray()
{
    return array;
}