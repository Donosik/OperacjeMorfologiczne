#include "ImageProcesser.h"

ImageProcesser::ImageProcesser(std::vector<std::vector<int>> &arr) : array(arr)
{
    listOfOperators = new std::string[]{"BottomHat", "Closure", "Dilatation", "Erosion", "Opening", "TopHat"};
    numberOfOperators = 6;
    Operate();
}

std::vector<std::vector<int>> ImageProcesser::GetArray()
{
    return array;
}

void ImageProcesser::Operate()
{
    std::unique_ptr<ImageOperator> imageOperator;
    int input;

    while (true)
    {
        system("cls");
        std::cout << "Prosze wybrac, ktora funkcja ma oddzialywac na obraz:" << std::endl;
        std::cout << "0. Zakonczenie pracy programu i zapisanie obrobionych danych do pliku" << std::endl;
        for (int i = 0; i < numberOfOperators; i++)
        {
            std::cout << i + 1 << ". " << listOfOperators[i] << std::endl;
        }
        std::cin >> input;

        if (input == 0)
        {
            return;
        }
        if (input > 0 && input <= numberOfOperators)
        {
            imageOperator = std::make_unique<BottomHat>();
            switch (input)
            {
                case 1:
                {
                    imageOperator = std::make_unique<BottomHat>();
                }
                    break;
                case 2:
                {
                    imageOperator = std::make_unique<Closure>();
                }
                    break;
                case 3:
                {
                    imageOperator = std::make_unique<Dilatation>();
                }
                    break;
                case 4:
                {
                    imageOperator = std::make_unique<Erosion>();
                }
                    break;
                case 5:
                {
                    imageOperator = std::make_unique<Opening>();
                }
                    break;
                case 6:
                {
                    imageOperator = std::make_unique<TopHat>();
                }
                    break;
            }
            imageOperator->SetArray(array);
            imageOperator->Calculate();
            array=imageOperator->GetArray();
        }
        else
        {
            std::cout << "Wybrano niepoprawny przelacznik" << std::endl;
            std::cout << "Prosze wybrac jeszcze raz" << std::endl;
        }

    }
}